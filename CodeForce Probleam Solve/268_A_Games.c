/*
============================================================================
 Name        : Games
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/268/A
============================================================================
*/  


#include<stdio.h>
int main()
{
    int n; //number of teams
    scanf("%d", &n);
    int host[n];
    int guest[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &host[i]);
        scanf("%d", &guest[i]);
    }
    
    int count=0;
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j<n ; j++)
        {
            if (host[i] == guest[j])
            {
                count++;
            }
            
        }
        
    }

    printf("%d", count);
}
