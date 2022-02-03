#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator *qt_translator = new QTranslator();
    if(qt_translator->load(":/Translations/qtbase_ru.qm"))
        a.installTranslator(qt_translator);
    else
        qWarning(logWarning()) << "Ну удалось загрузить языковый файл";

    MainWindow w;
    w.show();
    return a.exec();
}
