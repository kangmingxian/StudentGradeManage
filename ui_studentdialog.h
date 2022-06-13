/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *valueComBox;
    QComboBox *condcomBox;
    QPushButton *sortButton;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *idEdit;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *scoreEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QPushButton *getButton;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QString::fromUtf8("StudentDialog"));
        StudentDialog->resize(784, 692);
        QFont font;
        font.setPointSize(11);
        StudentDialog->setFont(font);
        verticalLayout = new QVBoxLayout(StudentDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        valueComBox = new QComboBox(StudentDialog);
        valueComBox->addItem(QString());
        valueComBox->addItem(QString());
        valueComBox->setObjectName(QString::fromUtf8("valueComBox"));

        horizontalLayout->addWidget(valueComBox);

        condcomBox = new QComboBox(StudentDialog);
        condcomBox->addItem(QString());
        condcomBox->addItem(QString());
        condcomBox->setObjectName(QString::fromUtf8("condcomBox"));

        horizontalLayout->addWidget(condcomBox);

        sortButton = new QPushButton(StudentDialog);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));

        horizontalLayout->addWidget(sortButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(StudentDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(StudentDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        idEdit = new QLineEdit(StudentDialog);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        gridLayout->addWidget(idEdit, 0, 1, 1, 1);

        label_3 = new QLabel(StudentDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        nameEdit = new QLineEdit(StudentDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_2 = new QLabel(StudentDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        scoreEdit = new QLineEdit(StudentDialog);
        scoreEdit->setObjectName(QString::fromUtf8("scoreEdit"));

        gridLayout->addWidget(scoreEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        insertButton = new QPushButton(StudentDialog);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        horizontalLayout_2->addWidget(insertButton);

        deleteButton = new QPushButton(StudentDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout_2->addWidget(deleteButton);

        updateButton = new QPushButton(StudentDialog);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        horizontalLayout_2->addWidget(updateButton);

        getButton = new QPushButton(StudentDialog);
        getButton->setObjectName(QString::fromUtf8("getButton"));

        horizontalLayout_2->addWidget(getButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(StudentDialog);

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        valueComBox->setItemText(0, QApplication::translate("StudentDialog", "ID", nullptr));
        valueComBox->setItemText(1, QApplication::translate("StudentDialog", "Score", nullptr));

        condcomBox->setItemText(0, QApplication::translate("StudentDialog", "\345\215\207\345\272\217", nullptr));
        condcomBox->setItemText(1, QApplication::translate("StudentDialog", "\351\231\215\345\272\217", nullptr));

        sortButton->setText(QApplication::translate("StudentDialog", "\346\216\222\345\272\217", nullptr));
        label->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("StudentDialog", "\345\255\246\347\224\237\346\210\220\347\273\251\357\274\232", nullptr));
        insertButton->setText(QApplication::translate("StudentDialog", "\346\217\222\345\205\245", nullptr));
        deleteButton->setText(QApplication::translate("StudentDialog", "\345\210\240\351\231\244", nullptr));
        updateButton->setText(QApplication::translate("StudentDialog", "\344\277\256\346\224\271", nullptr));
        getButton->setText(QApplication::translate("StudentDialog", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H
