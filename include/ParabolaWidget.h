#pragma once

#include <qcustomplot.h>
#include <QWidget>
#include <QtQml/qqmlregistration.h>
#include <QDebug>

class ParabolaWidget : public QWidget/*, public QQmlPropertyValueSource*/
{
    Q_OBJECT

    Q_PROPERTY(int minX READ minX WRITE setMinX NOTIFY updateDisplay)
    Q_PROPERTY(int maxX READ maxX WRITE setMaxX NOTIFY updateDisplay)
    Q_PROPERTY(int minY READ minY WRITE setMinY NOTIFY updateDisplay)
    Q_PROPERTY(int maxY READ maxY WRITE setMaxY NOTIFY updateDisplay)
    //Q_PROPERTY(QWidget parent READ parent WRITE setNewParent NOTIFY parentChanged)
    QML_ELEMENT
public:
    ParabolaWidget(QWidget *parent = nullptr, int minX = -1, int maxX = 1, int minY = -1, int maxY = 1) :
        QWidget(parent), m_min_x(minX), m_max_x(maxX), m_min_y(minY), m_max_y(maxY)
    {   
        qDebug() << parent;
        //QObject::connect(&m_timer, SIGNAL(timeout()), SLOT(updateDisplay()));
        //m_timer.start(1000);
        QLabel *label = new QLabel("Parabola", this);
        label->setAlignment(Qt::AlignCenter);
        customPlot = new QCustomPlot(this);
        customPlot->addGraph();
        setDisplay(m_min_x, m_max_x, m_min_y, m_max_y);
        qDebug() << "Default size hint of Widget: " << this->sizeHint();
        this->setStyleSheet("background-color: lightblue;");
        this->resize(400, 300);
        this->show();
    }
    int minX() const {return m_min_x;}
    int maxX() const {return m_max_x;}
    int minY() const {return m_min_y;}
    int maxY() const {return m_max_y;}
    //QSize baseSize() const {return QWidget::baseSize();}
    //QWidget parent() const {return parentWidget();}
    int height() const {return QWidget::height();}
    void setMinX(int value);
    void setMaxX(int value);
    void setMinY(int value);
    void setMaxY(int value);
    //void setNewParent(QWidget newParent) {setParent(&newParent);}
    //void setBaseSize(QSize size) {QWidget::setBaseSize(size);}
    void updateDisplay(bool reset = false) {}
    //void parentChanged(){}

public slots:
    void setDisplay(int minX, int maxX, int minY, int maxY);

signals:


private:
//private variables are prefixed with 'm_'
    //QTimer m_timer;
    QCustomPlot *customPlot;
    int m_min_x;
    int m_max_x;
    int m_min_y;
    int m_max_y;

};