//its just for practice as today i hav lot of work to do so i think this should be a good way to practice.
/*         *
        *  *  *       big asss half diamond
     *  *  *  *  *
  *  *  *  *  *  *  */
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
                        cout <<" "<<" "; 
                        j++;
                        
                    }
            //cout<<endl;
            //Here this was a terrible mistake where if we put endline before even reaching the next line of code the desired pattern will not be received 
           int k =1;
            while(k<=i)
                
                { 
                    cout <<"*"<<" "; 
                    k++; 
                } 
            // here we initialised the third column of pyramid from 2 because if we initialise from l=1 it creates a duplicate 180 inverted half pyramid, we want that but the point above 
            // becomes blunt so to make it sharp we initialise from 2 and as its while loop so its entry condition loop so when i becomes 2 it prints half pyramid but small one which completes the full big pyramid
            int l =2;
            while(l<=i)
            
                { 
                    cout <<"*"<<" "; 
                    l++; 
                } 
            
            cout<<endl;
            i++; 
        }


        int i2=1;

        while(i2<=n)
        {
            int g =2;
            while(g<=i2)
                    {
                        cout<<" "<<" ";
                        g++;
                    }

            int h =1;
            while(h<=n-i2)
                    {
                        cout<<"*"<<" ";
                        h++;
                    }
                   

             int o =2;
            while(o<=n-i2)
                    {
                        cout<<"*"<<" ";
                        o++;
                    }
             cout<<endl;
                    i2++;


        }
        return 0;
        
    }
    //could not complete (cry emoji) 
    // took like 10 mins without one go // also first part was copied
    //still gona upload for streaks