#include<iostream>
using namespace std;

void update(int arr[], int n)
    {
        cout<<"\n Inside the Update function"<<endl;

        //printing the array
        for(int i =0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }
            cout<<endl;

        cout<<"Going back to the main function"<<endl;

    }

    int main()
    {
        int arr[3]={1,2,3};
        update(arr,3);

        //printing the array
        for(int i =0;i<3;i++)
            {
                cout<<arr[i]<<endl;
            }
            cout<<endl;
        cout<<"Printing the array inside main function"<<endl;

        return 0;

    }
     
