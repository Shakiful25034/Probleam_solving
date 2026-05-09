/*
============================================================================
 Name        : Drinks
 Author      : S. M. shakiful Alam
 language    : C
 created     : 05-May-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/200/B
============================================================================
*/  




#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
    int n;  //The number of orange conraininin viyas's fritze
    scanf("%d", &n);
    
    int present[100]; //The volume fraction of orange juice in the i-th drink is present 
    //int capacity[100]; //the capacity of the room
    
    int count=0;
    double sum=0;
    
    if(1<=n && n<=100)
    {
        for(int i=0; i<n; i++) //taking input 
        {
            scanf("%d", &present[i]); 
            count++; //to count the number of inputs in array 
        }
        
    }
    
    
    
    for(int i=0; i<count; i++)
    {
        if(0<=present[i] && present[i]<=100)
        {
            sum=sum+present[i];
        }else
        {
            printf("The volume of the orange juice should be 0 to 100");
            return 0;
        }
            
    }
    
    double avg = sum/count; //fundithe average 
    
    printf("%.12f", avg);
    
    return 0;

}
    
