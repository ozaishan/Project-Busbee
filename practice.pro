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
    mainwindow.cpp

HEADERS += \
    addbusinfo.h \
    addrouteinfo.h \
    adminlogin.h \
    adminpage.h \
    canceldialog.h \
    choice_window.h \
    mainwindow.h

FORMS += \
    addbusinfo.ui \
    addrouteinfo.ui \
    adminlogin.ui \
    adminpage.ui \
    canceldialog.ui \
    choice_window.ui \
    mainwindow.ui
    RC_ICONS = Busbee1.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resourse.qrc



