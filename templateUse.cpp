#include <iostream>
using namespace std;
#include "template.cpp"

int main()
{
    Pair<Pair<int, int>, double> p2;
    p2.setY(10.01);
    Pair<int, int> p4;
    p4.setX(15);
    p4.setY(16);

    p2.setX(p4);
    cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << endl;

    /*
    Pair<int, double> p1;
    p1.setX(1010.1);
    p1.setY(1001.1);
    cout << p1.getX()<< " " << p1.getY() << endl;
    */

    /*
    Pair<int> p1;
    p1.setX(100);
    p1.setY(20);

    Pair<double> p2;
    p2.setX(100.54);
    p2.setY(101.54);

    cout << p1.getX() << " " << p2.getX() << endl;
    */
}
