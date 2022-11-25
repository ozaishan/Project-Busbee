QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbusinfo.cpp \
    addrouteinfo.cpp \
    adminlogin.cpp \
    adminpage.cpp \
    canceldialog.cpp \
    choice_window.cpp \
    main.cpp \
    mainwindow.cpp \
    signup_page.cpp \
    userpage.cpp \
    viewallinfo.cpp \
    userwindow.cpp \
    viewbusinfo.cpp \
    seatbooking.cpp \
    book.cpp \
    cancel.cpp \
    mydb.cpp

HEADERS += \
    addbusinfo.h \
    addrouteinfo.h \
    adminlogin.h \
    adminpage.h \
    canceldialog.h \
    choice_window.h \
    mainwindow.h \
    signup_page.h \
    userpage.h \
    viewallinfo.h \
    userwindow.h \
    viewbusinfo.h \
    seatbooking.h \
    book.h \
    cancel.h \
    mydb.h

FORMS += \
    addbusinfo.ui \
    addrouteinfo.ui \
    adminlogin.ui \
    adminpage.ui \
    canceldialog.ui \
    choice_window.ui \
    mainwindow.ui \
    signup_page.ui \
    userpage.ui \
    viewallinfo.ui\
    userwindow.ui \
    viewbusinfo.ui \
    seatbooking.ui \
    book.ui \
    cancel.ui
    RC_ICONS = Busbee1.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resourse.qrc



