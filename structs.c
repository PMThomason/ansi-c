#include <stdlib.h>
#include <stdio.h>

struct Rectangle
{
    int length;
    int width;
};


int main() {
    printf("Starting structs.c....\n") ;

    struct Rectangle r1 ;
    r1.length = 10;
    r1.width = 20 ;

    printf("ints are %lu bytes\n", sizeof(int)) ;
    printf("Rectangle is %lu bytes\n", sizeof(struct Rectangle)) ;

    printf("r1 is %lu bytes\n", sizeof(r1)) ;

    printf("Rectangle properties are length: %d width: %d\n", r1.length, r1.width) ;

  
    struct Rectangle *p = &r1 ;
    p -> length = 15 ;
    (*p).width = 30 ;

    printf("Pointers are %lu bytes.\n", sizeof(p)) ;

    printf("After referencing with pointer, Rectangle properties are length: %d width: %d\n", r1.length, r1.width) ;

  
    printf("structs.c finished!") ;

    return 0;
}