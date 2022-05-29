Leetcode Homework Unique occurence

//Without using hashmap mere khayal se,halka sa brute force code hai

int brr[arr.size()];
        
        for(int j = 0; j<arr.size(); j++)
        {
            int count = 0;
            
                for(int i =0 ; i<arr.size();i++)
                {
                    if(arr[j]==arr[i])
                    {
                        count++;
                    }
                }
// ek counter wala array bna liye 

            brr[j]= count;
        }
        
       

        
        
        
        for(int j = 0; j<arr.size(); j++)
        {
            
            
                for(int i =0 ; i<arr.size();i++)
                {
                    if(arr[j]!=arr[i] && brr[j]==brr[i])
                    {
/* agar array(brr) ka jis index par count store huya hai aur jahan par same index of array(arr) ka value alag hai ,toh iska matlab dono element ka occurence ek hi so no unique occurence*/

                        return 0;
                    }
                }
        
        }
        
        return 1;