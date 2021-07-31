#include<stdio.h>

// declaring the recursive function
int isPrime(int n, int i)
{
    if(i == 1)
        return 1;  
    else
    {
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);    
    }
}

int main()
{
    int num, prime;
    printf("Enter a positive number to check if it is Prime: ");
    scanf("%d", &num);
    prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("\n%d is a prime number", num);
    }
    else
    {
        printf("\n%d is a Composite number", num);
    }
    
    return 0;
}