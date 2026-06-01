/*
============================================================================
 Name        : A Divisibility Problem 
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/1328/A
============================================================================
*/  




#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t; //The number of test case 
    scanf("%d", &t);
    
    
    
    int num1, num2, mod;
    int output[t];
    int move; //the minimum number of moves 
    
    if(1<=t && t<=10000)
    {
        for( int i=0; i<t; i++)
        {
            scanf("%d", &num1);
            scanf("%d", &num2);
            
            mod = num1%num2;
            move = num2 - mod; 
            
            if( mod != 0)
            {
                output[i] = move;
            }else
            {
                output[i] = mod;
            }
        }
        
        
        
        for( int i=0; i<t; i++)
        {
            // Print the friend who gave a gift to friend i
            printf("%d ", output[i]);
        }
    }
    
    
    return 0;
}




    
