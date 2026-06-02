/*
============================================================================
 Name        : Queue at the School
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/266/B
============================================================================
*/  



#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    int t;
    scanf("%d", &n);
    scanf("%d", &t);
    
    char arr[n+1];
    scanf("%s", &arr);
    
    char temp;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]== 'B' && arr[j+1]== 'G')
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
    }
    
    printf("%s", arr);
    
    return 0;
}




    
