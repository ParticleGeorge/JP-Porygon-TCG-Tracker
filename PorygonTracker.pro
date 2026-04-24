# Qt project file for PorygonTracker

# this tells Qt we're using the widgets module
QT += widgets

# fix mac compiler for project
CONFIG += c++17

# tells it where our source code is 
SOURCES += src/main.cpp

# names the output executable
TARGET = PorygonTracker 