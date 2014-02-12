#ifndef SANATATEPLUS_H
#define SANATATEPLUS_H

#include <QMainWindow>

namespace Ui {
class Sanatateplus;
}

class Sanatateplus : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sanatateplus(QWidget *parent = 0);
    ~Sanatateplus();

private:
    Ui::Sanatateplus *ui;
};

#endif // SANATATEPLUS_H
