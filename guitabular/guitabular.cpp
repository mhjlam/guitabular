#include "stdafx.h"
#include "guitabular.h"

Guitabular::Guitabular(QWidget* parent) : QMainWindow(parent)
{
    createActions();

    ui.setupUi(this);
}

void Guitabular::createActions()
{
    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));

    QAction* exitAct = new QAction(tr("&New"), this);
    exitAct->setShortcuts(QKeySequence::Close);
    connect(exitAct, &QAction::triggered, this, &Guitabular::closeEvent);
    fileMenu->addAction(exitAct);
}

void Guitabular::closeEvent(QCloseEvent* event)
{
    event->accept();
}
