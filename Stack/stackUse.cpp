#include <iostream>
using namespace std;
// #include "stack_template.cpp"
//  #include "stackUsingDynamic.cpp"
#include "StackUsingArray.cpp"

int main()
{
    // stackUsingDynamic s1;
    StackUsingArray s1(5);
    s1.push(100);
    s1.push(102);
    s1.push(103);
    s1.push(104);
    s1.push(105);

    cout << s1.top() << endl;

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    cout << s1.size() << endl;
    cout << s1.isEmpty() << endl;
}