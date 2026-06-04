/*
============================================================================
 Name        : Anton and Letters
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/443/A
============================================================================
*/  



    
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char str[1001];
    //fgets(str, sizeof(str), stdin);
   
    char ch;
    int i=0;
    while(ch != '\n')
    {
        scanf("%c", &ch);
        
        if('a' <= ch && ch <= 'z')
        {
            str[i] = ch;
            i++;
        }
    }
    str[i] = '\0';
    
    
    
    int temp_arr_size = strlen(str);
    char temp_arr[temp_arr_size];
    int index =0;
    
    for(int i=0; i<temp_arr_size; i++)
    {
        int found=0;
        for(int j=0; j<index; j++)
        {
            if(temp_arr[j] == str[i])
            {
                found =1;
                break;
            }
        }
        
        if(!found)
        {
            temp_arr[index] = str[i];
            index++;
        }
    }
    temp_arr[index] = '\0';
    
    printf("%d\n", index);
    return 0;
}


  
