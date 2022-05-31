//its just for practice as today i hav lot of work to do so i think this should be a good way to practice.
/*         *
        *  *
     *  *  * 
  *  *  *  *  */
#include<iostream>
using namespace std;

int main()
    {
        int n;
        cout<<" Enter the number of rows : ";
        cin>>n;

        int i = 1; 
        while (i < n) 
        { 
            int j = 1 ; 
            while (j<n-i) 
            { 
                cout <<"  "; 
                j++;
                
            }
            //cout<<endl;
            //Here this was a terrible mistake where if we put endline before even reaching the next line of code the desired pattern will not be received 
           int k =1;
            while(k<=i)
            
            { 
                cout <<"* "; 
                k++; 
            } 
            cout<<endl;
            i++; 
        }
        return 0;
        
    }
    // took like 20-30 mins for this shit  cry cery emoji