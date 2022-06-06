//First and last position of a sorted array
//using stl i could only use sort function
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n, int key)
    {
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        
        while(s<=e)
            {
            if(arr[mid] == key)
                {
                    ans = mid;
                    e = mid - 1;
                }
            else if(key > arr[mid])// right wale part me jao
                {
                    s = mid + 1;
                }
            else{// left wale part me jao
                e = mid - 1;
            }
            
            mid = s + (e-s)/2;
            }
        return ans;
        
    }

    int lastOcc(int arr[],int n, int key)
    {
        int s = 0, e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        
        while(s<=e)
            {
            if(arr[mid] == key)
                {
                    ans = mid;
                    s = mid + 1;
                }
            else if(key > arr[mid])// right wale part me jao
                {
                    s = mid + 1;
                }
            else{// left wale part me jao
                e = mid - 1;
            }
            
            mid = s + (e-s)/2;
            }
        return ans;
        
    }

int main() {
    
    int n,key;
    cout<<"Enter the numbers of elements you want:";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array:";
    for(int i = 0 ; i<n; i++)
        {
            cin>>arr[i];
        }
    sort(arr,arr+n);
    
    cout<<"Enter the number for which you want to find occurence:";
    cin>>key;

    cout<<"First Occurenece of "<<key<<" is at Index: "<< firstOcc(arr,n,key)<<endl;
    
    cout<<"Last Occurenece of "<<key<<" is at Index: "<< lastOcc(arr,n,key)<<endl;
    
    
    
    

    return 0;
}