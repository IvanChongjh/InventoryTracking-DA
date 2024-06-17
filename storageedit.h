#ifndef STORAGEEDIT_H
#define STORAGEEDIT_H

#include <QDialog>

namespace Ui {
class StorageEdit;
}

class StorageEdit : public QDialog
{
    Q_OBJECT

public:
    explicit StorageEdit(QWidget *parent = nullptr);
    ~StorageEdit();

private:
    Ui::StorageEdit *ui;
};

#endif // STORAGEEDIT_H
