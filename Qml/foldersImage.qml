import QtQuick 2.12
import QtQuick.Controls 2.12

Window {
    id: folderImage
    width: 400
    height: 400
    visible: true
    title: qsTr("Folders Image")

    Image {
        id: okImage
        anchors.fill: parent 
        source: Folders.getFolder2()
        fillMode: Image.PreserveAspectFit
    }

    Button {
        anchors.centerIn: parent
        width: 200
        height: 100
        text: "Ok"
        onClicked: {
            console.log("Ok button clicked")
            folderImage.close()
        }
    }
}