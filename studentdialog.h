#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class StudentDialog; }
QT_END_NAMESPACE

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    StudentDialog(QWidget *parent = nullptr);
    ~StudentDialog();
private:
    void createDB();
    void createTable();
    void queryTable();//执行查询操作
private slots:
    //插入按钮对应的槽函数
    void on_insertButton_clicked();
    //删除按钮对应的槽函数
    void on_deleteButton_clicked();
    //修改按钮对应的槽函数
    void on_updateButton_clicked();
    //查询按钮对应的槽函数
    void on_getButton_clicked();
    //排序按钮对应的槽函数
    void on_sortButton_clicked();

private:
    Ui::StudentDialog *ui;
    QSqlDatabase db;//建立Qt和数据库的链接
    QSqlQueryModel model;//保存结果集
};
#endif // STUDENTDIALOG_H
