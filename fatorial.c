#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, entrada, fatorial = 1;
	
	printf("\n Digite um valor: ");
  scanf("%d", &entrada);
		
	for (i = 1; i <= entrada; i++)
  {
		fatorial = fatorial * i;	
  }
  
  //resultado
	printf("\n Fatorial: %d", fatorial);	
	return 0;

}
