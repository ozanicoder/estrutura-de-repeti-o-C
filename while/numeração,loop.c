#include <stdio.h>
int main (){
	int n;
	printf("qual o teu numero preferido?");
	 scanf("%d",&n);
	 while(n>-1){
		 printf("%d\n",n);
		 n=n++;
	 }
}