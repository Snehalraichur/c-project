#include <stdio.h>
    void sorting()
    {
 
        int i, j, a, n, number[30];
        printf("\n\nEnter the value of N to sort the numbers:");
        scanf("%d", &n);
 
        printf("\nEnter the numbers:");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("\nThe numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
