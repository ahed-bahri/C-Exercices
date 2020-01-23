#ifndef ENTREE_SORTIE_H_INCLUDED
#define ENTREE_SORTIE_H_INCLUDED
#include <windows.h>
/*
   _     _      _     _      _     _
  (c).-.(c)    (c).-.(c)    (c).-.(c)
   / ._. \      / ._. \      / ._. \
 __\( Y )/__  __\( Y )/__  __\( Y )/__
(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
   || E ||      || - ||      || S ||
 _.' `-' '._  _.' `-' '._  _.' `-' '._
(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
 `-'     `-'  `-'     `-'  `-'     `-'

        - Our Most used Functions !
*/

//=============================================================================
//                                  Saisie
//=============================================================================


long int saisie(){
long int n;
do
    {
    printf(" Donner un entier SVP : ");
    scanf("%ld",&n);
    }
while(!(n>0));
return n;
}

/*====Exercice 3 "Impair" ====*/

void affiche_parite(long nb)
{

    if (tot_impair(nb))
        printf("\n%d est Totalement impair \n\n",nb);
    else
        printf("\n%d n'est pas Totalement impair \n\n",nb);
}

            /* TP2 */

/*====Exercice 1 " Saisir la Taille  " ====*/

int saisir_taille1()
{
    int n;

    do
    {
        printf("Donner la taille du tableau:  ");
        scanf("%d",&n);
    }while (!(n>1&&n<=50));

    return n;

}

int SAISIE2_TAILLE()
{
    int n;

    do
    {
        printf("saisie la taille du tableau:\t");
        scanf("%d",&n);
    }while (!(n>=5&&n<=50));

    return n;

}

int saisir_k(int l)
{
    int n;

    do
    {
        gotoxy(20,18);
        printf("\n  Donner le nombre de rotation SVP : ? ");
        scanf("%d",&n);
    }while (!(n>0&&n<l));

    return n;

}

int saisie_valeur()
{
    int val;
    printf("Entrer la valeur %c ajouter:\t",133);
    scanf("%d",&val);
    return val;
}


int SAISIE_VALEUR2()
{
    int val;
    printf("Entrer la valeur:\t");
    scanf("%d",&val);
    return val;
}

int SAISIE_VALEUR3()
{
    int val;
    printf("Entrer la valeur %c rechercher:\t",133);
    scanf("%d",&val);
    return val;
}

int saisir_position()
{
    int position;
    printf("        Entrer une position:\t");
    scanf("%d",&position);
    return position;
}
//=============================================================================
//                               Remplissage
//=============================================================================

/*====Exercice 1 " Remplissage 1 " ====*/

void remplir1(int t[],int n )
{
    int i,l;

    for(i=0,l=12;i<n;i++,l=l+2)
    {
        printf("Element[%d] : ",i);
        scanf("%d",&t[i]);
    }
}

/*====Exercice 1 " Remplissage 2 " ====*/

void remplir2(int t[],int n )
{
    int i,l;

    for(i=0,l=12;i<n;i++,l=l+2)
    {
        do
        {
            printf("Element[%d] : ",i);
            scanf("%d",&t[i]);
        }while(!(t[i]>=0));

    }
}
/*====Exercice 1 " Remplissage 3 " ====*/

void remplir3(int t[],int n )
{
    int i,l;

    for(i=0,l=12;i<n;i++,l=l+2)
    {
        do
        {
            printf("Element[%d] : ",i);
            scanf("%d",&t[i]);
        }while(!(t[i]>=0));

    }
}

void REMPLIR_trie(int t[],int n )
{
    int i=0,l=10;
    printf("Element[%d] : ",i);
    scanf("%d",&t[i]);
    i++;
    l=l+2;
    do {
        printf("Element[%d] : ",i);
        scanf("%d",&t[i]);

        }
    while(!(t[i]>t[i-1]));

    l=l+2;
    for(i=2;i<n;i++)
    {
        do
        {

            printf("Element[%d] : ",i);
            scanf("%d",&t[i]);

        } while(!(t[i]>t[i-1]));
        l=l+2;

    }

}

//=============================================================================
//                                  Affichage
//=============================================================================

/*====Exercice 1 " L'affichage " ====*/

void afficher1(int t[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d | ", t[i]);

}

void afficher2(long int t[],int n )
{
    int i;

    for(i=0;i<n;i++)
        printf("%ld | ", t[i]);

}

/*====Exercice 1 "Symétrique" ====*/
void affiche(long int n){

long int x, ni;

x=x*(n%10);
ni=inversion(n);
if (x==ni && n==ni)
    printf("    %ld est Sym%ctrique et propre \n\n",n,130);
else
    if (x==ni)
      printf("  %ld est Propre\n\n",n);
else
    if (n==ni)
    printf("\n  %ld est Sym%ctrique \n\n",n,130);
else
    printf("    %ld ni Sym%ctrique ni propre \n\n",n,130);

}

//=============================================================================
//                                  Fichier
//=============================================================================

 /****Fonction enregistrement****/
void enregistrement(int t[],int n,char * nomFichier)
{
    int i;
    FILE *fp;
    fp=fopen(nomFichier,"w");
    fprintf(fp,"%d\n",n); // sauvegarder la taille de tablau
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%d ",t[i]);
    }
    fclose(fp);
    printf ("\n Enregistrement du tableau dans le fichier %s \n\n",nomFichier);
}

 /****Fonction recuperation****/
int recuperation (int t[], char *nomFichier)
{
    int nbElement=0 ,i;
    FILE *fp;
    int x;
    fp=fopen(nomFichier,"r");
    if(fp!=NULL)
    {

        fscanf(fp,"%d\n",&nbElement);
        if(nbElement)
        {
            for(i=1;i<=nbElement;i++)
            {
                fscanf(fp,"%d",&x);
                t[i-1]=x;
            }
        }
    }
    else
        printf("\n Fichier vide \n");
    return nbElement;
}






#endif // ENTREE_SORTIE_H_INCLUDED
