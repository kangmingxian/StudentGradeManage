#include "studentdialog.h"
#include "ui_studentdialog.h"
#include <QDebug>
#include <QMessageBox>

StudentDialog::StudentDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    createDB();
    createTable();
    queryTable();
}

StudentDialog::~StudentDialog()
{
    delete ui;
}
void StudentDialog::createDB()
{
    //添加数据库驱动
    db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名字
    db.setDatabaseName("student.db");
    //打开数据库
    if(db.open() == true){
        qDebug() <<"创建/打开数据库成功";
    }else{
        qDebug() <<"创建/打开数据库失败";
    }
}
void StudentDialog::createTable()
{
    QSqlQuery query;
    QString str = QString("CREATE TABLE student ("
                          "id INT PRIMARY KEY NOT NULL,"
                          "name TEXT NOT NULL,"
                          "score REAL NOT NULL)");
    if(query.exec(str) == false){
        qDebug() << str;
    }else{
        qDebug() << "创建数据表成功";
    }
}
void StudentDialog::queryTable(){
    QString str = QString("SELECT * FROM student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}//执行查询操作

//插入按钮对应的槽函数
void StudentDialog::on_insertButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id == 0)
    {
        QMessageBox::critical(this,"ERROR","ID输入错误");
        return;
    }
    QString name = ui->nameEdit->text();
    if(name == "")
    {
        QMessageBox::critical(this,"ERROR","姓名输入错误");
        return;
    }
    double score = ui->scoreEdit->text().toDouble();
    if(score < 0 || score >100)
    {
        QMessageBox::critical(this,"ERROR","成绩输入错误");
        return;
    }
    QString str = QString("INSERT INTO student "
                          "VALUES(%1,'%2',%3)")
            .arg(id).arg(name).arg(score);
    if(query.exec(str) == false){
        qDebug() << str;
    }else{
        qDebug() <<"插入数据成功";
        queryTable();
    }
}
//删除按钮对应的槽函数
void StudentDialog::on_deleteButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString str = QString("DELETE FROM student WHERE id = %1").arg(id);
    if(QMessageBox::question(this,"DELETE","是否确定删除？",
                             QMessageBox::Yes|QMessageBox::No) == QMessageBox::No){
        return;
    }
    if(query.exec(str) == false){
        qDebug() << str;
    }else
    {
        qDebug() << "删除操作成功";
        queryTable();
    }
}
//修改按钮对应的槽函数
void StudentDialog::on_updateButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    double score = ui->scoreEdit->text().toDouble();
    QString str = QString("UPDATE student SET score=%1 "
                          "WHERE id=%2").arg(score).arg(id);
    if(query.exec(str) == false){
        qDebug() << str;
    }else
    {
        qDebug() << "修改操作成功";
        queryTable();
    }

}
//查询按钮对应的槽函数
void StudentDialog::on_getButton_clicked()
{
    int id = ui->idEdit->text().toInt();
    QString str = QString("SELECT * FROM student "
                          "WHERE ID = %1").arg(id);
    model.setQuery(str);
    ui->tableView->setModel(&model);
}
//排序按钮对应的槽函数
void StudentDialog::on_sortButton_clicked()
{
    //获取排序列名
    QString value = ui->valueComBox->currentText();
    //获取排序方式
    QString condition;
    if(ui->condcomBox->currentIndex() == 0){
        condition = "ASC";//升序
    }else{
        condition = "DESC";//降序
    }
    QString str = QString("SELECT * FROM student ORDER BY %1 %2").arg(value)
            .arg(condition);
    //查询和显示
    model.setQuery(str);
    ui->tableView->setModel(&model);
}
