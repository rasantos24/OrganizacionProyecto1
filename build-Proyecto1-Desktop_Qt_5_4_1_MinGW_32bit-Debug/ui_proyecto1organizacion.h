/********************************************************************************
** Form generated from reading UI file 'proyecto1organizacion.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO1ORGANIZACION_H
#define UI_PROYECTO1ORGANIZACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proyecto1Organizacion
{
public:
    QWidget *centralWidget;
    QLabel *LabelTitulo;
    QLabel *labelNombre;
    QLabel *labelParticion;
    QLabel *labelEspacio;
    QLabel *labeltamanio;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QPushButton *BotonCrear;
    QPushButton *BotonAbrir;
    QPushButton *BotonEliminar;
    QLabel *labelNombre_2;
    QLabel *labelParticion_2;
    QLabel *labelEspacio_2;
    QLabel *labeltamanio_2;
    QLineEdit *lineEditNombre;
    QLineEdit *lineEditParticion;
    QLineEdit *lineEditTamanio;
    QComboBox *comboBoxEspacio;
    QLabel *label;
    QLabel *labelDisco;
    QComboBox *comboBoxDisco;
    QPushButton *BotonCargar;
    QListWidget *listWidgetPint;
    QPushButton *BotonLog;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Proyecto1Organizacion)
    {
        if (Proyecto1Organizacion->objectName().isEmpty())
            Proyecto1Organizacion->setObjectName(QStringLiteral("Proyecto1Organizacion"));
        Proyecto1Organizacion->resize(931, 339);
        centralWidget = new QWidget(Proyecto1Organizacion);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LabelTitulo = new QLabel(centralWidget);
        LabelTitulo->setObjectName(QStringLiteral("LabelTitulo"));
        LabelTitulo->setGeometry(QRect(150, 20, 91, 16));
        labelNombre = new QLabel(centralWidget);
        labelNombre->setObjectName(QStringLiteral("labelNombre"));
        labelNombre->setGeometry(QRect(40, 60, 91, 16));
        labelParticion = new QLabel(centralWidget);
        labelParticion->setObjectName(QStringLiteral("labelParticion"));
        labelParticion->setGeometry(QRect(40, 100, 91, 16));
        labelEspacio = new QLabel(centralWidget);
        labelEspacio->setObjectName(QStringLiteral("labelEspacio"));
        labelEspacio->setGeometry(QRect(40, 140, 91, 16));
        labeltamanio = new QLabel(centralWidget);
        labeltamanio->setObjectName(QStringLiteral("labeltamanio"));
        labeltamanio->setGeometry(QRect(40, 180, 91, 16));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(160, 60, 47, 13));
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(160, 100, 47, 13));
        label3 = new QLabel(centralWidget);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setGeometry(QRect(160, 140, 47, 13));
        label4 = new QLabel(centralWidget);
        label4->setObjectName(QStringLiteral("label4"));
        label4->setGeometry(QRect(160, 180, 47, 13));
        BotonCrear = new QPushButton(centralWidget);
        BotonCrear->setObjectName(QStringLiteral("BotonCrear"));
        BotonCrear->setGeometry(QRect(260, 60, 75, 23));
        BotonAbrir = new QPushButton(centralWidget);
        BotonAbrir->setObjectName(QStringLiteral("BotonAbrir"));
        BotonAbrir->setGeometry(QRect(260, 110, 75, 23));
        BotonEliminar = new QPushButton(centralWidget);
        BotonEliminar->setObjectName(QStringLiteral("BotonEliminar"));
        BotonEliminar->setGeometry(QRect(260, 160, 75, 23));
        labelNombre_2 = new QLabel(centralWidget);
        labelNombre_2->setObjectName(QStringLiteral("labelNombre_2"));
        labelNombre_2->setGeometry(QRect(390, 60, 91, 16));
        labelParticion_2 = new QLabel(centralWidget);
        labelParticion_2->setObjectName(QStringLiteral("labelParticion_2"));
        labelParticion_2->setGeometry(QRect(390, 100, 91, 16));
        labelEspacio_2 = new QLabel(centralWidget);
        labelEspacio_2->setObjectName(QStringLiteral("labelEspacio_2"));
        labelEspacio_2->setGeometry(QRect(390, 140, 91, 16));
        labeltamanio_2 = new QLabel(centralWidget);
        labeltamanio_2->setObjectName(QStringLiteral("labeltamanio_2"));
        labeltamanio_2->setGeometry(QRect(390, 180, 101, 16));
        lineEditNombre = new QLineEdit(centralWidget);
        lineEditNombre->setObjectName(QStringLiteral("lineEditNombre"));
        lineEditNombre->setGeometry(QRect(510, 60, 113, 20));
        lineEditParticion = new QLineEdit(centralWidget);
        lineEditParticion->setObjectName(QStringLiteral("lineEditParticion"));
        lineEditParticion->setGeometry(QRect(510, 100, 113, 20));
        lineEditTamanio = new QLineEdit(centralWidget);
        lineEditTamanio->setObjectName(QStringLiteral("lineEditTamanio"));
        lineEditTamanio->setGeometry(QRect(510, 180, 113, 20));
        comboBoxEspacio = new QComboBox(centralWidget);
        comboBoxEspacio->setObjectName(QStringLiteral("comboBoxEspacio"));
        comboBoxEspacio->setGeometry(QRect(510, 140, 111, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 20, 71, 16));
        labelDisco = new QLabel(centralWidget);
        labelDisco->setObjectName(QStringLiteral("labelDisco"));
        labelDisco->setGeometry(QRect(390, 220, 71, 16));
        comboBoxDisco = new QComboBox(centralWidget);
        comboBoxDisco->setObjectName(QStringLiteral("comboBoxDisco"));
        comboBoxDisco->setGeometry(QRect(510, 220, 111, 22));
        BotonCargar = new QPushButton(centralWidget);
        BotonCargar->setObjectName(QStringLiteral("BotonCargar"));
        BotonCargar->setGeometry(QRect(260, 210, 75, 23));
        listWidgetPint = new QListWidget(centralWidget);
        listWidgetPint->setObjectName(QStringLiteral("listWidgetPint"));
        listWidgetPint->setGeometry(QRect(660, 60, 231, 192));
        BotonLog = new QPushButton(centralWidget);
        BotonLog->setObjectName(QStringLiteral("BotonLog"));
        BotonLog->setGeometry(QRect(740, 20, 75, 23));
        Proyecto1Organizacion->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Proyecto1Organizacion);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 931, 21));
        Proyecto1Organizacion->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Proyecto1Organizacion);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Proyecto1Organizacion->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Proyecto1Organizacion);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Proyecto1Organizacion->setStatusBar(statusBar);

        retranslateUi(Proyecto1Organizacion);

        QMetaObject::connectSlotsByName(Proyecto1Organizacion);
    } // setupUi

    void retranslateUi(QMainWindow *Proyecto1Organizacion)
    {
        Proyecto1Organizacion->setWindowTitle(QApplication::translate("Proyecto1Organizacion", "Proyecto1Organizacion", 0));
        LabelTitulo->setText(QApplication::translate("Proyecto1Organizacion", "Mis Datos del Disco", 0));
        labelNombre->setText(QApplication::translate("Proyecto1Organizacion", "Nombre del Disco:", 0));
        labelParticion->setText(QApplication::translate("Proyecto1Organizacion", "Particion del Disco:", 0));
        labelEspacio->setText(QApplication::translate("Proyecto1Organizacion", "Espacio del Disco:", 0));
        labeltamanio->setText(QApplication::translate("Proyecto1Organizacion", "Tamanio del Disco:", 0));
        label1->setText(QApplication::translate("Proyecto1Organizacion", "*******", 0));
        label2->setText(QApplication::translate("Proyecto1Organizacion", "*******", 0));
        label3->setText(QApplication::translate("Proyecto1Organizacion", "*******", 0));
        label4->setText(QApplication::translate("Proyecto1Organizacion", "*******", 0));
        BotonCrear->setText(QApplication::translate("Proyecto1Organizacion", "Crear", 0));
        BotonAbrir->setText(QApplication::translate("Proyecto1Organizacion", "Abrir", 0));
        BotonEliminar->setText(QApplication::translate("Proyecto1Organizacion", "Eliminar", 0));
        labelNombre_2->setText(QApplication::translate("Proyecto1Organizacion", "Nombre del Disco:", 0));
        labelParticion_2->setText(QApplication::translate("Proyecto1Organizacion", "Particion del Disco:", 0));
        labelEspacio_2->setText(QApplication::translate("Proyecto1Organizacion", "Espacio del Disco:", 0));
        labeltamanio_2->setText(QApplication::translate("Proyecto1Organizacion", "Cantidad de Bloques:", 0));
        comboBoxEspacio->clear();
        comboBoxEspacio->insertItems(0, QStringList()
         << QApplication::translate("Proyecto1Organizacion", "256", 0)
         << QApplication::translate("Proyecto1Organizacion", "512", 0)
         << QApplication::translate("Proyecto1Organizacion", "1024", 0)
        );
        label->setText(QApplication::translate("Proyecto1Organizacion", "Crear Mi Disco", 0));
        labelDisco->setText(QApplication::translate("Proyecto1Organizacion", "Disco a Abrir:", 0));
        BotonCargar->setText(QApplication::translate("Proyecto1Organizacion", "Cargar", 0));
        BotonLog->setText(QApplication::translate("Proyecto1Organizacion", "Log", 0));
    } // retranslateUi

};

namespace Ui {
    class Proyecto1Organizacion: public Ui_Proyecto1Organizacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO1ORGANIZACION_H
