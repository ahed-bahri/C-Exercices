#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED
#include "Entree_Sortie.h"

/*
   _     _      _     _      _     _
  (c).-.(c)    (c).-.(c)    (c).-.(c)
   / ._. \      / ._. \      / ._. \
 __\( Y )/__  __\( Y )/__  __\( Y )/__
(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
   || T ||      || P ||      || 1 ||
 _.' `-' '._  _.' `-' '._  _.' `-' '._
(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
 `-'     `-'  `-'     `-'  `-'     `-'

        - Here We Define Our Functions !
*/

/*====Exercice 1 "Invereser Nombre" ====*/

int inversion(long int x)
{
long int ninv=0;

while(x!=0)
{
    ninv=ninv*10;
    ninv=ninv+x%10;
    x=x/10;
}
return ninv;
}

/*====Exercice 2 "Premier inférieurs à Mon nombre" ====*/

void affiche_premier(int n)
{
    int i ;
    printf("Les nombres premiers inf%crieurs a %d sont : \n\n",130,n);
    for(i=2;i<=n;i++)
    if (premier(i)==1)
        printf("%d\t ",i);
        printf("\n\n");
}

/*====Exercice 3 "Impair" ====*/

int tot_impair(long nb)
{
    int p=1,b=1;
    while(nb)
    {
        if (((nb%10)%2==0 && p%2==1) ||((nb%10)%2==1 && p%2==0))
     {
        b=0;
        break;
     }

    p++;
    nb=nb/10;
    }

return b;

}

/*====Exercice 4 "Facteur Premier" ====*/

void facteurs_premiers(int x)
{

    int p=1,i=2,cp=0;
    while(x!=1)
        if (x%i==0)
    {
        x=x/i;
        cp++;
        if(cp==1)
            printf("%d",i);
        else
            printf(" * %d ",i);
    }
    else
        i++;
}

/*====Exercice 5 "Carré" ====*/

long int carre(long int N)
{
    long int S;
    int i;
    for (S=0,i=1;i<=2*N;i=i+2)
        S+=i;

    return S;
}

/*====Exercice 5 "MultiParfait" ====*/

void multiparfait(long int N)
{
    long int S=0,i;

    for(S=1+N,i=2;i<=N/2;i++)
        if (N%i==0)
            S=S+i;
    if (S%N==0)
        printf("%ld est un nombre Multiparfait \n\n",N);
    else
        printf("%ld n'est pas un nombre Multiparfait \n\n",N);
}


/*====Exercice 5 "Divisible par 13" ====*/

void divisible_13(long int N)
{
    int u,ok=0;
    long int d,X;
    X=N;

    do
    {
        u=N%10;
        d=N/10;
        N=d+4*u;
        if (N==13||N==26||N==39)
            {
                ok=1;
                break;
            }
    }while(N>=10);

    if (ok==1)
        printf("\n %ld est divisible par 13 ",X);
    if (ok!=1)
        printf("\n %ld n'est pas divisible par 13 ",X);
}


/*====Exercice 6 "Nombre Premier" ====*/

int premier(long int n)
{
    int i,test;

    if (n==1)
        test=0;
    else
        for(test=1,i=2;i<=2;i++)
            if (n%i==0)
                {
                    test=0;
                    break;
                }

    return test;
}

/*====Exercice 6 "Super Premier" ====*/

int super_premier(long int n)
{
        int test=1;

    while(n)
        {
            if (premier(n)==0)
                {
                    test=0;
                    break;
                }
        n=n/10;
        }
    return test;

}

/*====Exercice 6 "Tester Super Premier" ====*/

void tester_super_premier(long int n)
{
int y;
    if (premier(n))
        {
            y=inversion(n);
            if(super_premier(n)&&premier(y))
                printf("\n %ld est SUPER PREMIER et PREMIER dans les deux sens",n);
            else
                if (premier(y))
                    printf("\n %ld est PREMIER dans les deux sens",n);
            else
                printf("\n %ld est NI super PREMIER NI PREMIER dans les deux sens ",n);
        }
    else
        printf("\n %ld n'est pas PREMIER",n);
}


#endif // TP1_H_INCLUDED
