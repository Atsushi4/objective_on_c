TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.c \
    animal.c \
    dog.c \
    cat.c \
    bird.c

HEADERS += \
    animal.h \
    dog.h \
    cat.h \
    bird.h \
    animal_internal.h

