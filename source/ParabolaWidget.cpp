#include "ParabolaWidget.h"
#include <qcustomplot.h>
#include <QWidget>
#include <QDebug>

void ParabolaWidget::setMinX(int value)
{
    setDisplay(value, m_max_x, m_min_y, m_max_y);
}

void ParabolaWidget::setMaxX(int value)
{
    setDisplay(m_min_x, value, m_min_y, m_max_y);
}

void ParabolaWidget::setMinY(int value)
{
    setDisplay(m_min_x, m_max_x, value, m_max_y);
}

void ParabolaWidget::setMaxY(int value)
{
    setDisplay(m_min_x, m_max_x, m_min_y, value);
}

void ParabolaWidget::setDisplay(int minX, int maxX, int minY, int maxY)
{
    m_min_x = minX;
    m_max_x = maxX;
    m_min_y = minY;
    m_max_y = maxY;
    qDebug() << "attempting to plot graph...";

    //setting graph values
    QVector<double> x(101), y(101);
    for (int i = 0; i < 101; ++i)
    {
        x[i] = static_cast<double>(i) / 50 - 1;
        y[i] = x[i] * x[i];
    }

    // Set up the plot
    customPlot->graph(0)->setData(x, y);
    customPlot->xAxis->setLabel("X");
    customPlot->yAxis->setLabel("Y");

    customPlot->xAxis->setRange(minX, maxX);
    customPlot->yAxis->setRange(minY, maxY);

    customPlot->resize(400, 300);

    customPlot->replot();
    qDebug() << "finished plotting graph";
}