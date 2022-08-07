#include <stdio.h>
void sumoftwo() {    

    int number1, number2, sum;
    
    printf("\nEnter two numbers to find sum: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);
    //return 0;
}
