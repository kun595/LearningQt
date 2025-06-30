#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //连接信号与槽：enter回车连接确认按钮
    connect(ui->cmdlineEdit, SIGNAL(returnPressed()), this, SLOT(on_confirmButton_clicked()));
    //地址写法
    connect(ui->cancelButton, &QPushButton::clicked, this, &Widget::on_cancelButton_clicked);

    connect(ui->browseButton, &QPushButton::clicked, this, &Widget::on_browseButton_clickednotauto);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_confirmButton_clicked()
{
    QString program = ui->cmdlineEdit->text();
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}


void Widget::on_cancelButton_clicked()
{
    this->close();
}


void Widget::on_browseButton_clickednotauto()
{
    QString fillPath = QFileDialog::getOpenFileName(this, "选择文件");
    QProcess *myProcess = new QProcess(this);
    myProcess->start(fillPath);
}

