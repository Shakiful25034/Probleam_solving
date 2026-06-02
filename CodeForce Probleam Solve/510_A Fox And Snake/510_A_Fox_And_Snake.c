/*
============================================================================
 Name        : Fox And Snake
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/510/A
============================================================================
*/  


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n; //row
    scanf("%d", &n);
    
    
    int m; //col
    scanf("%d", &m);
    
    for(int row=1; row<=n; row++)
    {
        if(row%2 !=0) //row বিজোড় হলে col এর সমান সংখ্যক # print হবে
        {
            for(int col=1; col<=m; col++)
            {
                printf("#");
            }
        }
        else if(row%4 ==2) // 2, 6, 10, 14 ... এদের 4 দিয়ে ভাগ করলে ভাগশেষ হয় 2. তো ভাগশেষ 2 হলে last col এ # হবে
        {
            for(int col=1; col<m; col++)
            {
                printf(".");
            }
            printf("#");
        }
        else // 4, 8, 12, 16 ... এদের 4 দিয়ে ভাগ করলে ভাগশেষ হয় 0. তো ভাগশেষ 0 হলে 1st col এ # হবে বাকিগুলো dot(.) হবে 
        {
            printf("#");
            for(int col=2; col<=m; col++)
            {
                printf(".");
            }
        }
        printf("\n");
    }
    
    return 0;
}




    
