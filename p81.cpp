// g++ p81.cpp -o p81.exe
#include<stdio.h>
int d[7]; 
int main(){
    printf("num: ");
    int n,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        d[t]=d[t]+1;
    }
    for(int i=1;i<=6;i++)
    
        printf("%d ",d[i]);
    printf("\n");
        return 0;
}