#include <stdio.h>
int d[32];
int main(){
    int n;
    int i=0;
    scanf("%d", &n);
    do{
        d[i]=n%2;
        n/=2;
        i++;
    }while(n);
    while(i){
        i--;
        printf("%d ", d[i]);
    }
    printf("\n");
    return 0;
}