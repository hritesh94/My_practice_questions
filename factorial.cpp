#include <iostream>
using namespace std;

int factorial(int n)
        {
            int fact = 1;
            
            for(int i =1;i<=n;i++)
                {
                    fact = fact*i;
                }
            return fact;
        }
    
    int nCr(int num1, int num2)
        {
            int numerator = factorial(num1);
            
            int denominator = factorial(num2)*factorial(num1-num2);
            
            int ans = numerator/denominator;
            
            return ans;
        }
            
        
int main() {
    
    int n,r;
    
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    
    int ans = nCr(n,r);
    
    cout<<"The answer of factorial is:"<<ans;
    
    
        
    return 0;
}