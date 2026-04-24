/*
QT test for successful installation
*/

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    // simple window to show that QT is working
    QApplication app(argc, argv);
    QWidget window;


    window.setWindowTitle("Porygon Tracker");
    window.resize(800, 600);
    window.show();

    return app.exec();
}