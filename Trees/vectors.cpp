#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v;

    /*
    dynamically
    vector<int> *vp = new vector<int>();
    */

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << v[0] << " " << v.at(0) << endl;
    cout << v[3] << " " << v.at(3) << endl;

    /*
    cout << "using indexing : a garbage value " << v[5] << endl;
    cout << "using at function : " << v.at(5) << endl;
    */

    cout << "size: " << v.size() << endl;
    v.pop_back();
    cout << "size: " << v.size() << endl;
}
