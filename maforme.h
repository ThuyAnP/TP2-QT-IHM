#ifndef MAFORME_H
#define MAFORME_H

#include <QWidget>

namespace Ui {
class MaForme;
}

class MaForme : public QWidget
{
    Q_OBJECT

public:
    explicit MaForme(QWidget *parent = nullptr);
    ~MaForme();

private:
    Ui::MaForme *ui;
};

#endif // MAFORME_H
