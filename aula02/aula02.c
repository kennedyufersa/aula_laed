#include <stdio.h>
#include <time.h>
#include <stdlib.h>//atoi
#include <math.h>

int fib(int);
int main(int argc, char *argv[]){
    int res = fib(atoi(argv[1]));
    printf("Fib(%d) = %d\n", atoi(argv[1]), res);
}
int fib(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    return fib(x-1) + fib(x-2);
}
// clock_t inicio, fim;

// inicio = clock();//Start
// for (size_t i = 0; i < 10000000; i++);
// fim = clock();//End

// double d = ((double)(fim - inicio))/CLOCKS_PER_SEC;

// printf("Tempo: %f\n", d);