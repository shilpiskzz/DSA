#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int carry = b, sum;
    while (carry != 0)
    {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    return sum;
}

int main()
{
    int a = 5;
    int b = 3;
    cout << "sum : " << sum(a, b);
}