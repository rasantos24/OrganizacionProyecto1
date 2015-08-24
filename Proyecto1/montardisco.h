#ifndef MONTARDISCO_H
#define MONTARDISCO_H

#include <QDialog>

namespace Ui {
class MontarDisco;
}

class MontarDisco : public QDialog
{
    Q_OBJECT

public:
    explicit MontarDisco(QWidget *parent = 0);
    ~MontarDisco();

private:
    Ui::MontarDisco *ui;
};

#endif // MONTARDISCO_H
