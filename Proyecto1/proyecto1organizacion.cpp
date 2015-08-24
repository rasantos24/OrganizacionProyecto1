#include "proyecto1organizacion.h"
#include "ui_proyecto1organizacion.h"

Proyecto1Organizacion::Proyecto1Organizacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Proyecto1Organizacion)
{
    ui->setupUi(this);

    escribir = new FantEscritor();
    leer = new Lectura();

    miVector = new vector<int>();
    ifstream in("misDiscos.dat", ios::in|ios::binary|ios::ate);

    int tamanio = in.tellg();
    in.seekg(0);

    char lectura[30];
    QString agregar;

    int numero;
    while (in.tellg()<tamanio)
    {
        in.read(lectura,30);
        in.read((char*)&numero,4);

        miVector->push_back(numero);
        agregar = QString::fromStdString(lectura);

        ui->comboBoxDisco->addItem(agregar);
    }

    in.close();
}

Proyecto1Organizacion::~Proyecto1Organizacion()
{
    delete ui;
}

void Proyecto1Organizacion::on_BotonCrear_clicked()
{
    string nombre = ui->lineEditNombre->text().toStdString();
    char particion = ui->lineEditParticion->text().toStdString().at(0);

    int indice = ui->comboBoxEspacio->currentIndex();
    char nombreDisco[30];

    size_t tamanio = nombre.copy(nombreDisco, 30, 0);
    nombreDisco[tamanio]='\0';

    int tamanioDelBloque = 0;

    if(indice == 0)
        tamanioDelBloque = 256;
    else if(indice == 1)
        tamanioDelBloque = 512;
    else if(indice == 2)
        tamanioDelBloque = 1024;

    int cantBloques = ui->lineEditTamanio->text().toInt();
    char path[30];

    string pathConCatenado = nombre+" ("+ui->lineEditParticion->text().toStdString().at(0)+").dat";
    size_t tamanio2 = pathConCatenado.copy(path, 30, 0);

    path[tamanio2]='\0';
    FantEscritor* escribir = new FantEscritor();

    escribir->crearMiDisco(cantBloques, particion, nombreDisco, tamanioDelBloque, path);
    ofstream out("misDiscos.dat", ios::out|ios::app|ios::binary);

    out.write(pathConCatenado.c_str(), 30);
    out.close();

    out.open("misDiscos.dat", ios::out|ios::app|ios::binary);
    out.write((char*)&tamanioDelBloque, 4);

    out.close();
}

void Proyecto1Organizacion::on_BotonAbrir_clicked()
{
/*  Proyecto1Organizacion tgmr;
    tamanioDeMiBloque = tgmr.tamanioDeMiBloque;

    strcpy(pathPadre, tgmr.path);*/
    SuperBlock* superblock = leer->leerMiSuperBlock(pathPadre, tamanioDeMiBloque);

    ui->label1->setText(QString::fromStdString(superblock->NombreDisco));
    stringstream ayuda, ayuda2, ayuda3;

    string particion, espacioUtilizado, restante;
    ayuda<<superblock->Particion;

    ayuda>>particion;
    ui->label2->setText(QString::fromStdString(particion));

    ayuda2<<superblock->getEspacioLibre();
    ayuda2>>espacioUtilizado;

    ayuda3<<superblock->tamanioDeBloques*superblock->numeroDeBloques;
    ayuda3>>restante;

    ui->label3->setText(QString::fromStdString(espacioUtilizado));
    ui->label4->setText(QString::fromStdString(restante));
}

void Proyecto1Organizacion::on_BotonEliminar_clicked()
{

}

void Proyecto1Organizacion::on_BotonCargar_clicked()
{
    string direccion = ui->comboBoxDisco->currentText().toStdString();
    char* ptr =(char*)calloc(30, 1);

    size_t tamanio = direccion.copy(ptr, 30, 0);
    path = ptr;

    tamanioDelBloque = miVector->at(ui->comboBoxDisco->currentIndex());
}

void Proyecto1Organizacion::on_BotonLog_clicked()
{
    for(int x=0; x<obejota->disco.CantBloque; x++)
    {
        stringstream rs;
        string miString;

        rs<<obejota->bitmap[x];
        rs>>miString;

        QString miQString = QString::fromStdString(miString);
        ui->listWidgetPint->addItem(miQString);
    }
}
