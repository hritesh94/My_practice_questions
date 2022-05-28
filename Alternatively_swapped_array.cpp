#include <iostream>
using namespace std;

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

	for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

	
			int start = 0;
			int start2=1;
	
			

			while(start2<n)
			{
				swap(arr[start],arr[start2]);
				start = start+2;
				start2 = start2+2;

			}	

	cout<<"Alternatively Swaped array:"; 

			
	for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	
	
		
		
		
	return 0;
}