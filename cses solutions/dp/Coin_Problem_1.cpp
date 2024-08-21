#include <bits/stdc++.h> 
using namespace std ; 
int main (){
    int n, x; cin>>n>>x;
    vector <int> a(n);
    for(int i=0 ;i<n; i++)
    cin>>a[i];
    vector <int> dp(10000001,-1 );
    dp[0]= 0 ;
    int ans  = 0;
    for( int i = 1; i<= x ;i++ )
    {
        for( int j= 0; j<n ; j++)
        {
            if(i>= a[j])
            {
                dp[i]+= dp[i-a[j]]+1; 
                
            }
        }
    }
}