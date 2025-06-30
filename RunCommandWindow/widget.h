#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProcess>
#include <QFileDialog>

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
    void on_confirmButton_clicked();

    void on_cancelButton_clicked();

    void on_browseButton_clickednotauto();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
