#include <iostream>
using namespace std;
#include "template.cpp"

int main()
{
    Pair<int> p1;
    p1.setX(100);
    p1.setY(20);

    Pair<double> p2;
    p2.setX(100.54);
    p2.setY(101.54);

    cout << p1.getX() << " " << p2.getX() << endl;
}
