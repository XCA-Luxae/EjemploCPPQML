import QtQuick 2.12
import QtQuick.Controls 2.12

Window {
    id: ventanaOk
    width: 400
    height: 400
    visible: true
    title: qsTr("Ventana Ok")

    Image {
        id: okImage
        anchors.fill: parent
        source: "qrc:/images/ok.png"
        fillMode: Image.PreserveAspectFit
    }

    Button {
        anchors.centerIn: parent
        width: 200
        height: 100
        text: "Ok"
        onClicked: {
            console.log("Ok button clicked")
            ventanaOk.close()
        }
    }
}