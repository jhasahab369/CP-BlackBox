#include <bits/stdc++.h>
using namespace std;
// int f(int x,int ind, vector <int> &a )
// {
//     //base cases

//     //transition 
//     int np = f(x, ind -1 , a);
//     int p = f(x-(x/a[ind]), ind-1 , a);
//     return min(p, np );

// }

//mistake was that I was using pick non ick for a subproblems dp question 
// dp[k]= min(dp[k-ci]) where i varies from 1 to n in the problem 
// and obviously furthur calls are made in the dp stack and gives the output 




#define MOD 10000000000 
int main(){
    int n, x; cin>>n>>x;
    vector <int> a(n);
    for(int i=0 ;i<n; i++)
    cin>>a[i];
    vector <int> dp(10000001,0 );
    dp[0]= 0 ;
    for(int i = 1 ; i<x; i++)
    {
        //finding dp{x} in this loop in tc of o(x)
        for(int j= 0 ; j<n ; j++)
        {
            //now finding it in loop of o(n) time complexity 
            
            if(i>= a[j])
            dp[i]= (min(dp[i], dp[i-a[j]])%MOD);
        }
    }

    
}