#include <iostream>
#include<math.h>
using namespace std;

int main() {
    // Write C++ code here
      int n;
        cout<<"Enter the binary number to convert into decimal:";
        cin>>n;
        int digit,i=0,ans=0;
        while(n!=0)
            {
                digit = n%10;
                
                if(digit==1)
                    {
                        ans = ans+ pow(2,i);
                    }
                n=n/10;
                i++;
            }
            cout<<"The decimal number is :"<<ans<<endl;
    return 0;
}