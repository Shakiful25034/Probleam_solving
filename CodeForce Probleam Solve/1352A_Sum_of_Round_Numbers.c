/*
============================================================================
 Name        : Sum of Round Numbers
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-June-2026
 modified    : 05-May-2026
 link        : https://codeforces.com/problemset/problem/1352/A
============================================================================
*/  



#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int t; //the numbers of test cases
    scanf("%d", &t);
    
    int n; //input number 
    
    while(t--)
    {
        scanf("%d", &n);
        
        if(1<=n && n<=10)
        {
            printf("%d\n", 1);
            printf("%d\n", n);
        }
        
        if(n>=11)
        {
            int cout_num=0;
            int arr[10]; //n<=10^4 হলে digit 5 এর বেশি হবে না 
            int index=0;
            int mod;
            while(n != 0)
            {
                mod = n%10;
                if(mod != 0)
                {
                    cout_num++;
                }
                
                arr[index] = mod*( pow(10, index) );
                
                n=n/10;
                index++;
            }
            printf("%d\n", cout_num);
            for(int i=0; i<index; i++)
            {
                if(arr[i] != 0)
                {
                    printf("%d\t", arr[i]);
                }
            }
            printf("\n");
        }
    }
    
    
    
    
    
    return 0;
}


  
