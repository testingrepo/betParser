#include "betparser.h"
#include "ui_betparser.h"

betParser::betParser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::betParser)
{
    ui->setupUi(this);
}

betParser::~betParser()
{
    delete ui;
}
