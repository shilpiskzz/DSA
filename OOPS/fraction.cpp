#include <iostream>
using namespace std;

class fraction
{
    int numerator;
    int denominator;

public:
    fraction(int numerator, int demominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << this->numerator << "/" << this->denominator << endl;
    }

    void add(fraction f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = numerator * x + (f2.numerator * y);

        numerator = num;
        denominator = lcm;
        simplify();
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }

        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
};
