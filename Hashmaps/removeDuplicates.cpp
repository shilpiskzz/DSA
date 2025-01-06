#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int *a, int size)
{
    // using maps we will check if the element is present or not
    unordered_map<int, bool> seen;
    // a vector to store the output
    vector<int> output;

    // iterating throughout the array
    for (int i = 0; i < size; i++)
    {
        // the count fuction uses normal brackets
        if (seen.count(a[i]) > 0)
        {
            // if the element is already present in map then proceed without doing anything, ie out of the loop
            continue;
        }
        // we will mark the element true in the map
        seen[a[i]] = true;
        // insert the element in the output array
        output.push_back(a[i]);
    }

    return output;
}

int main()
{
    int a[] = {1, 2, 3, 2, 1, 4, 3, 6, 5, 5};
    vector<int> output = removeDuplicates(a, 10);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}