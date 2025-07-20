# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int primos (int);

int main () 
{
	int entrada = 0;
	int giro = 0;
	int64_t fatorial = 0;
	printf ("Insira um numero positivo e inteiro: \t");
	scanf ("%d", &entrada);
	if (entrada < 0)
	{
		printf ("\n Voce errou! \n\a");
		return 0;
	}
	printf ("\n %d este e o numero digitado \n", entrada);

	// calculo da tabuada ate o 10
	for (giro; giro<11; giro++)
	{
		printf ("\n %d x %d = %d", entrada , giro , giro * entrada);

	}

	// calculo do fatorial
	printf ("\n\n %d Fatorial e: ", entrada);
	fatorial = entrada;
	giro = entrada - 1;
	while (giro>1)
	{
		fatorial = fatorial * giro;
		giro = giro - 1;
	}
	printf (" %ld", fatorial);

	//calculo dos primos ate o numero
	printf ("\n Numeros primos: \n");
	for (giro = entrada; giro != 1 ; giro--)
	{
		if (primos(giro) == 0)
		{
			printf ("%d\n", giro);
		}
	}

	printf ("\n hello world \n");
	return entrada;
}

/*
 * Funcao que testa numeros primos, onde:
 * return 1 -> Nao primo
 * return 0 -> Primo
 */
int primos (int teste)
{
		if (teste == 2)
		{
			return 0;
		}
		//testa se o numero e par
		if (teste % 2 == 0)
		{
			return 1;
		}
		int incr = 3;
		for	(;incr < teste; incr ++)
		{
			if (teste % incr == 0)
			{
				return 1;
			}
		}
		return 0;
}
