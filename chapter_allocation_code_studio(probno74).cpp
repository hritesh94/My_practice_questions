bool isPossible(vector<int>arr,int n, int m, int mid)
{
    int chapterCount = 1;
    int timeSum = 0;
    
    for(int i = 0; i<n ; i++)
    {
        if(timeSum + arr[i] <= mid)
        {
            timeSum += arr[i];
        }
        else
        {
            chapterCount++;
            if( chapterCount > m || arr[i] > mid){
                return false;
            }
            timeSum = arr[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	 int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n ; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = sum + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
//today is the day of travelling to singapore
//We arrived to the airport and i forgot my bag 
// forutnately we arrived so quickly that we had enough time to get my bag back but it was like 1 hour waiting
// i seriously did not feel like coding but i am angry
// just becoz of code streak i had to do it
//ps my code is wrong but i think i get the logic
// just need little tweaks
//https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2