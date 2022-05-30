#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,8};
    int K;
    cin>>K;
    
    for(int i =0;i<5; i++)
        {
            for (int j = i+1; j<5;j++)
                {
                    for(int k = j+1;k<5;k++)
                    
                    {
                        //if(arr[i]<arr[j]&&arr[j]<arr[k])
                        if(arr[i]+arr[j]+arr[k]==K)
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
                        else{
                        cout<<"-1";
                        break;}
                        
                    }
                }
        }

    return 0;
}