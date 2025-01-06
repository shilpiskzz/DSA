#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    // unorddered maps
    unordered_map<string, int> map;
    map["abc1"] = 1;
    map["abc2"] = 2;
    map["abc3"] = 3;
    map["abc4"] = 4;
    map["abc5"] = 5;
    map["abc6"] = 6;

    unordered_map<string, int>::iterator it = map.begin();
    while (it != map.end())
    {
        cout << "key : " << it->first << "value :" << it->second << endl;
        it++;
    }

    vector<int> v;
    // the values in vector are stored in ordered form
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator it1 = v.begin();
    while (it1 != v.end())
    {
        cout << *it1 << endl;
        it1++;
    }
}