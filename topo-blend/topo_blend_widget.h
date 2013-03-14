#pragma once

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class topo_blend_widget;
}

class topoblend;

class topo_blend_widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit topo_blend_widget(topoblend * topo_blend, QWidget *parent = 0);
    ~topo_blend_widget();

public slots:
    void renderViewer();
    void renderAnimation();
    void loadAnimationModel();
    void doBlend();
	void loadCorrespondenceModel();
	void showGroupingDialog();
	void vizButtonClicked(QAbstractButton* b);

private:
    Ui::topo_blend_widget *ui;
    topoblend * tb;
};
