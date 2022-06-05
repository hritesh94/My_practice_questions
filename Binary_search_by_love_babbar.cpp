// Binary search
#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
    {
        int start = 0, end = size - 1;
        
        int mid = (start+end)/2;
        
        while(start <= end)
            {
                if(arr[mid] == key)
                    {
                        return mid;
                    }
                else if(key > arr[mid])
                    {
                        start = mid + 1;
                    }
                else 
                    {
                        end = mid - 1;
                    }
                mid = (start+end)/2;
            }
        
        return -1;
    }

int main() { 
    
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1,2,3,4,5};
    
    int evenkey = binarySearch(even,6,5);
    int oddkey = binarySearch(odd,5,1);
    
    cout<<"\n the index for even array:"<<evenkey;
    cout<<"\n the index for odd array:"<<oddkey;
    return 0;
}