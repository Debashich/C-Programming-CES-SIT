#include <stdio.h>

int main() {
    int i = 1;

    //For loop
    printf("Multiplication table using for loop : \n");
    for (i = 1; i <= 10; i++) {
        printf("2 * %d = %d\n", i, 2 * i);
    }

    //While loop
    printf("\nMultiplication table using while loop : \n");
    i = 1;
    while (i <= 10) {
        printf("2 * %d = %d\n", i, 2 * i);
        i++;
    }

    //Dowhile loop
    printf("\nMultiplication table using do-while loop : \n");
    i = 1;
    do{
        printf("2 * %d = %d\n", i, 2 * i);
        i++;
    }
        while(i <= 10);
    return 0;
}
