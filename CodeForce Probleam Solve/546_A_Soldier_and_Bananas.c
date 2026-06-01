/*
============================================================================
 Name        : Soldier and Bananas
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/546/A
============================================================================
*/  




#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long long int k, n,w;
    
    scanf("%lld", &k);
    scanf("%lld", &n);//the number of dollars the shoulders has 
    scanf("%lld", &w); //the number of bananas the solider has to buy
    
    
    int total_coat_of_banans; 
    int borrow;
    
    if(1<=k && k<=1000 && 1<=w && w<=1000 && 0<=n && n<= pow(10,9))
    {
        total_coat_of_banans = k*( (w*(w+1))/2 );
        borrow = (total_coat_of_banans - n);
        if(borrow<0)
        {
            borrow = 0;
        }
        printf("%lld", borrow);
    }
    
    
    return 0;
}




    
