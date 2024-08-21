#include <bits/stdc++.h>
using namespace std;
#define int long long 

//---------------------------------------------------basic ones----------------
bool odd(int x)
{
    return (x&1);
}
bool power_of_two(int x){
    return (x)&(x-1);
}

void k_bit(int k, int x)
{
    int val= 1<<k;
    //is it set 
    cout<<(x&val)<<endl;
    //to set 
    cout<<(x|val)<<endl;
    //to toggle the k bit 
    cout<<(x^val )<<endl ;
    //to unset the k th bit 

    cout<<(x&(~val ))<<endl; 

    //x mod 2 power k 
    cout<<(x&(val-1))<<endl;

    //clear rightmost set bit 
    cout<<(x & ( x-1 ))<<end;

}
void swap(int x, int y){
    x= x^y ;
    y= x^y ;
    x= x^y;
//conditional toggling of values 
    x= 7^10^x;
    //means if x is 7 it will change to 10 and if 10 will change to 7 
    
}
int add(int a, int b)
{
    cout<<(a^b)+(2*(a&b))<<endl;
    cout<<(a|b)+(a&b)<<endl;
}
//------------------------------------------------------------------------------------------
void pref_xor(int a[],int n , int l, int r)
{
    //xor pref 
    int pref[n];
    pref[0]= a[0];
    for(int i = 1; i<n; i++)
    {
        pref[i]= pref[i-1]^a[i];
    }
    //for find xor sum in range of a and b 

    int ans = pref[l-1]^pref[r];
    // always remember a^a = 0 hota hai 
}
void properties(int a, int b)
{
    if(a|b == a&b + a^b){}
    if((a|b)^(a&b)== a^b){}
    if(a^(a&b)== (a|b)^b){}
// Substraction  
//a-b = (a⊕(a&b))-((a|b)⊕a)
// a-b = ((a|b)⊕b)-((a|b)⊕a)
// a-b = (a⊕(a&b))-(b⊕(a&b))
// a-b = ((a|b)⊕b)-(b⊕(a&b))
}

void playwith_char(char A, char B)
{
 cout<<char('A'|(1<<5))<<endl;     //Convert Char to lower case;
 cout<<char('a'&(~(1<<5)))<<endl;    //Convert Char to upper case;
//  Actually char of 1<<5 is _(space);
//  Take any upper case letter and its |(or) with space will get the corresponding lower case letter
 cout<<char('C'|' ')<<endl;   // will make it small c
 //if you have a lower case letter and you want to make it upper case in that situation 
 cout<<char('c'&'_')<<endl ; // this will make it capital 

 //if we want to know the position of the alphabet in the asci value 
//  (‘A’ & 31) returns position 1
//  (‘c’ & 31) returns position 3



}






int32_t main()
{
    //basics 

}