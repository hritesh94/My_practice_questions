#include <iostream>
using namespace std;

void printArray(int arr[], int size)
    {
        for(int i = 0 ; i<size ; i++)
            {
                cout<<arr[i]<<" ";
            }
    }
    
void Swap(int arr[], int jrr[])
{
    int n,k,temp;
    temp = arr[n];
    arr[n] = arr[k];
    arr[k] = temp;
    
}

int main() {
    
    int n ;
    cout<<" Enter the no of elements you want:";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements of array:";
    for(int i = 0 ; i<n ; i++)
        {
            cin>>arr[i];
        }
        
    cout<<"Original array:";
    printArray(arr,n);
    int left = 0, middle = n - 2, right = n - 1; 
    while(left<middle<right)
        {
            while(arr[left] == 0 && left<middle<right)
                {
                    left ++;
                }
            
             while(arr[middle] == 1 && left<middle<right)
                {
                    middle --;
                }
                
            while(arr[right] == 2 && left<middle<right)
                {
                    right --;
                }    
        
        //
         if(arr[left]=2 && arr[right]==0)
            {
               swap(arr[left],arr[right]); 
            }
        else if(arr[left]==1 && arr[middle]==0 )
            {
                swap(arr[left],arr[middle]);
            }
         else if(arr[right]==1 && arr[middle]==2 )
            {
                swap(arr[middle],arr[right]);
            }
         else if(arr[left]==1 && arr[middle]==2 && arr[right]==0 )
            {
                swap(arr[middle],arr[right]);
                swap(arr[left],arr[middle]);
            }
        else{
            swap(arr[left],arr[middle]);
            swap(arr[middle],arr[right]);
        }
        
                
        }
        cout<<endl;
        cout<<"Sorted array:";
    printArray(arr,n);
    return 0;
}