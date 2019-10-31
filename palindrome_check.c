#include <stdio.h>
int main()
{
    int n, revInteger = 0,origInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    origInteger = n;
  
    while( n!=0 )
    {
        int remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    // palindrome if orignalInteger and reversedInteger are equal
    if (origInteger == revInteger)
        printf("%d is a palindrome.", origInteger);
    else
        printf("%d is not a palindrome.", origInteger);
    
    return 0;
}
