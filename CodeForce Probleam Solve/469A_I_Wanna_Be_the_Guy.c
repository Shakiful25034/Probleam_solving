/*
============================================================================
 Name        : I Wanna Be the Guy
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/469/A
============================================================================
*/  


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n; //the numbers of levels 
    scanf("%d", &n);
    int total_game_wining[101]={0}; //To fill all the index with 0
    
    int win=0;
    
    int x;
    scanf("%d", &x);
    for(int i=0; i<x; i++)
    {
        scanf("%d", &win);
        total_game_wining[win]=1;
    }
    
    
    int y;
    scanf("%d", &y); 
    for(int i=1; i<=y; i++) //as 1<=y<=n
    {
        scanf("%d", &win);
        total_game_wining[win]=1;
    }
    
    for(int i=1; i<=n; i++) 
    {
        if(total_game_wining[i]==0){
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    
    printf("I become the guy.");
    
    
    return 0;
}


    
