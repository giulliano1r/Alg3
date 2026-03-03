#include <stdio.h>
#define SIZE 5

int main(){
    int v[SIZE] = {10,20,30,40,50};
    int *p;

    for(p = v; p < v + SIZE; p++)
        printf("%d ", *p);

    return 0;
}
