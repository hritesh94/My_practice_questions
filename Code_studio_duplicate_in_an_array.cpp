#include <iostream>
using namespace std;

void printArray(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
void InputArray(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
    }
    

int main() {
    // Write C++ code here
    int n;
    cout<<"Enter the number of elements you want:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of array:";
    InputArray(arr,n);
    
    int ans = 0;
    
    for(int i =0; i<n; i++)
        {
            ans = ans^arr[i];
            cout<<""<<ans<<" ";
        }
        cout<<endl;
    
   for(int i =1; i<n;i++)
        {
            ans = ans^i;
            cout<<""<<ans<<" ";
        }

    cout<<"\n"<<ans;

    return 0;
}