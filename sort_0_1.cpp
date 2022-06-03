// this program is explaine by love babbar
// sort  0 1 
// sort_0_1
#include <iostream>
using namespace std;

void swap(int arr[], int jrr[])
    {
        int temp;
        int n,k;
        temp = arr[n];
        arr[n] = arr[k];
        arr[k] = temp;
        
    
    }

int main() {
    int n;
    cout<<"Enter the number of elements you want:";
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n;i++)
        {
            cin>>arr[i];
        }
    
    int left = 0, right = n-1;
        
        while(left<right)
        {
            while(arr[left] == 0)
            {
                left++;
                // this loop will continue till it finds that arr[left]!=0
                //then this loop will exit
            }
            
            while(arr[right] == 1)
            {
                right--;
                 // this loop will continue till it finds that arr[right]!=1
                //then this loop will exit
            }
            
            // if program has come to this line this means
            //that means arr[left]!=0 and arr[right]!=1 
            
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
        for(int i = 0; i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
    return 0;
}