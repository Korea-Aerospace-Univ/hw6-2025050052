#include <stdio.h>

int main()
{
    int N;
    int array1[20] = {};
    int array2[20] = {};

    int *p1 = array1;
    int *p2 = array2;

    scanf("%d", &N);

    for(int *p = array1; p < array1 + N; p++) {
        scanf("%d", p);
    }

    for(int *q = array2; q < array2 + N; q++) {
        scanf("%d", q);
    }

    for(int i = 0; i < N; i++) {
        printf(" %d", *(p1 + i) + *(p2 + N - 1 - i));
    }
    
    return 0;
}
