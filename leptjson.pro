TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        leptjson.c \
        test.c

HEADERS += \
    leptjson.h

DISTFILES += \
    doc/doc.md
