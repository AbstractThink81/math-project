import QtQuick
import QtQuick.Controls
import QtQml
import mathProject

Window {
    id: mainWindow
    visible: true
    width: 600
    height: 400
    title: qsTr("Math Project")
    //Instantiate the C++ widget
    ParabolaWidget {
        id: parabolaWidget
        parent: mainWindow
        minX: -width / 100
        maxX: width / 100
        minY: -height / 100
        maxY: height / 100
    }
}
