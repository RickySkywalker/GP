QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG+=resources_big

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Continent.cpp \
    coupdialogwindow.cpp \
    event.cpp \
    event_library.cpp \
    eventpopupwindow.cpp \
    initialize_countries.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow_event.cpp \
    mainwindow_game_status_change.cpp \
    mainwindow_on_country_clicked_functions.cpp \
    mainwindowai.cpp \
    menuwindow.cpp \
    Country.cpp \
    data_library.cpp \
    World.cpp


HEADERS += \
    coupdialogwindow.h \
    event.h \
    eventpopupwindow.h \
    mainwindow.h \
    mainwindowai.h \
    menuwindow.h \
    Continent.h \
    World.h \
    Superpowers.h \
    Country.h

FORMS += \
    coupdialogwindow.ui \
    eventpopupwindow.ui \
    mainwindow.ui \
    menuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES += \
    todo.md
