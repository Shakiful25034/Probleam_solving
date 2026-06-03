/*
============================================================================
 Name        : Candies and Two Sisters
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/1335/A
============================================================================
*/  



#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t; //the numbers of test cases
    scanf("%d", &t);
    
    long long int n; //the number of candies I have 
    
    
    
    for(int i=0; i<t; i++)
    {
        scanf("%lld", &n);
        
        if(n == 1 || n==2)
        {
            printf("%d\n", 0);
        }else if(n>=3)
        {
            if(n%2 != 0) //means even number 
            {
                printf("%d\n", (n-1)/2);
            }else
            {
                printf("%d\n", (n-2)/2);
            }
        }
    }
    
    return 0;
}


    
