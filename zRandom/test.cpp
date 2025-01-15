#include <iostream>
using namespace std;
// to print a single position with a time complexity O(r)
// r = column-1;
int position(int n, int r)
{
    int pos = 1;
    for (int i = 1; i <= r; i++)
    {
        pos *= n - i + 1;
        pos /= i;
    }
    return pos;
}

void rowElements(int row)
{
    int ans = 1;
    cout << ans << " ";
    for (int i = 1; i < row; i++)
    {
        ans *= row - i;
        ans /= i;
        cout << ans << " ";
    }
}

void pascalTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        rowElements(i);
        cout << endl;
    }
}

int main()
{
    // for (int i = 1; i <= 6; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    int row = 5;
    int column = 3;
    pascalTriangle(6);
    cout << endl;
    rowElements(6);
}
