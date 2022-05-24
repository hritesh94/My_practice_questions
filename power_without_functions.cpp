#include <iostream>
using namespace std;

int main() {
// a to the power b
int a,b;
cout<<"Enter the base number for which you want to take out the power:";
cin>>a;
cout<<"Enter the power:";
cin>>b;
int ans =1;
for(int i=1; i<=b;i++)
    {
        ans=ans*a;
    }
cout<<"The answer is:"<<ans;

    return 0;
}