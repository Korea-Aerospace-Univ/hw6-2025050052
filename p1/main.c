#include <stdio.h>

int main()
{
    char array[10]={};
    int count[26]={};
    int freq=0, freqch=0;

    int *pcount=count;
    char *parray=array;
    
    for(int i=0;i<10;i++) {
        scanf("%c", parray+i);
    }
    for(int i=0;i<10;i++) {
        *(pcount+*(parray+i)-'a') = *(pcount+*(parray+i)-'a') + 1;
    }

    freq=*pcount;
    
    for(int i=1;i<26;i++) {
        if(*(pcount+i)>freq){
            freq=*(pcount+i);
            freqch=i;
        }
    }

    printf("%c %d",'a'+freqch,freq);
}
