#include <iostream>
using namespace std;
#include "DynamicArrayUse.cpp"
int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.get(2);

    // DynamicArray d2(d1);
    // d2.add(2, 100);
    // d2.print();
    // d1.print();

    // DynamicArray d3;
    // d3 = d2;
    // d3.print();
}