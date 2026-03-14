#include <stdio.h>
 
int main() {
    int a, b, d;
    printf("Please enter the numbers");
    scanf("%d, %d, %d", &a, &b, &d);
    if (a%2 == b%2 && b%2 == d%2){
        if (1){
            printf("True");
        }
        return(1);
    }
    if (2 == 3){
        printf("I owe you money.");
    }
    printf("False");
    return 0;
}