#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n; //the number of soldiers in the line
    scanf("%d", &n);

    int initial_line[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &initial_line[i]);
    }

    //finding min and max for the rows;
    int min=initial_line[0], max=initial_line[0];
    int min_index=0, max_index=0;
    for(int i=0; i<n; i++)
    {
        if(initial_line[i]<=min)
        {
            min = initial_line[i];
            min_index = i;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(initial_line[i]>max)
        {
            max = initial_line[i];
            max_index = i;
        }
    }


    // Calculate moves using positions (indices) instead of heights
    int total_minimum_number_of_move = max_index + ((n - 1) - min_index);

    // If max is to the right of min, they cross paths during swaps.
    // This gives us 1 "free" swap, so we subtract 1.
    if (max_index > min_index)
    {
        total_minimum_number_of_move--;
    }

    printf("%d", total_minimum_number_of_move);


    return 0;
}
