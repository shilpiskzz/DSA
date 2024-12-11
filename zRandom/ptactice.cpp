#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {4,8,3,6,2,9,2};
    int n=7;

    int i=0;
    int j = 1;

    while(i<n && j<n){
        while(arr[i] % 2 == 0){
            i= i+2;
        }
        while(arr[j] % 2 != 0){
            j= j+2;
        }
    }

}