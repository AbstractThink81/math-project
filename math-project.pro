QT += core gui widgets printsupport quick qmlworkerscript

CONFIG += debug qmltypes console

QML_IMPORT_NAME = mathProject

QML_IMPORT_MAJOR_VERSION = 1

QMAKE_FLAGS += -g -O0 -m64

TARGET = math-project

SOURCES += source/ParabolaWidget.cpp \
            source/Main.cpp

RESOURCES += source/Main.qml

RC_ICONS = source/icon.ico

HEADERS += include/ParabolaWidget.h \
            include/VsCodeMessageHandler.h

INCLUDEPATH += "C:/Program Files/QCustomPlot" \
                "C:/Program Files/sundials/include" \
                "C:/Program Files/sundials/mingw-build/include" \
                "include"

LIBS += -Ldebug -lqcustomplotd2 -lqcustomplot2 -lQt6Core -lQt6Gui -lQt6Widgets