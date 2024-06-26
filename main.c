#include <stdio.h>


// @brief check if a number is a prime number
// @param num the number you want to check
// @return 1 if prime; 0 if not prime
int is_prime(int num){
    if (num <= 1){
        return 0;       // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return 0;       // num is divisble by i, hence not prime
        }
    }

    return 1;   //num is prime
}

int main(){
    int count = 0, n = 1;

    while (count <= 10001){
        // if the number is prime, then increase the count
        if(is_prime(n))
            count++;
        // move to the next number
        n++;
    }

    //print the result
    printf("the 10,001 prime is:\t%d\n", n);
    return 0;

}
