#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int size)
{
int start = 0;
int end = size-1;

int mid = start + (end-start)/2;
while (start<=end)
{
    if(arr[mid]==key)
    {
        return mid;
    }
else if(arr[mid]>key)
{
end = mid -1;
}
else
{
    start = mid + 1;
}

mid = start + (end-start)/2;
}
return -1;



}
int main()
    {
        int arr[5] = {1,2,3,4,5};

        int keyIndex = binarySearch(arr, 2,5);

        cout<<"The index of number 2:"<<keyIndex;

        return 0;

    }

//just a revision of binary search
// nothing else 
// will do rest thing tomorrow
// just did not wanted the code streak to break 
//crey emoji