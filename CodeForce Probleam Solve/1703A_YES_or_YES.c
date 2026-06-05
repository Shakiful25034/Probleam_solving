/*
============================================================================
 Name        : YES or YES?
 Author      : S. M. shakiful Alam
 language    : C
 created     : 04-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/1703/A
============================================================================
*/  

    
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{    
    int n; //variable to store number of test cases
    scanf("%d", &n);
    
    /*
        we take the size of string str is 4 because - the size of the 
        string according to question is 3 and 1 extra for '\0' character
    */
    char str[4];
    
    for(int i=0; i<n; i++)
    {
        scanf("%s", str); //taking of a string 
        for(int j=0; str[j] != '\0'; j++)
        {
            str[j] = toupper(str[j]);
        }
        if(strcmp(str, "YES") == 0) //as if the condition in true them strcmp returns 0
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    
    return 0;
}


  
