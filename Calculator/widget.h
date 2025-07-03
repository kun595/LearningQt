#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>
#include <string.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_leftButton_clicked();

    void on_rightButton_clicked();

    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

    void on_clearButton_clicked();

    void on_backButton_clicked();

    void on_equalButton_clicked();



private:
    Ui::Widget *ui;
    QString expression;//表达式用于存储输入在lineedit的数字和符号
    int Priority(char ch);
};
#endif // WIDGET_H
