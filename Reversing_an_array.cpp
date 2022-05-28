#include <iostream>
using namespace std;

//this below function is already created and can accessed by swap(arr[start],arr[end])==> that is you can use it instead of creating the function below but the below is similar to the already created function swap();
void swaparr(int arr[], int start, int end)
    {   int temp=0;
        temp=arr[start];
        //cout<<temp<<endl;
        arr[start]=arr[end];
        
        arr[end]=temp;
    }


void reverse(int arr[], int size)
    {
        int start = 0;
        int end = size-1;
        
        while(start<=end)
            {
                swaparr(arr,start,end);
                start++;
                end--;
            }
    }
 

int main() {
    int n,key;
cout<<"Enter the number of elements you want:"<<endl;
cin>>n;

int arr[n];
cout<<"Enter the elements in array: ";
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
 cout<<"Original array:";   
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
reverse(arr,n);


//int arr[2]={1,3};


cout<<"Array after reversing:";
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}