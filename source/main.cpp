#include <QMainWindow>
#include <QtGui>
//#include <cvode/cvode.h>
//#include <sundials/sundials_types.h>
//#include <sundials/sundials_math.h>
//#include <sundials/sundials_nvector.h>
#include "ParabolaWidget.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>
#include <QtWidgets>
#include <iostream>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    std::cout << "wtf\n";

    QString executablePath = QCoreApplication::applicationDirPath();
    QDir::setCurrent(executablePath);
    //QUrl url = QUrl::fromLocalFile("../source/Main.qml");
    
    std::cout << "Where are these messages even going?\n";

    //QQuickView view;
    ParabolaWidget parabolaWidget;
    parabolaWidget.setMaxX(1);
    parabolaWidget.setMinX(-1);
    parabolaWidget.setMaxY(1);
    parabolaWidget.setMinY(0);
    //view.rootContext()->setContextProperty("parabolaWidget", &parabolaWidget);
    //view.show();
    parabolaWidget.show();

    return app.exec();
}
