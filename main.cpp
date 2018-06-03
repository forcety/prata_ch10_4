#include <QCoreApplication>
#include <iostream>
#include "sales.h"

int main(int argc, char *argv[])
{
    using namespace SALES;
    QCoreApplication a(argc, argv);
    std::cout << "Start program\n";

    // #0 default constructor test
    std::cout << "...............\n";
    std::cout << "#0 default constructor test\n";
    {
    Sales s1;
    //g1.showGolf();
    }
    std::cout << "Done.\n";
    return a.exec();
}
