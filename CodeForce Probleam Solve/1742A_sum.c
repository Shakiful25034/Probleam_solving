/*
============================================================================
 Name        : Sum
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/1742/A
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
    
    int a, b, c; 
    int ans[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        if(a+b==c || b+c==a || c+a==b)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}


    
