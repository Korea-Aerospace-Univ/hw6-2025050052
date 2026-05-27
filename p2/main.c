#include <stdio.h>

int main()
{
    int N;
    int array1[20] = {};
    int array2[20] = {};

    int *p1 = array1;
    int *p2 = array2;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", p1 + i); 
    }

    for(int i = 0; i < N; i++) {
        scanf("%d", p2 + i); 
    }

    for(int i = 0; i < N; i++) {
        printf(" %d", *(p1 + i) + *(p2 + N - 1 - i));
    }
    
    return 0;
}
