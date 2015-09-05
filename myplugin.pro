TARGET = qmyplugin

QT += qml quick gui-private
QT += core-private platformsupport-private gui-private dbus

CONFIG += plugin

TEMPLATE = lib

SOURCES = \
    src/main.cpp \
    src/qtestplugin.cpp


target.path = $$[QT_INSTALL_PLUGINS]/platforminputcontexts

INSTALLS += target

OTHER_FILES += \
    myplugin.json \
    rpm/plugin.spec
    

HEADERS += \
    src/qtestplugin.h
