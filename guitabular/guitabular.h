#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_guitabular.h"

class Guitabular : public QMainWindow
{
    Q_OBJECT

public:
    Guitabular(QWidget* parent = Q_NULLPTR);

protected:
    void closeEvent(QCloseEvent* event) override;

private:
    void createActions();

    Ui::guitabularClass ui;
};
