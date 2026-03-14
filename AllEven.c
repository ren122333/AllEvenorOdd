#include <stdio.h>
 
int main() {
    int a, b, c;
    printf("Please enter the numbers");
    scanf("%d, %d, %d", &a, &b, &c);
    if (a%2 == b%2 && b%2 == c%2){
        printf("True");
        return(1);
    }
    printf("False");
    return 0;
    printf("I owe you money.");
}