#include <QCoreApplication>

#include "Shape.h"
#include "QDebug"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char t;

    std::cout << "Input shape C, T or R" << std::endl;
    std::cin >> t;

    if (auto sh = Shape::createShape(t); sh) {
        sh->info();
        delete sh;
    }

    return a.exec();
}
