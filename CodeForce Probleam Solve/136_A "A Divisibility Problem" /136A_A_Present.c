/*
============================================================================
 Name        : Present
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 01-june-2026
 link        : https://codeforces.com/problemset/problem/136/A
============================================================================
*/  




#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n; //number of or quantity of friends 
    scanf("%d", &n);
    
    // p[i] = friend who receives a gift from friend i
    int p[101]; 
    
    // ans[i] = friend who gave a gift to friend i
    int ans[101];
    
    
    if(1<=n && n<=100)
    {
        for( int i=1; i<=n; i++)
        {
            // Input the friend who received a gift from friend i
            scanf("%d", &p[i]);
            
            // If friend i gave a gift to friend p[i],
            // then friend p[i] received a gift from i
            ans[p[i]] = i;
        }
        
        
        
        for( int i=1; i<=n; i++)
        {
            // Print the friend who gave a gift to friend i
            printf("%d ", ans[i]);
        }
    }
    
    
    return 0;
}





