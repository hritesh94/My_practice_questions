#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int> temp;
    bool stop = 0;
    for(int i = 0; i<n;i++)
    {
        for(int j = i+1; j<n;j++)
        {
            for(int k = j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==K)
                { 
                    
                    /*temp.push_back(min(arr[i],arr[j]));
                    temp.push_back(min(arr[j],arr[k]));
                    temp.push_back(max(arr[i],arr[j]));
                    
                      temp.push_back(max(arr[j],arr[k]));*/
                    //ans.push_back(arr[i],arr[j],arr[k]);
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                    stop = 1;
                break;
                }
                
                   
            }
            if(stop==1);
                    break;
        }
    }
    return ans;
}