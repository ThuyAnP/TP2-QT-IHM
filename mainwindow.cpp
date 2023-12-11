#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->FormMessage = new MaForme() ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BoutonArret_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Voulez vous arrêter?");
    msgBox.setInformativeText("Appuyez sur OK pour quitter l'application");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::No);
    int ret = msgBox.exec();
    // On vérifie si l'utilisateur a cliqué sur Ok

    if ( ret == QMessageBox::Ok )
    {
        //l'application se femre et donc tout s'éteint
        close();
    }
    else
    {
        //seulement le message d'arrêt qui se ferme
    }
}

void MainWindow::testForm()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    clickedButton->setText("affichage form widget");
    bool vis = this->FormMessage->isVisible();
    this->FormMessage->setVisible(true);
    vis = this->FormMessage->isVisible();
    this->FormMessage->show();
}
