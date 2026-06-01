/*
============================================================================
 Name        : Pangram
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/520/A
============================================================================
*/  


/*
    pengram মানে হলো a থেকে z পর্যন্ত সবগুলো ১বার করে থাকবে যেমন: 
        TheQuickBrownFoxJumpsOverTheLazyDog
    এখানে প্রতিটি Alphabet ১বার করে আছে। তাই এটি Panagram.     

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n; //the number of characters in the string
    scanf("%d", &n);
    
    char str[n+1];//to store the string taken from user
    scanf("%s", str);
    char ch;
    
    
    int count=0;
    
    if(1<=n && n<=100)
    {
        char temp[n+1];
        
        for(int i=0; i<n; i++)
        {
            ch = toupper(str[i]);
            temp[i] = ch;
        }
        
        for(int i= 'A'; i<= 'Z'; i++)
        {
            for(int k=0; k<n; k++)
            {
                if(temp[k] == i)
                {
                    count++;
                    break;
                }
            }
        }
    
    }
    
    if(count == 26)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}




    
