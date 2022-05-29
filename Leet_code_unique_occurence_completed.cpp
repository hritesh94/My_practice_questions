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
    
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter  the size of array:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements in array:";
    for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
    
    cout<<"Original Array:";
    printArray(arr,n);
    
    int brr[n]={0};
    //printArray(brr,n);
    
     for(int j = 0;j<n;j++)
                {
                   int count = 0; 
                    
                    for(int i = 0;i<n;i++)
                        {
                            if(arr[j]==arr[i])
                                {
                                    count++;
                                    
                                }
                          
                        }
                    brr[j]=count;
                    
                }
    int ans = 0;
    for(int k = 0;k<n;k++)
        {
           ans=ans^brr[k];
            
        }
      printArray(brr,n);
        
        bool occurence = 1;
        int crr[n]={0};
     for(int j = 0;j<n;j++)
                {
                   int count2 =0;
                   
                    for(int i = 0;i<n;i++)
                        {
                            if ( brr[j] == brr[i]&&arr[i] != arr[j] )
                                {
                                    occurence = 0;
                                    count2++;
                                }
                            
                            
                          
                        }
                      crr[j]=count2;  
                }
    cout<<"\nPrint crr:"; 
    printArray(crr,n);
   if (occurence ==0)
    {
        cout<<"No unique occurences"<<endl;
    }
    else
    {
        cout<<"Unique occurences"<<endl;
    }
    printArray(brr,n);

    return 0;
}