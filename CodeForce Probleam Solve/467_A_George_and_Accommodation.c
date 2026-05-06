/*
============================================================================
 Name        : George and Accommodation
 Author      : S. M. shakiful Alam
 language    : C
 created     : 05-May-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/467/A
============================================================================
*/  




#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
    int n;  //The number of rooms
    scanf("%d", &n);
    
    int present[100]; //The number of people are already living 
    int capacity[100]; //the capacity of the room
    
    
    if(1<=n && n<=100)
    {
        for(int i=0; i<n; i++) //taking input 
        {
            scanf("%d", &present[i]);
            scanf("%d", &capacity[i]);
        }
    }
    
    int count=0; //to count the number of rooms where alex and George can move 
    
    for(int i=0; i<n; i++)
    {
        if(0<=present[i] && present[i]<=100 && 0<=capacity[i] && capacity[i]<=100)
        {
            if((present[i]+2) <= capacity[i])
            {
                count++;
            }
        }
        else{
             printf("Improper input");
             return 0;
        }
    }
    
    printf("%d", count);
    
    return 0;

}
    
