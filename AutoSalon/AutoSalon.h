#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AutoSalon.h"

class AutoSalon : public QMainWindow
{
    Q_OBJECT

public:
    AutoSalon(QWidget *parent = Q_NULLPTR);

private:
    Ui::AutoSalonClass ui;
};
