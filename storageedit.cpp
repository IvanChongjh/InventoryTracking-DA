//Created By Ivan Chong Jia Hao
// Personal Project Completed 2024/5/11
//
#include "storageedit.h"
#include "ui_storageedit.h"

StorageEdit::StorageEdit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StorageEdit)
{
    ui->setupUi(this);
}

StorageEdit::~StorageEdit()
{
    delete ui;
}

