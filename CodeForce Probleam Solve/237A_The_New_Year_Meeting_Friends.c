/*
============================================================================
 Name        : The New Year: Meeting Friends
 Author      : S. M. shakiful Alam
 language    : C
 created     : 04-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/723/A
============================================================================
*/  


/*
    যেহেতু সর্বনিম্ন দূরত্ব বলছে তাই মাঝে মাঝে দূরত্বে গেলে সবচেয়ে কম দূরত্ব পার করতে হবে 
    যেমন: 7 1 4
    যদি ৭ নং বন্ধু ৪ এর কাছে আসে আর এক নং বন্ধু চার এর কাছে আসে, তাহলে ৪ কি কোন দূরত্ব পার করতে হবে না।
    তাহলে 7 কে 3meter দূরত্ব ওর 1 কে 3meter দূরত্ব পার করতে হবে। মোট 6meter দূরত্ব পার করলে সবাই দেখা করতে পারবে। 
    
    
    এখন গাণিতিকভাবে যদি আমরা দেখি তাহলে সহজ নিয়ম হিসেবে আমরা সর্বোচ্চ সংখ্যা থেকে সর্বনিম্ন সংখ্যা বিয়োগ করতে পারি। এটি করলেও ৬ আসে। 
    
    
    তাই শুরুতে ধরে নেওয়া হয়েছে max_distance = x1 ও min_distance = x1; 
    যদি x2 max_distance থেকে বড় হয় তাহলে x2 এর মান max_distance এ assign করব। নাহলে max_distance এ x1 এর মান থাকে।
    যদি x2 min_distance থেকে  ছোট হয় তাহলে x2 এর মান min_distance এ assign করব। নাহলে min_distance এ x1 এর মান থাকে।
    একই কাজ আমরা করব x3 এর জন্য। 
*/
    
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x1, x2, x3;
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    
    
    //initially let's assume x1 is min value and Max value 
    int min = x1;
    int max = x1;
    if(x2>max) //যদি x2, x1 হতে বড় হয় তাহলে Max value যে x1 রাখি। যদি x2, x1 হতে বড় না হয়, তাহলে x1 ই হলো‌ max value
    {
        max = x2;
    }
    if(x2<min)
    {
        min = x2;
    }
    
    
    if(x3>max) //যদি x3, x1 হতে বড় হয় তাহলে Max value যে x1 রাখি। যদি x3, x1 হতে বড় না হয়, তাহলে x1 ই হলো‌ max value
    {
        max = x3;
    }
    if(x3<min)
    {
        min = x3;
    }
    
    int ans = max - min;
    
    printf("%d", ans);
    
    return 0;
}


  
