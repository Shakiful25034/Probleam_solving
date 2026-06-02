/*
============================================================================
 Name        : Ultra-Fast Mathematician
 Author      : S. M. shakiful Alam
 language    : C
 created     : 02-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/61/A
============================================================================
*/  



#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char input_1[101];
    char input_2[101];
    
    scanf("%s", &input_1);
    scanf("%s", &input_2);
    
    int answer_length = strlen(input_1);
    
    if(strlen(input_1) != strlen(input_2))
    {
        return 0;
    }
    
    
    for(int i=0; i<answer_length; i++)
    {
        if(input_1[i]!=input_2[i])
        {
            printf("1");
        }else{
            printf("0");
        }
    }
    return 0;
}




    
