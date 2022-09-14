#include <stdio.h>		//including header
#include "add.h"		//including header file from same folder
#include "sub.h"		//including header file from same folder
#include "mul.h"		//including header file from same folder
#include "div.h"		//including header file from same folder
int main()
{
	setbuf(stdout,NULL);
	int a,b;		//declaration of two variable
	printf("enter the number:");		//getting the value from user
	scanf("%d %d",&a,&b);				//reading the given input
	add(a,b);							//function call
	sub(a,b);							//function call
	mul(a,b);							//function call
	div(a,b);
	return 0;//function call
}
