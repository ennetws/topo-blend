#pragma once

#include <QWidget>
namespace Ui {class Controls;}

class Controls : public QWidget
{
    Q_OBJECT
    
public:
    explicit Controls(QWidget *parent = 0);
    ~Controls();

public slots:
    void tabChanged(int index);
	void forceManualMatch();

signals:
    void hideAll();
    void showSelect();
    void showMatch();
    void showCreate();

private:
    Ui::Controls *ui;
};
