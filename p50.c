#include<stdio.h>
long long n;
int main(){
	scanf("%lld",&n);
	if(n>0) printf("1\n");
	else {
		if(n==0) printf("0\n");
		else printf("-1\n");
	}
}
