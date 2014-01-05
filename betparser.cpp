#include "betparser.h"
#include "ui_betparser.h"

/*
    constructor
*/
betParser::betParser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::betParser)
{
    ui->setupUi(this);
    ui->groupBox_4->hide();

    // connect SIGNAL and SLOTS
    connectSignalSlots();
}

/*
    destructor. Remove some variables
*/
betParser::~betParser()
{
    delete ui;
}

/*
  connect signal-function to slot(methods)-function
*/
void betParser::connectSignalSlots()
{
    connect(ui->toolButton, SIGNAL(clicked()), ui->groupBox_4, SLOT(show()));
}
