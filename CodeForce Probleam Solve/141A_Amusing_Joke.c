/*
============================================================================
 Name        : Amusing Joke
 Author      : S. M. shakiful Alam
 language    : C
 created     : 04-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/141/A
============================================================================
*/  



    
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char guest_name[201];
    char residence_host[201];
    
    scanf("%s", guest_name);
    scanf("%s", residence_host);
    strcat(guest_name, residence_host);
    
    
    int length_of_final_str = strlen(guest_name);
    char final_str[201];
    scanf("%s", final_str);
    
    if (length_of_final_str != strlen(final_str))
    {
        printf("NO");
        return 0;
    }
    
    //int test[length_of_final_str];
    char ch;
    for(int i=0; i<length_of_final_str; i++)
    {
        for(int j=i+1; j<length_of_final_str; j++)
        {
            if(guest_name[i] > guest_name[j])
            {
                ch = guest_name[i];
                guest_name[i] = guest_name[j];
                guest_name[j] = ch;
            }
        }
    }
    
    for(int i=0; i<length_of_final_str-1; i++)
    {
        for(int j=i+1; j<length_of_final_str; j++)
        {
            if(final_str[i] > final_str[j])
            {
                ch = final_str[i];
                final_str[i] = final_str[j];
                final_str[j] = ch;
            }
        }
    }
    if(strcmp(final_str, guest_name) == 0) //যেহেতু যদি condition true হয় তাহলে zero return করে
    {
        printf("YES");
    }else 
    {
        printf("NO");
    }    
    return 0;
}


  