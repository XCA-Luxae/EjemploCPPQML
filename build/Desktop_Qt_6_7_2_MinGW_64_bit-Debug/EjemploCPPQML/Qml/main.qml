import QtQuick 2.12
import QtQuick.Controls 2.12
import Utility 1.0
import Counter 1.0

Window {
    width: 640
    height: 640
    visible: true
    title: qsTr("Hello World")

    Image {
        id: gokuImage
        anchors.fill: parent
        source: "qrc:/images/goku.jpg"
        fillMode: Image.PreserveAspectFit
    }

    CppProperty {
        id: counter
    }

    Connections {
        target: counter
        function onCounterChanged(){
            myLabel2.text = counter.getCounter();
        }
    }

    Utilities{
        id: utility
    }

    Button {
        x: 10
        y: 10
        width: 200
        height: 100
        text: "Change Info"
        onClicked: {
            objectQML.function1();
            if (myLabel1.text === utility.getInfo2()) {
                myLabel1.text = utility.getInfo1()
            } else {
                myLabel1.text = utility.getInfo2()
            }
        }
    }

    Text {
        id: myLabel1
        x: 300
        y: 40
        color: "black"
        font.pixelSize: 40
        text: utility.getInfo2()
    }

    Button {
        x: 10
        y: 220
        width: 200
        height: 100
        text: "Counter++"
        onClicked: {
            objectQML.function2();
            counter.setCounter(counter.getCounter() + 1)
            //myLabel2.text = counter.getCounter()
        }
    }

    Text {
        id: myLabel2
        x: 300
        y: 240
        color: "black"
        font.pixelSize: 40
        text: counter.getCounter()
    }

    Button {
        x: 10
        y: 430
        width: 200
        height: 100
        text: "Ventana Ok"
        onClicked: {
            var component = Qt.createComponent("ventanaOk.qml");
            var ventanaOk = component.createObject();
            ventanaOk.show();
        }
    }

}
