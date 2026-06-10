/*
============================================================================
 Name        : Soft Drink
 Author      : S. M. shakiful Alam
 language    : C
 created     : 04-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/151/A
============================================================================
*/  



    
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{    
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    
    int juice, slice, salt;
    int min=0;
    if(1<=n<=1000 && 1<=k<=1000 && 1<=l<=1000 && 1<=c<=1000 && 1<=d<=1000 && 1<=p<=1000 && 1<=nl<=1000 && 1<=np<=1000)
    {
        juice = (k*l)/nl;
        
        min = juice/n;
        
        
        slice = (c*d);
        if(slice/n < min)
        {
            min = slice/n;
        }
        
        
        salt = p/np;
        if((salt/n) < min)
        {
            min = salt/n;
        }
    }
    
    if(min>=0)
    {
        printf("%d", min);
    }
    
    
    return 0;
}





//easy method of sloving
/*

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int juice = (k * l) / nl;
    int slice = c * d;
    int salt  = p / np;

    int min = juice / n;

    if (slice / n < min) min = slice / n;
    if (salt  / n < min) min = salt  / n;

    printf("%d", min);
    return 0;
}

*/  
