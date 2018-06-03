#include "sales.h"
#include <iostream>

SALES::Sales::Sales()
{
    std::cout << "Default constructor called\n";

    for (int i = 0; i < QVARTERS; ++i) {
        sales[i] = 0.0;
    }

}

SALES::Sales::Sales(const double ar[], int n)
{
    std::cout << "Main constructor called\n";

    for (int i = 0; i < n; ++i) {
        sales[i] = ar[i];
    }

}

SALES::Sales::~Sales()
{
    std::cout << "Destructor called\n";
}

SALES::Sales::showSales() const
{
    for (int i = 0; i < QVARTERS; ++i) {
        std::cout << sales[i] << std::endl;
    }
}
