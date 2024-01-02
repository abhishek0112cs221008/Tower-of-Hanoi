#include<stdio.h>

void towerOfHanoi(int n,char src,char helper,char des){
    if(n==1){
        printf("\nTransfer disk %d from %c to %c.",n,src,des);
        return;
    }
    towerOfHanoi(n-1,src,des,helper);
    printf("\nTransfer disk %d from %c to %c.",n,src,des);
    towerOfHanoi(n-1,helper,src,des);
}

int main()
{
    int n=3;
    towerOfHanoi(n,'A','B','C');
    return 0;
}