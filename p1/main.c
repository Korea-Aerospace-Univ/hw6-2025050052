#include <stdio.h>

int main()
{
    char array[10]={};
    int freq=0, freqch=0;

    int *pcount=count;
    char *parray=array;
    int freq=0;
    
    for(char *p = array;p < array+10;p++) {
        scanf("%c", p);
    }
    for(char *p = array;p < array+10;p++) {
        for(char *q = array;q < array+10;q++){
            if(p == q) {
                freq++;
            }
        }
    }

    printf("%c %d",'a'+freqch,freq);
}
