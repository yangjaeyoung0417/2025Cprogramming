#include<stdio.h>
int i,n;
int main(){ 
    scanf("%d" ,&n);
    for(i=2;i<n;i++){
     if(n%i!=0)
     continue;
    else
        break;
    
    }
    printf("%s",i==n?"prime":"composit");
    return 0;
}