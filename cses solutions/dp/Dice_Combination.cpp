#include <bits/stdc++.h>
using namespace std;

//my attempt  
// no. of ways ? construct the sum of n , when throwing the dice one or more than once ...
// how to think about this approach as dp 
// think about index, ok so wee need to chekc the no. of ways right how do we do that think about it 
// 0......n we have index right 

//way -----
// This is the second form of DP , called the dp sum form , which means we think of the structure as ki total sum kya hoga dp ka and 
// so we need to add all the ways and the fucntion gives us the answer of all the ways
// so basically we need to add it up and if asked we may evem mod it up on purpose so that the results aren t big enough 
// DP[K]= no. of ways to get sum of k 
// and dp[k]= dp[k-i] summation where the i varies from 1 to n 
// 



int f(int index,int  val )
{
    //think about base cases 
    if(val == 0 ){
        return 0; //no more ways we need 
    }
    if(index== 1){
        return (val<= 6);

    }
    int pick = 0 ;
    for(int x= 1; x<= 6; x++){
    pick += f(index-1, val-x);
    }
    //sum up all the ways 
    return pick;


}



int main(){
    int n ; cin>>n ; 
    int ans= f(n, n);

    vector <int> dp(10000001);
    
    //we may also do by iterative approach 
    for(int i = 0; i<= n ; i++)
    {
        if(i== 0)
        {
            dp[i]= (1);
        }else{
            dp[i]= 0;
            for(int j= 1; j<= 6; j++)
            {
                if(j<= n-i ){
                    dp[i]+= ((dp[i-j]));
                }
            }
        }
    }
    

}