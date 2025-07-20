# include <stdio.h>
# include <stdlib.h>
# include <time.h>
/*
 * Stdlib para os aleatorios
 * Time para o calculo de hora
 */

int aleatorio (int, int);

int main ()
{
    srand(time(NULL)-78); //start para a funcao de rand, pega o momento atual e subtrai 78 por diversao
    int basenum, maxnum, attempt, attemptCounter = 0;
    /* Variaveis
     *  - basenum: Menor numero do intervalo
     *  - maxnum: Maior numero do intervalo
     *  - attempt
     */
    printf ("Bem vindo ao jogo da advinhacao! \n\a");
    printf ("Insira o menor numero do intervalo:\t");
    scanf ("%d", &basenum);
    printf ("Insira o maior numero do intervalo:\t");
    scanf ("%d", &maxnum);
    int result = aleatorio (basenum, maxnum);
    attempt = result + 78;
    for (;result != attempt;)
    {
        attemptCounter ++;
        printf ("Insira um numero: \t");
        scanf ("%d", &attempt);
        printf("\a");
        if (result == attempt)
        {
            printf ("Acertaste apos %d tentativa(s)\n\a", attemptCounter);
            return attemptCounter;
        }
        else
        {
            if (result < attempt)
            {
            printf ("Erraste para mais\n");
            }
        else
            {
            printf ("Erraste para menos\n");
            }
        }
    }
}

int aleatorio (int basenum, int maxnum)
{
    return ((rand() % (maxnum - basenum)) + basenum);
}

