/*
============================================================================
 Name        : Police Recruits
 Author      : S. M. shakiful Alam
 language    : C
 created     : 08-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/268/A
============================================================================
*/  

#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    int n; //number of test case
    scanf("%d", &n); //number of events occurs
    
    int officers = 0;
    int untreated = 0;

    for (int i = 0; i < n; i++)
    {
        int event;
        scanf("%d", &event);

        if (event==-1)
        {
            if (officers > 0)
            {
                officers--;
            }else
            {
                untreated++;
            }  
        }
        else
        {
            officers+=event;
        }
    }

    if (untreated>0)
    {
        printf("%d", untreated);
    }else if (untreated<=0)
    {
        printf("%d", 0);
    }
    
    
    
    
    return 0;
}