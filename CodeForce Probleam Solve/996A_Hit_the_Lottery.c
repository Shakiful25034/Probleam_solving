/*
============================================================================
 Name        : Hit the Lottery
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/996/A
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
    
    scanf("%d", &n);
    
    
    int notes_100, notes_20, notes_10, notes_05, notes_01;
    int total_number_of_notes=0;
    while(n !=0 ) 
    {
        notes_100 = n/100;
        n%=100;
        
        notes_20 = n/20;
        n%=20;
        
        notes_10 = n/10;
        n%=10;
        
        notes_05 = n/5;
        n%=5;
        
        notes_01 = n/1;
        n%=1;
    }
    
    total_number_of_notes = notes_100 + notes_20 + notes_10 + notes_05 + notes_01;
    printf("%d", total_number_of_notes);
    
    
    return 0;
}


  
