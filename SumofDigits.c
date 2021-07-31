#include <stdio.h>

// function definition
int SumOfDigits(int num)
{
    
    if(num == 0)
        return 0;
                
    return num%10 + SumOfDigits(num/10);    
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, SumOfDigits(n));
 
    return 0;
}