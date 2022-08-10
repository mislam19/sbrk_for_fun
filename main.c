#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define MALLOC_WRAPPER malloc
#define FREE_WRAPPER free


int main( int argc, char** argv )
{
    int *abuf = malloc(4);
    printf("Buf at 0x%" PRIXPTR "\n",(intptr_t)abuf);
    //printf("Buf[x] = 0x%x\n",(int)abuf[5000000]);
    free(abuf);
    int *bbuf = malloc(4);
    printf("Buf at 0x%" PRIXPTR "\n",(intptr_t)bbuf);
    free(bbuf);
    int *cbuf = malloc(4);
    printf("Buf at 0x%" PRIXPTR "\n",(intptr_t)cbuf);
    free(cbuf);
    return 0;
}
