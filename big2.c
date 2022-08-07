#include <stdio.h>  
   
void biggestoftwo() {  
    int a, b;  
    printf("\nEnter two different numbers to find largest:");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
    //return 0;  
}
