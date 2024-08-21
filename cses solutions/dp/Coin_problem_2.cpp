#include <bits/stdc++.h>
using namespace std ; 


// in this question - the ordered ways represents that the if flow is 3-3-5 then 3-5-3 and 5-3-3 are one and same way and not different 
// in counting - unlike the first way in which we had to count the numbr of ways for wich was total





int main ()
{
 int n ; cin >> n ; int x; cin >> x;
 vector<int> c(n);

 for(int i= 0;i< n;i ++)
 {
    cin>>c[i];
 }
    vector<vector <int> > dp(n+1 , vector <int> (x+1, 0));
    //state define by - 
    // dp[i][k] is equal to the number of ways to construct sum k using coins fromm ci to cn-1 and not using any coin from 
    // 0 to i-1 coins 
    // such that the sequence permutation isnt rerpeated in any sense 
    // basically sab sequences ko ascendingly sort kar diye hain and in that way it will easily render the answer 
    

    for(int i= 0;i< n; i++)
    {
        dp[i][0]= 1; 
    }  

    for(int i= n-1 ; i>= 0; i--)
    {
        for(int sum= 1; sum <= x; sum++)
        {
            int skip = dp[i+1][sum];
            int pick = dp[i][sum-c[i]]; 
            dp[i][sum]= pick+skip ; 
        }
    }
}