#ifndef TP2_H_INCLUDED
#define TP2_H_INCLUDED
#include "Entree_Sortie.h"

/*
   _     _      _     _      _     _
  (c).-.(c)    (c).-.(c)    (c).-.(c)
   / ._. \      / ._. \      / ._. \
 __\( Y )/__  __\( Y )/__  __\( Y )/__
(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
   || T ||      || P ||      || 2 ||
 _.' `-' '._  _.' `-' '._  _.' `-' '._
(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
 `-'     `-'  `-'     `-'  `-'     `-'

        - Here We Define Our Functions !
*/

//=============================================
//               EXERCICE 1
//=============================================


void transfere(int T1[],int n,int V1[])
{
    int i,j,k;
    for(i=0,j=0,k=n-1;i<n;i++)
        if(i%2==1)
            {
                V1[k]=T1[i];
                k--;
            }
        else
            {
                V1[j]=T1[i];
                j++;
            }

}

int symetrique_tab(int n, int T2[])
{
    int i,test=1;

    for(i=0;i<n/2;i++)
        if(T2[i]!=T2[n-i-1])
            {
                test=0;
                break;
            }

    return test;
}

void inverser(int T3[],int n)
{
    int i,j,r=0;

    for(i=0,j=n-1;i<n/2+1,j>n/2-1;i++,j--)
        {
            r=T3[i];
            T3[i]=T3[j];
            T3[j]=r;
        }

}


void rotation(int t[],int n)
{
    int i,val;

    val=t[0];
    for(i=0;i<n-1;i++)
        t[i]=t[i+1];
    t[n-1]=val;
}

void rotation_k(int t[],int n)
{
    int i,k;
    k=saisir_k(n);
    for(i=0;i<k;i++)
        rotation(t,n);

}

void insertion(int T5[],int n)
{
    int i,val,pos;
    val=saisie_valeur();
    do
        {

            pos=saisir_position();
        }
    while(!(pos>-1&&pos<n));
    for(i=n;i>=pos;i--)
        T5[i+1]=T5[i];
    textcolor(GREEN);
    printf("\n\n Le contenu du tableau T5 apr%Cs l'insertion d'une valeur est :\t ",130);
    for(i=0;i<n+1;i++)
        printf("%d | ",T5[i]);

}

int existe(int T[],int n,int x)
{
    int ok=0,i;

    for(i=0;i<n;i++)
        if(T[i]==x)
        {
            ok=1;
            break;
        }
    return ok;
}


void presents(int T6[],int T7[],int n1,int n2)
{
    int V2[50],nv=0,i;
    for(i=0;i<n1;i++)
        if(existe(T7,n1,T6[i])==1 && existe(V2,nv,T6[i])==0)
            {
                V2[nv]=T6[i];
                nv++;
            }
    afficher1(V2,nv);
}

void absents(int T6[],int T7[],int n1,int n2)
{
    int V3[50],nv=0,i;
    for(i=0;i<n1;i++)
        if(existe(T7,n1,T6[i])==0 && existe(V3,nv,T6[i])==0)
            {
                V3[nv]=T6[i];
                nv++;
            }
    afficher1(V3,nv);
}

/*==== Exercice 2 ====*/

int minimum(int t[],int n)
{
    int i,val=t[0];

    for(i=0;i<n;i++)
        if(t[i]<val)
            val=t[i];
    return val;
}


void recherche_element_sup( int T[],int n,int val)
{
	int i,t[50],nu=0;

	for(i=0;i<n;i++)
		if(T[i]>val)
		{
			t[nu]=T[i];
			nu++;
		}
    if(nu==1)
    {
        printf("\n il y a seulement une valeur sup%crieure %c %d :\t %d",130,133,val,t[0]);
    }
    else
    {   if(nu>1)
        {

            printf("\n les valeur sup%crieur %c %d sont :\t",130,133,val);
            for(i=0;i<nu;i++)
            {
                printf("%d\t",t[i]);
            }
            printf("\n\n la valeur la plus petite des valeurs sup%crieur %c %d est :\t %d",130,133,val,minimum(t,nu));
        }
        else
        {

            printf("\n\n Il n y a pas de valeur sup%crieure %c %d dans le tableau T8. \n",130,133,val);
        }
    }
}


void occurence(int tab[],int taille)
{
	int i,occ=0,occfinal=0,number,j;

	for(i=0;i<taille;i++)
	{
		occ=0;
		for(j=0;j<taille;j++)
			if(tab[j]==tab[i])occ++;
		if(occ>occfinal)
		{
			number=tab[i];
			occfinal=occ;
		}
	}

	printf("\nle nombre le plus occurant est %d et son occurence est %d",number,occfinal);
}


 void plus_long_plateau(int T10[],int N)
 {
     int i,pos_deb=0,pos_fin,cp=1,long_max=1;
     for(i=0;i<N-1;i++)
        if(T10[i]-T10[i+1]==0)
        {
            cp++;
            if(cp>long_max)
            {
                long_max=cp;
                pos_deb=i-cp+1;
                pos_fin=i;
            }
        }
        else
            cp=1;
    if(long_max>1)
    {
        printf("\nLa longueur = %d, l",long_max);
        printf("\x27");
        printf("indice de d%cbut = %d et de fin = %d du plus long plateau de T10 \n",130,pos_deb+1,pos_fin+1);
    }
    else
        printf("\nIl n'existe pas du plateau");
};

long int inverse(long int y)
{
    long int inv=0;
    while(y)
    {
        inv=inv*10+y%10;
        y=y/10;
    }
    return inv;
}

int symetrique_val(long int x)
{
    int ok=0;
    if(inverse(x)==x)
        ok=1;
        return ok;
}

void sym_tab(long int T11[],int n)
{
    int i,nu=0;
    long int V[100];
    for(i=0;i<n;i++)
        if(symetrique_val(T11[i])==1)
        {
            V[nu]=T11[i];
            nu++;
        }

    if(nu==0)
        printf("\nil n a pas de nombres sym%ctriques dans le tableau.",130);
    else
    {
        if(nu==1)
         {
            printf("\nil y a seulement un nombre sym%ctrique:\t ",130);
            afficher2(V,nu);
         }
        else
         {
           printf("\les nombres sym%trique sont :\t");
            afficher2(V,nu);
         }
    }

}

 int fact_prem(int x)
 {
     int i=2,j=1,p=1;
     while(x!=1)
        if(x%i==0)
        {
            x=x/i;
            if(i!=j)
            {
                p=p*i;
                j=i;
            }
        }
        else
            i++;
     return p;
 }
 void affichie_hom(int t24[],int n24)
 {
     int i,cp=0;
    for(i=0;i<n24;i=i+2)
         if(fact_prem(t24[i])==fact_prem(t24[i+1]))
         {
             cp++;
             if(cp==1)
                printf("les couple homogene  sont \n");
            printf("%d et %d  sont homogene \n",t24[i],t24[i+1]);
         }
    if (cp==0)
        printf(" il n'existe pas des couple homogene \n");
 }




#endif // TP2_H_INCLUDED
