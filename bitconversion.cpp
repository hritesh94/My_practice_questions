#include<iostream>
#include<cmath>
using namespace std;

int main()
    {
        int n,bit;
        cout<<"Enter a number to convert to binary:";
        cin>>n;
        int answer=0,answer1=0;
        int i=0;
        
        if(n>0)
            {
            while(n!=0)
                {
                    bit = (n & 1);   
        
                    double z= pow(10, i);
        
                    answer = (bit * z) + answer;
                    n= n>>1;
                    i++;
                }
                cout<<"the binary of the decimal number:"<<answer;
            }
            
        else{
          long long int n;
          cout<<"please enter the value of negative decimal again:";
    cin>>n;
    unsigned long long int i=0,ans=0;
    if(n<0)
        {
            //humlog yahan par koi bhi negative no ko 2^16 pe add kar rhe toh actually me kya aayega-->>(2^16+negative no = 2^16 - no ayega) ab jo iska 
            // value hoga woh ek bada integer aayega aur usi ko lastBit me dalkar bitwise operator &1 ke saath karke sara bits nikal lenge 
            // aur iss baat ka dhyaan rhe ki yeh thora short tarika hai jisme yahan array ya string ka upyog nhi huya so 16 bits tak ka hi binary niklega

            n=pow(2,16)+n;
            
        }
        cout<<n<<endl;
        
        while(n)
            {
                int lastBit = n&1;
                ans= (pow(10,i)*lastBit) + ans;
                n = n>>1;
                i++;
                
            }
            cout<<"Binary of negative decimal is(representation in 16 bits):"<<ans<<endl;
            
        }
        //negative decimal no one will give more appropritate answers in online ide
        return 0;
    }