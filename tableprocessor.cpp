#include "tableprocessor.h"

TableProcessor::TableProcessor(QTableWidget *table)
{
    pTable = table;

    // prepare table
    prepareTable();
}

/*
    Base methods
*/


void TableProcessor::addEvent(Event *event)
{
    // add empty row to table
    addRow();

    QTableWidgetItem *participantNameItem = new QTableWidgetItem();
    participantNameItem->setBackgroundColor(QColor("green"));

    QTableWidgetItem *participantValueItem = new QTableWidgetItem();
    participantValueItem->setBackgroundColor(QColor("red"));


    // add first participant. Add name
    participantNameItem->setText(event->firstParticipant().name());
    pTable->setItem(pTable->rowCount()-1, 0, participantNameItem);

    // add first participant. Add value
    participantValueItem->setText(QString::number(event->firstParticipant().value()));
    pTable->setItem(pTable->rowCount()-1, 1, participantValueItem);

    // add second participant. Add name

    pTable->setItem(pTable->rowCount()-1, 2, new QTableWidgetItem(event->secondParticipant().name()));

    // add second participant. Add value
    pTable->setItem(pTable->rowCount()-1, 3, new QTableWidgetItem(QString::number(event->secondParticipant().value())));
}

void TableProcessor::setTable(QTableWidget *table)
{
    pTable = table;
    prepareTable();
}

void TableProcessor::addTournamentName(const QString &name)
{
    // add empty row to table
    addRow();

    QTableWidgetItem *item = new QTableWidgetItem(name);
    item->setBackgroundColor(QColor("yellow"));

    pTable->setItem(pTable->rowCount()-1,0, item);
    // set span for Tournament name
    pTable->setSpan(pTable->rowCount()-1,0,1, NUMBER_OF_COLUMNS);
}

void TableProcessor::addRow()
{
    // increment the number of rows
    pTable->setRowCount(pTable->rowCount()+1);
}

void TableProcessor::prepareTable()
{
    // hide table headers
    pTable->verticalHeader()->hide();
    pTable->horizontalHeader()->hide();

    // streck last section
    pTable->horizontalHeader()->setStretchLastSection(true);

    // set defalut number of columns
    pTable->setColumnCount(NUMBER_OF_COLUMNS);

    // set height of rows
    pTable->verticalHeader()->setDefaultSectionSize(20);

    // set gradient
    pTable->setStyleSheet("QTableWidget::item {background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f0f0ff, stop: 0.4 #f4f4ff, stop: 0.5 #e7e7ff, stop: 1.0 #d0d9f0);}");
}
