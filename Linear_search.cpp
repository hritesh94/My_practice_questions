#include <iostream>
using namespace std;

bool search(int arr[],int size,int key)
    {
        for(int i=0;i<size;i++)
            {
                if(arr[i]==key)
                    {
                        return 1;
                    }
            }
        return 0;
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
    
cout<<"Enter the key to be searched:";
cin>>key;

bool found = search(arr,n,key);

if(found)
    {
        cout<<"The element is present";
    }
else
    {
        cout<<"The element is absent";
    }

    return 0;
}