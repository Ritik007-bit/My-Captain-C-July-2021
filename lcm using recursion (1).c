#include<stdio.h>
// function definition
int findlcm(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        findlcm(a,b);
        return temp;
    }
}

int main()
{
    int a, b, lcm;
    printf("Enter 2 numbers to find LCM of:");
    scanf("%d%d", &a, &b);
    lcm = findlcm(a,b);    // function call
    printf("LCM of %d and %d is: %d", a, b, lcm);
    return 0;
}