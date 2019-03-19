CONFIG += console c++11

INCLUDEPATH += "../../"
INCLUDEPATH += "gtest/include"
INCLUDEPATH += "gtest/"

SOURCES += \
    main.cpp \
    ../../triangletypelib.cpp \
    gtest/src/gtest.cc \
    gtest/src/gtest-all.cc \
    gtest/src/gtest-death-test.cc \
    gtest/src/gtest-filepath.cc \
    gtest/src/gtest-matchers.cc \
    gtest/src/gtest-port.cc \
    gtest/src/gtest-printers.cc \
    gtest/src/gtest-test-part.cc \
    gtest/src/gtest-typed-test.cc

HEADERS += \
    ../../triangletypelib.h
