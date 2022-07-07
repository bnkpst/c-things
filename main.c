// Testing testing111222222
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
};


int main(int argc, char **argv) {


    struct Point bob;

    struct Point *mem;
    
    mem = malloc(sizeof(bob) * 3);

    printf("Mem: %lu\n\n", sizeof(bob));
    
    bob.x = 40;
    bob.y = 50;

    mem[0] = bob;

    mem[1].x = 3;
    mem[1].y = 99;

    if(argc > 1) {

        for ( int i = 0; i < argc; i++) {
             printf("\nArg %d: %s\n", i,  argv[i]);
        }
       
    }
    else {
        for ( int i = 0; i < 3; i++) {
             printf("Mem %d: x: %d, y: %d\n", i, mem[i].x, mem[i].y);
        }
    }

    free(mem);

    return 0;
}