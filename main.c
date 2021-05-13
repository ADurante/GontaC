#include <stdio.h>

#define SIZE 30

int main(void)
{

    int array[SIZE];
    int a = 0, b = 0, c = 0, d = 0;
    int i, sum;

    printf("Welcome in GontaC!\n\n");

    puts("Enter the number of quadrant:");

    for(i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);

        if(array[i] == 1){
            a++;
        }

        if(array[i] == 2){
            b++;
        }

        if(array[i] == 3){
            c++;
        }

        if(array[i] == 4){
            d++;
        }
    }

    printf("The points in quadrant 1 are: %d\n", a);
    printf("The points in quadrant 2 are: %d\n", b);
    printf("The points in quadrant 3 are: %d\n", c);
    printf("The points in quadrant 4 are: %d\n", d);

    sum = a + b + c + d;

    if(sum != 30){
        puts("Error!");

        return -1;
    }

    return 0;

}