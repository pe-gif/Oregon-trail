#ifndef NEWPROJ_H
#define NEWPROJ_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class newproj;
}
QT_END_NAMESPACE

class newproj : public QMainWindow
{
    Q_OBJECT

public:
    newproj(QWidget *parent = nullptr);
    ~newproj();
    QString JOB, MONTH, NAME1, NAME2, NAME3, NAME4, NAME5, TEXT, BILL, OX, FOOD, CLOTH, AMMO, PART, MONEY;
    int num;
    void setname(const QString &n);
    void player(const QString &n);
    void page(const QString &n);
private slots:
    void on_pushButton_clicked();

    void on_resetbutton_clicked();

private:
    Ui::newproj *ui;
};
#endif // NEWPROJ_H
