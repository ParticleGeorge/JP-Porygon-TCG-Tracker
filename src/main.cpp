/*
QT test for successful installation
*/

#include <QApplication>
#include <QWidget>
#include "CSVParser.h"
#include <iostream>

int main(int argc, char *argv[])
{
    // sanity check
    std::cout << "Program started" << std::endl;
    // simple window to show that QT is working
    QApplication app(argc, argv);
    QWidget window;


    window.setWindowTitle("Porygon Tracker");
    window.resize(800, 600);
    window.show();

    // test for parser working
    auto cards = CSVParser::parseFile("cards.csv");
    std::cout << "Loaded " << cards.size() << " cards." << std::endl;
    for (const auto& c : cards) {
        std::cout << c.getName() << " (" << c.getYear() << ") - " << c.getRarity() 
        << std::endl;
    }

    return app.exec();
}