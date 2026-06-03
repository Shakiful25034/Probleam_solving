/*
============================================================================
 Name        : Insomnia cure
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/148/A
============================================================================
*/  


/* 
   ১ থেকে d এর মধ্যে যেসকল সংখ্যা k, l, m, n দ্বারা বিভাজ্য তারা princess দ্বারা ক্ষতিগ্রস্ত হবে। 
   example - 2nd example 
k = 2
l = 3
m = 4
n = 5
d = 24

   এখানে (2,3,4,5,6,8,9,10,12,14,15,16,18,20,21,22,24) সংখ্যাগুলো 2, 3, 4, 5 দ্বারা বিভাজ্য। 
   মোট বিভাজ্য সংখ্যা হল 17টি। এই 17 আউট করে দেখাতে হবে। 
   
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int k,l,m,n,d; //the numbers of test cases
    
    scanf("%d", &k);
    scanf("%d", &l);্যে 
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);
    
    int count=0;
    for(int i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            count++;
        }
    }
    
    printf("%d", count);
    
    
    return 0;
}


  
