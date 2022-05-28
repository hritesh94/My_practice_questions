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

void SwapAlternate (int arr[], int size)
    {
        
			int start = 0;
			int start2=1;
	
			while(start2<size)
			{
				swap(arr[start],arr[start2]);
				start = start+2;
				start2 = start2+2;

			}	
    }

int main() {
	int n;
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	
	cout<<"Original array:"; 

	printArray(arr,n);
    
    SwapAlternate(arr,n);

	cout<<"Alternatively Swaped array:"; 

			
	printArray(arr,n);
	
	
		
		
		
	return 0;
}