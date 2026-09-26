#include <stdio.h>
int main (){
	int n, h;
	printf("qual o teu numero preferido?");
	 scanf("%d",&n);
	 h=n*10;
	 do{
		printf("%d\n",n);
		n=n+5;
	 }
	 while(n<h);
}
