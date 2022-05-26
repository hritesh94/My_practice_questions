#include <iostream>
using namespace std;
 
int main()
{
    int n = 5;
    int val = 6;
 
    // declare array
    int arr[100000];
 
    // initialize array
    for (int i = 0; i < 100000; i++) {
        arr[i] = val;
    }
 
    cout<<arr[9897];
 
    return 0;
}