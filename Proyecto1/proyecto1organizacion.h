#ifndef PROYECTO1ORGANIZACION_H
#define PROYECTO1ORGANIZACION_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "fantescritor.h"
#include "bitmap.h"
#include "inodo.h"
#include "inodotabla.h"
#include "lectura.h"
#include "superblock.h"
#include "discoduro.h"
#include "bloquesdirectos.h"
#include <iostream>
#include <sstream>

using namespace std;

namespace Ui {
class Proyecto1Organizacion;
}

class Proyecto1Organizacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Proyecto1Organizacion(QWidget *parent = 0);
    char* path;
    int tamanioDelBloque;
    DiscoDuro* obejota = new DiscoDuro();
    ~Proyecto1Organizacion();

private slots:
    void on_BotonCrear_clicked();

    void on_BotonAbrir_clicked();

    void on_BotonEliminar_clicked();

    void on_BotonCargar_clicked();

    void on_pushButton_clicked();

    void on_BotonLog_clicked();

private:
    Ui::Proyecto1Organizacion *ui;
    vector<int>* miVector;

    char pathPadre[30];
    int tamanioDeMiBloque;

    FantEscritor* escribir;
    Lectura* leer;
};

#endif // PROYECTO1ORGANIZACION_H
