QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bomba.cpp \
    bomber.cpp \
    enemy.cpp \
    explosion.cpp \
    imagen.cpp \
    main.cpp \
    mainwindow.cpp \
    pared.cpp \
    pared2.cpp \
    powerup.cpp

HEADERS += \
    bomba.h \
    bomber.h \
    enemy.h \
    explosion.h \
    imagen.h \
    mainwindow.h \
    pared.h \
    pared2.h \
    powerup.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes.qrc

DISTFILES +=
QT += multimedia
OTHER_FILES += \
    path/to/musicfile.mp3
