#-------------------------------------------------
#
# Project created by QtCreator 2019-12-18T09:32:14
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PVZ
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    sunflower.cpp \
    zombie.cpp \
    plant.cpp \
    wallnut.cpp \
    basiczombie.cpp \
    peashooter.cpp \
    other.cpp \
    pea.cpp \
    card.cpp \
    shop.cpp \
    sun.cpp \
    cherrybomb.cpp \
    repeater.cpp \
    map.cpp \
    shovel.cpp \
    snowpea.cpp \
    potatomine.cpp \
    mainwindow.cpp \
    button.cpp \
    mower.cpp \
    bucketzombie.cpp \
    conezombie.cpp \
    footballzombie.cpp \
    screenzombie.cpp

HEADERS += \
    sunflower.h \
    zombie.h \
    plant.h \
    wallnut.h \
    basiczombie.h \
    peashooter.h \
    other.h \
    pea.h \
    card.h \
    shop.h \
    sun.h \
    cherrybomb.h \
    repeater.h \
    map.h \
    shovel.h \
    snowpea.h \
    potatomine.h \
    mainwindow.h \
    button.h \
    mower.h \
    bucketzombie.h \
    conezombie.h \
    footballzombie.h \
    screenzombie.h


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

RC_ICONS += \
    PVZ.ico
