#include "notepad.h"
#include "ui_notepad.h"
#include "QFileDialog"
#include "QFile"
#include "QTextStream"
#include "QFontDialog"
#include "QFont"
#include "QTextCharFormat"
#include "QInputDialog"
#include "QTextBlock"
#include "QTextCursor"
#include "QLineEdit"
#include "QDate"
#include "QMessageBox"

notepad::notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::notepad)
{
    ui->setupUi(this);
}

notepad::~notepad()
{
    delete ui;
}

void notepad::on_action_triggered()
{
    //новый
    ui->textEdit->clear();
}

void notepad::on_action_2_triggered()
{
    //открыть
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::AnyFile);
    QString filename = dialog.getOpenFileName(NULL, "Open file", "", "");
    QFile file(filename);

    file.open(QFile::ReadOnly|QFile::Text);
    QTextStream in(&file);
    ui->textEdit->setText(in.readAll());
    file.close();
}

void notepad::on_action_3_triggered()
{
    //сохранить как
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::AnyFile);
    QString filename = dialog.getSaveFileName(NULL, "Save file", "", "");
    QFile file(filename);

    file.open(QFile::WriteOnly|QFile::Text);
    QTextStream out(&file);
    out<<ui->textEdit->toHtml();
    out.flush();
    file.close();
}

void notepad::on_action_4_triggered()
{
    //отменить
    ui->textEdit->undo();
}

void notepad::on_action_5_triggered()
{
    //копировать
    _copytext = ui->textEdit->textCursor().selectedText();
}

void notepad::on_action_6_triggered()
{
    //вставить
    ui->textEdit->textCursor().insertHtml(_copytext);
}

void notepad::on_action_9_triggered()
{
    //слева
    ui->textEdit->setAlignment(Qt::AlignLeft);
}

void notepad::on_action_10_triggered()
{
    //по центру
    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void notepad::on_action_11_triggered()
{
    //справа
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void notepad::on_action_7_triggered()
{
    //шрифт
    QFontDialog dialog;
    QFont font = dialog.getFont(NULL);
    QTextCharFormat format;
    format.setFont(font);
    ui->textEdit->textCursor().setCharFormat(format);
}

void notepad::on_action_13_triggered()
{
    //перейти на строку
    bool ok;
    int num = QInputDialog::getInt(0, "Перейти", "На строку: ", 1, 1, ui->textEdit->document()->lineCount(), 1, &ok);
    QTextBlock block = ui->textEdit->document()->findBlockByLineNumber(num - 1);
    QTextCursor cursor(block);
    ui->textEdit->setTextCursor(cursor);
}

void notepad::on_action_12_triggered()
{
    //поиск
    bool bOk;
    QString str = QInputDialog::getText(0, "Найти", "Введите текст", QLineEdit::Normal, "", &bOk);
    if(!bOk){return;}
    QTextCursor oldCursor = ui->textEdit->textCursor();
    ui->textEdit->setTextCursor(QTextCursor(ui->textEdit->document()->findBlockByLineNumber(0)));
    bool finded = ui->textEdit->find(str);
    if(!finded) ui->textEdit->setTextCursor(oldCursor);
}

void notepad::on_action_16_triggered()
{
    //выход
    close();
}

void notepad::on_action_19_triggered()
{
    //удалить
    ui->textEdit->textCursor().deleteChar();
}

void notepad::on_action_20_triggered()
{
    //вставить дату
    ui->textEdit->textCursor();
    QDate date = QDate::currentDate();
    ui->textEdit->insertHtml(date.toString());
}

void notepad::on_action_18_triggered()
{
    //вырезать
    _copytext = ui->textEdit->textCursor().selectedText();
    ui->textEdit->textCursor().deleteChar();
}

void notepad::on_action_14_triggered()
{
    //сохранить
    QFile file("D:\\progr\\qt\\lab8\\notepad\\1.txt");

    file.open(QFile::WriteOnly|QFile::Text);
    QTextStream out(&file);
    out<<ui->textEdit->toHtml();
    out.flush();
    file.close();
}

void notepad::on_action_15_triggered()
{
    //печать

}

void notepad::on_action_17_triggered()
{
    //повторить
    ui->textEdit->redo();
}

void notepad::on_action_21_triggered()
{
    //заменить
    bool bOk;
    QString str = QInputDialog::getText(0, "Найти", "Введите текст", QLineEdit::Normal, "", &bOk);
    if(!bOk){return;}
    QString str_rep = QInputDialog::getText(0, "Заменить", "Введите текст", QLineEdit::Normal, "", &bOk);
    if(!bOk){return;}
    QTextCursor oldCursor = ui->textEdit->textCursor();
    ui->textEdit->setTextCursor(QTextCursor(ui->textEdit->document()->findBlockByLineNumber(0)));
    bool finded = ui->textEdit->find(str);
    if(!finded) ui->textEdit->setTextCursor(oldCursor);

    ui->textEdit->textCursor().insertHtml(str_rep);
}

void notepad::on_action_22_triggered()
{
    //о программе
    QMessageBox msg;
    msg.setText("Программа: блокнот \nРазработала: Шульгина Мария \nДата создания: апрель 2018 \nВерсия: 1.0 \nВсе права не защещены");
    msg.exec();
}
