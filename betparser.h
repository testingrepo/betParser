#ifndef BETPARSER_H
#define BETPARSER_H

#include <QWidget>

namespace Ui {
    class betParser;
}

class betParser : public QWidget
{
    Q_OBJECT

public:
    explicit betParser(QWidget *parent = 0);
    ~betParser();

private:
    Ui::betParser *ui;
};

#endif // BETPARSER_H
