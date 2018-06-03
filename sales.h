#ifndef SALES_H
#define SALES_H

namespace SALES
{
    class Sales
    {
    private:
         static const int QVARTERS = 4;
         double sales[QVARTERS];
         double average;
         double max;
         double min;
    public:
        Sales();// # default constructor
        //Sales(const char * name, int hc);
        ~Sales();
        int setSales();
        showSales() const;
    };
}
#endif // SALES_H
