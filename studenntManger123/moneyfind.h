#ifndef MONEYFIND_H
#define MONEYFIND_H

#include <QWidget>

namespace Ui {
class moneyfind;
}

class moneyfind : public QWidget
{
    Q_OBJECT

public:
    explicit moneyfind(QWidget *parent = nullptr);
    ~moneyfind();

private slots:
    void on_stu_money_queryButton_clicked();

    void on_stu_money_backButton_clicked();

private:
    Ui::moneyfind *ui;
};

#endif // MONEYFIND_H
