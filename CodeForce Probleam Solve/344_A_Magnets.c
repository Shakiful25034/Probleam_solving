/*
============================================================================
 Name        : Magnets
 Author      : S. M. shakiful Alam
 language    : C
 created     : 02-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/344/A
============================================================================
*/  


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;//the number of megnets 
    scanf("%d", &n); 
    
    int magnets[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &magnets[i]);
    }
    
    
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(magnets[i] != magnets[i+1])
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}




    
