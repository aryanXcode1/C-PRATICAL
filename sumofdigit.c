#include <stdio.h>
int main() {
    // ARYAN RAJ
    // 10297
    // output:
    // Enter a number: 1234
    // Sum of digits = 10
    int n , sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(; n > 0; n /= 10) {
        sum += n % 10; 
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}