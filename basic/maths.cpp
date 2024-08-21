#include <bits/stdc++.h>
using namespace std;
const int  MOD= 1e9 ; 
int pw( int a , int b )
{
    int r = 1 ;
    while(b>0)
    {
        if(b&1) r= ( r*a )% MOD ;
        b/= 2; 
        a= a*a %MOD ; 
    }
    return r ; 

}

// nCr in log =m time optimised along with modulus 
// use fact in O(1) time by precomputation
int fact[1e9];
int ch(int n, int r)
{
    if(r>n)
    {
        return 0ll;
    }
    return (fact[n]* pw((fact[n-r]*fact[r])%MOD  , MOD-2)% MOD );
}



int main(){

}