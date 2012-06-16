// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Rectangle{
    id: rectangle1
    width: 1000
    height: 700
    state: "main"

    function enterDate()
    {
        if(text_edit1.text=="")
        {
            return true
        }
        else
        {
            return false
        }
    }

    function enterDateAdd()
    {
        if(text_edit1.text=="")
        {
            return true
        }
        else
        {
            return false
        }
    }



    function dbDelete() {
        var db = openDatabaseSync("QDeclarativeExampleDB", "1.0", "The Example QML SQL!", 1000000);

        db.transaction(
                    function(tx) {
                        var rs=tx.executeSql("delete from note where date= ?",[text_edit1.text]);
                    }
                    )
    }
    function dbAdd() {
        var db = openDatabaseSync("QDeclarativeExampleDB", "1.0", "The Example QML SQL!", 1000000);



        db.transaction(
                    function(tx) {
                        // Create the database if it doesn't already exist
                        tx.executeSql('CREATE TABLE IF NOT EXISTS [note] ([id] INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT,'+
                                      '[date] TEXT NOT NULL,'+
                                      '[x] TEXT NOT NULL,'+
                                      '[textnote] TEXT  NULL);');

                        // Add (another) greeting row
                        text_edit4.text= ' '+ text_edit4.text+ '\rStreet: ' + text_edit7.text+ '\rX: ' + metka.x+ ' '+ '\Y: ' + metka.y+ '\r\r\r\r';
                       tx.executeSql("insert into note ('date', 'textnote') values ("+text_edit1.text+" , '"+ text_edit4.text+"');");
                    }
                    )
    }

    function dbShow() {
        var db = openDatabaseSync("QDeclarativeExampleDB", "1.0", "The Example QML SQL!", 1000000);

       db.transaction(
                    function(tx) {

                        // Show all added greetings
                       var rs = tx.executeSql('SELECT * FROM note');

                        var r = ""
                        for(var i = 0; i < rs.rows.length; i++) {
                            r += i+" "+rs.rows.item(i).id + ", " + rs.rows.item(i).date + ", " + rs.rows.item(i).text  + "\n"
                        }
                        txt.text = r
                    }
                    )
    }




    Rectangle {
        id: column2
        x: 0
        y: 602
        width: rectangle1.width
        height: 146




        Button {
            id: addnote
            x: 11
            y :2
            width: 164
            height: 50
            anchors.centerIn: parent
            text: "Добавить запись"
            anchors.verticalCenterOffset: -46
            anchors.horizontalCenterOffset: -407
            onClicked: {

                if(enterDateAdd())
                {

                }
                else
                {
                    dbAdd()
                    text_edit1.text=""
                    text_edit4.text=""
                    text_edit7.text=""
                }
                rectangle1.state = "show"
                listModel.clear()
                listView.dbshow()
            }

        }
        Text {
            id: text1
            x: 192
            y: 18
            text: qsTr("ID  :")
            font.pixelSize: 15
            color: "#000000"
        }
        Button{
            id: buttonDelByDate
            x:11
            y:60
            width: 164
            height: 50
            anchors.centerIn: parent
            text:"Удалить"
            anchors.verticalCenterOffset: 12
            anchors.horizontalCenterOffset: -407
            onClicked: {
                if(enterDate())
                {

                }
                else
                {
                    dbDelete()
                    text_edit1.text=""
                }
                rectangle1.state = "show"
                listModel.clear()
                listView.dbshow()
                }
        }

Rectangle {
        id: rectangle2
        x: 185
        y: 43
            width: 112
            height: 32
            color: "#42a224"

            TextEdit {
                id: text_edit1
                x: 0
                y: 0
                width: rectangle2.width
                height: rectangle2.height
                selectionColor: "#236d0e"
                font.pixelSize: 15
            }
}
    }

    Rectangle {
        id: column1
        x: 0
        y: 0
        width: rectangle1.width
        height: 0

        Rectangle {
            id: rectangle10
            x: 5
            y: 29
            width: 300
            height: 542
            border.width: 2
            border.color: "#000000"

            Component {
                id: petDelegate
                Item {
                    id: wrapper
                    width: 200; height: 55
                    Column {
                      //  Text { text: ' Date: ' + date +'      |||     Note: ' + textnote }
                      //Text { text: '#: ' + id }
                        Text { text: 'ID: ' + date }
                        Text { text: 'Name: ' + textnote }
                    }
                    // indent the item if it is the current item

                }
            }

            // Define a highlight with customised movement between items.


            ListView {
                id: listView
                x: 0
                y: 40
                width: rectangle10.width
                height:493

                model: ListModel {
                    id: listModel
                }
                delegate: petDelegate
                focus: true

                // Set the highlight delegate. Note we must also set highlightFollowsCurrentItem
                // to false so the highlight delegate can control how the highlight is moved.
                highlight: highlightBar
                highlightFollowsCurrentItem: false

                function dbshow()
                {
                    var db = openDatabaseSync("QDeclarativeExampleDB", "1.0", "The Example QML SQL!", 1000000);
                    db.transaction(
                                function(tx) {

                                    // Show all added greetings
                                    var rs = tx.executeSql('SELECT * FROM note');
                                    for(var i = 0; i < rs.rows.length; i++) {
                                        var data = {'id':rs.rows.item(i).id, 'date': rs.rows.item(i).date, 'textnote': rs.rows.item(i).textnote};
                                        listModel.append(data)

                                    }
                                    listModel.sync()
                                }
                                )
                }

                Component.onCompleted: {
                    dbshow()
                }
            }
            Rectangle {
                id: rectangle6   ////текстовик
                x: 348
                y: 520


                width: 134
                height:37
                color: "#1515f3"
                radius: 0
                border.width: 0
                border.color: "#f0f70a"
                smooth: false
                opacity: 1
                clip: false

                TextEdit {
                    id: text_edit4
                    x: 0
                    y: 0
                    width: 134
                    height: 37
                    text: ""
                    textFormat: TextEdit.AutoText
                    wrapMode: TextEdit.NoWrap
                    font.family: "Arial Black"
                    clip: false
                    activeFocusOnPress: true
                    opacity: 1
                    horizontalAlignment: TextEdit.AlignHCenter
                    font.pixelSize: 20

                    Text {
                        id: text4
                        x: 0
                        y: -26
                        text: qsTr("name")
                        font.pixelSize: 12
                    }
                }

            }
            Rectangle {
                id: rectangle7
                x: 525
                y: 520

                width: 127
                height:37
                color: "#ee1818"
                radius: 0
                smooth: false
                opacity: 1
                clip: false

                TextEdit {
                    id: text_edit7
                    x: 1
                    y: 0
                    width: 126
                    height: 33
                    cursorVisible: false
                    horizontalAlignment: TextEdit.AlignHCenter
                    font.pixelSize: 30
                }
            }
        }

    }

    Text {
        id: text2
        x: 529
        y: 528
        width: 45
        height: 24
        text: qsTr("street")
        font.pixelSize: 12
    }

    Rectangle {
        id: rectangle3
        x: 337
        y: 60
        width: 519
        height: 445
        color: "#06f5da"

        Text {
            id: text12
            x: 0
            y: -3
            width: 237
            height: 205
            text: "<img src=\"map.svg\" width=400>"
            smooth: false
            anchors.leftMargin: 0
            anchors.bottomMargin: 243
            clip: true
            rotation: 0
            scale: 2.200
            transformOrigin: Item.TopLeft
            anchors.right: parent.right
            anchors.rightMargin: 282
            anchors.bottom: parent.bottom
            anchors.left: parent.left

            MouseArea {
                id: mouse_area1
                x: 0
                y: 0
                width: 237
                height: 205

                 onClicked:{metka.x=mouseX*2.2;
                     metka.y=mouseY*2.2;
                     dbAdd()
                     text_edit1.text=""
                     text_edit4.text=""
                     text_edit7.text=""
                     rectangle1.state = "show"
                     listModel.clear()
                     listView.dbshow()

                 }
            }
        }

        Rectangle {
            width: 10; height: 10;
            color: "red"
               x:0
               y:0
               id:metka
            Rectangle {
                anchors.fill: parent
                anchors.margins: 10
                clip: true

                Rectangle {
                    anchors.fill: parent
                    border.width: 1
                }
            }
        }
    }


}
