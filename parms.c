#include <stdlib.h>
#include <stdio.h>

struct Point
{
    int x;
    int y;
} ;


void swap_ints_by_value(int x, int y) {
    int temp = y ;
    y = x;
    x = temp ;
}

void swap_ints_by_address(int *x, int *y) {
    int temp ;
    temp = *y ;
    *y = *x;
    *x = temp ;
}

void swap_points_by_value(struct Point p1) {
    int temp ;
    temp = p1.y ;
    p1.y = p1.x ;
    p1.x = temp ;
}

void swap_points_by_address(struct Point *p1) {
    int temp ;
    temp = p1->y ;
    p1->y = p1->x ;
    p1->x = temp ;
}

int main() {
    printf("Starting parms.c....\n") ;

    int x = 10; 
    int y = 20;

    swap_ints_by_value(x,y) ;
    printf("Values after swap by value: %d, %d\n", x, y) ;

    swap_ints_by_address(&x,&y) ;
    printf("Values after swap by address: %d, %d\n", x, y) ;

    struct Point p1 ={10,200} ;
    printf("Initial Point p1: x=%d, y=%d\n",p1.x, p1.y) ;

    swap_points_by_value(p1) ;
    printf("Point p1 after swap by value: x=%d, y=%d\n",p1.x, p1.y) ;

    swap_points_by_address(&p1) ;
    printf("Point p1 after swap by address: x=%d, y=%d\n",p1.x, p1.y) ;

    printf("parms.c finished!") ;

    return 0;
}