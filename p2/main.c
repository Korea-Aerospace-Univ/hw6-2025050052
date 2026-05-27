#include <stdio.h>

int main()
{
    int N;
    int array1[20]={};
    int array2[20]={};

    
    scanf("%d\n",&N);
    for(int i=0;i<N;i++) {
        scanf("%d ",&array1[i]);
    }

    
    for(int i=0;i<N;i++) {
        scanf("%d ",&array2[i]);
    }

    for(int i=0;i<N;i++) {
        printf(" %d",array1[i]+array2[N-1-i]);
    }
    
}
