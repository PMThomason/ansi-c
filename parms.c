#include <stdlib.h>
#include <stdio.h>

void swap_by_value(int x, int y) {
    int temp = y ;
    y = x;
    x = temp ;
}

void swap_by_address(int *x, int *y) {
    int temp ;
    temp = *y ;
    *y = *x;
    *x = temp ;
}

int main() {
    printf("Starting parms.c....\n") ;

    int x = 10; 
    int y = 20;

    swap_by_value(x,y) ;
    printf("Values after swap by value: %d, %d\n", x, y) ;

    swap_by_address(&x,&y) ;
    printf("Values after swap by address: %d, %d\n", x, y) ;

    printf("parms.c finished!") ;

    return 0;
}