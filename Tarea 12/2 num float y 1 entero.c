//Realizar un programa que pida 3 números  (dos de tipo flotante y otro de tipo entero)   por medio del teclado e  imprimirlos.
//En el mismo programa hacer la comparación de estos números  y saber cuál es mayor, menor o si son iguales.

#include<stdio.h>
int main ()
{
	int one;
	float two, tree;
	
	printf("Dame un numero positivo entero\n");
	scanf("%d",&one);
	printf("Dame un numero decimal (Dos decimales)\n");
	scanf("%f",&two);
	printf("Dame otro numero decimal (Dos decimales)\n");
	scanf("%f",&tree);
	printf("\n%d es el primero\n%.2f es el segundo\n%.2f es el tercero\n\n\n",one,two,tree);
	if (one>two&&one>tree)
		printf("%d es el mayor",one);
	if (two>one&&two>tree)
		printf("%.2f es el mayor",two);
	if (tree>one&&tree>two)
		printf("%.2f es el mayor",tree);
	if (two==one or tree==one or tree==two or two==tree or one==two or one==tree)
		printf("Error");
}
