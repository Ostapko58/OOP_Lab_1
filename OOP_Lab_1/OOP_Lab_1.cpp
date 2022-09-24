
#include <iostream>
#include "Goods.h"
using namespace std;

Goods makeGoods(double first, int second) {
    Goods a;
    if (!a.Init(first, second))
    {
        cout << "Wrong arguments to Init!" << endl;
        exit(EXIT_FAILURE);
    }
    return a;
}

int main()
{
    Goods a;
    a.SetFirst(15.5);
    a.SetSecond(5);
    a.Display();
    cout << "Cost = " << a.cost() << endl;
    a.Read();
    a.Display();
    cout << "Cost = " << a.cost() << endl;
    Goods b = makeGoods(15.56, -6);
    cout << "Cost = " << b.cost() << endl;

}