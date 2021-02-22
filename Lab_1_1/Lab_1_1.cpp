#include "Product.h"
#include <iostream>

using namespace std;

Product makeProduct(int k, double m)
{
    Product p;
    if (!p.Init(k, m))
        cout << "ERROR" << endl;
    return p;

}

int main()
{
    Product p;
    p.Read();
    p.Display();

    int k;
    double m;
    cout << "k = ? "; cin >> k;
    cout << "m = ? "; cin >> m;
    cout << "Power = " << p.Power() << endl;
    cout << endl;
    p = makeProduct(k, m);
    p.Display();

    return 0;
}