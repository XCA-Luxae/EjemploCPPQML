import QtQuick 2.12
import QtQuick.Controls 2.12
import Utilities 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        width: parent.width
        height: parent.height

        Text {
            id: infoText
            text: Utilities.getInfo2()
            anchors.centerIn: parent
        }

        Button {
            text: "Change Info"
            anchors.bottom: parent.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                if (infoText.text === Utilities.getInfo2()) {
                    infoText.text = Utilities.getInfo1()
                } else {
                    infoText.text = Utilities.getInfo2()
                }
            }
        }
    }

}
