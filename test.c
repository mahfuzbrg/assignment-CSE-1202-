#include <stdio.h>
#include<math.h>
#include "mahfuz.h"
#define ll long long
#define fore(i, a, b) for(int i = a; i < b; i++)
#define nn printf("\n")


int main() {

    int mx = max(5, 9);
    printf("Max number is = %d\n", mx);

    int mn = min(5, 9);
    printf("Min number is = %d\n", mn);
    
    if(is_prime(17)) printf("Number is Prime!\n");
    else printf("Not Prime!\n");

    if(isOdd(17)) printf("Odd!\n");
    else printf("Even!\n");

    if(isEven(170)) printf("Even!\n");
    else printf("Odd!\n");   

    int a[5] = {5, 3, 8, 2, 6};
    int totalSum = digitSum(a, 5);
    printf("Total sum is = %d\n", totalSum);

    printf("Reversed number is -> ");
    reverseNumber(10542);

    printf("Binary value is = ");
    decimalTobinary(15);
    
    int dNum = binaryToDecimal(1111);
    printf("Decimal value is = %d\n", dNum);

    printf("Octal value is = ");
    decimalTooctal(8);

    printf("Hexadecimal value is = ");
    decimalToHexadecimal(1702);

    int fact = factorial(5);
    printf("Factorial is = %d\n", fact);

    int gcd = findGCD(3, 6);
    printf("GCD is = %d\n", gcd);

    int lcm = findLCM(2, 4);
    printf("LCM is = %d\n", lcm);

    if(isPalindrome(10101)) printf("Palindrome!\n");
    else printf("Not Palindrome!\n");

    return 0;
}
