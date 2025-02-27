#include <stdio.h>

int main()

{
	int a=0;
	int b=0;
	printf("Kérem az egyik oldalt: \n");
	scanf("%d",&a);
	printf("Kérem a másik oldalt: \n");
	scanf("%d",&b);
	
	printf("A kerület: %d; A terület: %d;\n",a+a+b+b,a*b);

	return 0;


}

