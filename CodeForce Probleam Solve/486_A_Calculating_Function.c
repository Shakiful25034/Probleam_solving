/*
============================================================================
 Name        : Calculating Function 
 Author      : S. M. shakiful Alam
 Language    : C
 Created     : 05-May-2026
 Modified    : 05-May-2026
 Link        : https://codeforces.com/problemset/problem/486/A
============================================================================
*/


#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    long long int n; //to store the total number in the series 
    scanf("%lld", &n);
    
    long long int sum=0;  //initializing the total sum zero
    
    
    if(1<=n && n<=pow(10, 15))
    {
        if(n%2==0)
        {
            sum = n/2;
        }else{
            sum = ( (n-1)/2 ) -  n;
        }
    }
    
    printf("%lld", sum);
    
    return 0;
}    


 /*
     we are not using that loop because it's exicutiotime is more than 1sec means 1000ms
     
     
    for(int i=1; i<=n; i++) //using a for loop to calculate the sum of the numbers 
    {
        sum = sum + pow(-1,i)*i; 
    }
    
    */
    
