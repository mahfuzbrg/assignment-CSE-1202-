#ifndef MAHFUZ_H
#define MAHFUZ_H

#include <stdbool.h>

// ১. মিনিমাম ভ্যালু বের করার ফাংশন
int get_min_from_array(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

// ২. ম্যাক্সিমাম ভ্যালু বের করার ফাংশন
int get_max_from_array(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// দুটো নাম্বার থেকে ম্যাক্স বের করার ফাংশন
int max(int a, int b){
    if(a > b) return a;
    else return b;
}

// দুটো নাম্বার থেকে মিনিমাম বের করার ফাংশন
int min(int a, int b){
    if(a < b) return a;
    else return b;
}

// ৩. যেকোন অ্যারের সকল উপাদানের টোটাল যোগফল বের করার ফাংশন
int digitSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// প্রাইম চেক করার একটি হেল্পার ফাংশন
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// ৪. কতগুলো প্রাইম নাম্বার আছে তা গোনার ফাংশন
int count_primes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) count++;
    }
    return count;
}

// সবগুলো প্রাইম প্রিন্ট করার ফাংশন
void print_primes(int arr[], int size) {
    int count = 0;
    int prime[size];
    int sz = 0;
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            prime[sz] = arr[i];
            sz++;
        }
    }
    for(int i = 0; i < sz; i++) printf("%d ", prime[i]); printf("\n");
}

// 5. অ্যারে প্রিন্ট করার ফাংশন
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]); printf("\n");
}

/*দুটো নাম্বারকে সোয়াপ করার ফাংশন*/
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*একটা সংখ্যার বিজোড় কিনা তা চেক করার ফাংশন*/
bool isOdd(int n){
    if(n % 2 == 0) return true;
    else return false;
}

/*একটা সংখ্যার জোড় কিনা তা চেক করার ফাংশন*/
bool isEven(int n){
    if(n % 2 == 1) return true;
    else return false;
}

/*যেকোনো ডেসিমেল নাম্বারকে বাইনারিতে কনভার্ট করার ফাংশন*/
void decimalTobinary(int n){
    int a[100]; int size = 0;
    for(int i = 0; n > 0; i++){
        int mod = n % 2;
        a[i] = mod;
        size++;
        n = n/2;
    }
    for(int i = size-1; i >= 0; i--) printf("%d", a[i]); printf("\n");
}

/*যেকোনো ডেসিমেল নাম্বারকে অক্টালে কনভার্ট করার ফাংশন*/
void decimalTooctal(int n){
    int a[100]; int size = 0;
    for(int i = 0; n > 0; i++){
        int mod = n % 8;
        a[i] = mod;
        size++;
        n = n/8;
    }
    for(int i = size-1; i >= 0; i--) printf("%d", a[i]); printf("\n");
}

/*যেকোনো ডেসিমেল নাম্বারকে HexaDecimal এ কনভার্ট করার ফাংশন*/
void decimalToHexadecimal(int n) {
    printf("%X\n", n);
}

/*যেকোনো বাইনারি নাম্বারকে ডেসিমেলে কনভার্ট করার ফাংশন*/
int binaryToDecimal(long long n) {
    int dNum = 0, i = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10; 
        
        dNum += remainder * pow(2, i);
        i++;
    }
    return dNum;
}

/*যেকোনো নাম্বারকে রিভার্স করে প্রিন্ট করার ফাংশন*/
void reverseNumber(int n){
    int a[100];
    int sz = 0;
    while(n > 0){
        int mod = n % 10;
        a[sz] = mod;
        sz++;
        n = n / 10;
    }
    for(int i = 0; i < sz; i++) printf("%d", a[i]); printf("\n");
}

/*যেকোনো নাম্বারের ফ্যাক্টরিয়াল রিটার্ন করবে*/
int factorial(int n){
    int fact = 1;
    for(int i = n; i >= 1; i--){
        fact *= i;
    }
    return fact;
}

/**/
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


/**/
int findLCM(int n1, int n2) {
    int max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0)
            return max;
        max++;
    }
}


bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while(n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

#endif