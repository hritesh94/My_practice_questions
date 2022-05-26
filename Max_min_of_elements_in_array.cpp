#include <iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int size)
    {
        int max=INT_MIN;
        
/*idhar ek hi cheez karne ki chesta hai ki matlab ek variable le liya
jisme sabse chota possibe  value(i.e. int_min) store kiye , agar koi value isse bada hota hain toh usko ek variable "max" mai  store kar lena , phir usi prakar loop me jo bhi pichle waale se bada hoga woh change hokar store hote rahega ,usi prakar sabse bada value hoga woh isi loop comparision se pta chal jayega */

        for(int i =0;i<size;i++)
            {
            if(arr[i]>max)
                {
                max = arr[i];
                }
            }
        return max;
    }
//same concept as above 
int getMin(int arr[],int size)
    {
        int min=INT_MAX;
        
        for(int i =0;i<size;i++)
            {
            if(arr[i]<min)
                {
                min = arr[i];
                }
            }
        return min;
    }

int main() {
    int size;
    cin>>size;
    
    int num[1000];
    
    // taking input in array
    
    for(int i =0; i<size;i++)
    cin>>num[i];
    
    cout<<"Print the largest element in array"<<getMax(num,size)<<endl;
    cout<<"Print the minimum element in array"<<getMin(num,size)<<endl;

    return 0;
}