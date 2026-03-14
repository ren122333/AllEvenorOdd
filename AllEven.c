#include <stdio.h>
#include <time.h>
 
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
void print_current_time() {
    printf("current time 19:51");
}
 
void print_calendar() {
    printf("Календарь\n");  
    printf("Пн Вт Ср Чт Пт Сб Вс\n");    
    printf(" 1  2  3  4  5  6  7\n");
}