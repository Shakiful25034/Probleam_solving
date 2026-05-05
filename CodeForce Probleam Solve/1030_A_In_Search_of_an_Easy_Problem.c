/*
============================================================================
 Name        :In Search of an Easy Problem
 Author      : S. M. shakiful Alam
 language    : C
 created     : 05-May-2026
 modified    : 05-May-2026
 link        :https://codeforces.com/problemset/problem/1030/A
============================================================================
*/  



#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int cheaking_probleam(int *opinion, int n)
{
    
    for(int i=0; i<n; i++)
    {
        if(opinion[i] == 1) //যদি n সংখ্যক লোকের মধ্যে একজনও 1 বলে মানে hard বলে তাহলে return 0 মানে question "hard" skip করতে হবে 
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n; //the number of people who were ased to give their oppinion
    scanf("%d",&n);
    
    int opinion[n]; //to store the opinion of all the persion, about the math is the math eqsy(0), or hard(1)
    for(int i=0; i<n; i++)
    {
        scanf("%d",&opinion[i]);
    }
    
    
    
    
    if(cheaking_probleam(opinion, n)) //if the function "cheaking_probleam" return 1 then print "Easy"
    {
        printf("EASY");
    }else{
        printf("HARD");
    }
    
    return 0;
}
