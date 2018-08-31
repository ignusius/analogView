CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(analogviewplugin)
TEMPLATE    = lib
FORMS       += analogview.ui

HEADERS     = analogviewplugin.h
SOURCES     = analogviewplugin.cpp
RESOURCES   = icons.qrc


greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(analogview.pri)
