#ifndef TABLEPROCESSOR_H
#define TABLEPROCESSOR_H

#include <QTableWidget>
#include <QHeaderView>
#include <QTableWidgetItem>
#include <QString>
#include "event.h"

const short unsigned int NUMBER_OF_COLUMNS = 4;

class TableProcessor
{
public:
    TableProcessor() {}
    TableProcessor(QTableWidget *table);
    ~TableProcessor() {}

    void addEvent(Event *event);
    void setTable(QTableWidget *table);
    void addTournamentName(const QString &name);


private:
    QTableWidget *pTable;

    void addRow();
    void prepareTable();
};

#endif // TABLEPROCESSOR_H
