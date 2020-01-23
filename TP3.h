#ifndef TP3_H_INCLUDED
#define TP3_H_INCLUDED

/*
   _     _      _     _      _     _
  (c).-.(c)    (c).-.(c)    (c).-.(c)
   / ._. \      / ._. \      / ._. \
 __\( Y )/__  __\( Y )/__  __\( Y )/__
(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
   || T ||      || P ||      || 3 ||
 _.' `-' '._  _.' `-' '._  _.' `-' '._
(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
 `-'     `-'  `-'     `-'  `-'     `-'

        - Here We Define Our Functions !
*/

void Tri_selection(int t[],int n)
{
    int i,j,posmin,aux;
    for(i=0;i<n-1;i++)
    {
        for(posmin=i,j=i+1;j<n;j++)
        {
            if(t[j]<t[posmin])
                posmin=j;
        }
        if(posmin!=i)
        {
            aux=t[i];
            t[i]=t[posmin];
            t[posmin]=aux;
        }
    }

}
void tri_bulles(int t[],int n)
{
    int i,ok,aux;
    do
    {
        ok=0;
        for(i=0;i<n-1;i++)
        {
            if(t[i]>t[i+1])
            {
                aux=t[i];
                t[i]=t[i+1];
                t[i+1]=aux;
                ok=1;
            }
        }
        n--;
    }while(n&&ok);
}
void tri_insertion(int t[],int n)
{
    int i,j,aux;
    for(i=1;i<n;i++)
    {
        aux=t[i];
        j=i;
        while(aux<t[j-1] && j>0)
        {
            t[j]=t[j-1];
            j--;
        }
        t[j]=aux;
    }
}

int rech_seq(int t[],int n,int valeur)
{
    int i,pos=-1;
    for(i=0;i<n;i++)
    {
        if(t[i]==valeur)
        {
            pos=i;
            break;
        }
    }
    return pos;
}
int rech_dich(int t[],int n,int valeur)
{
    int pos=-1,inf=0,mil,sup=n;
    while(inf<=sup)
    {
        mil=(inf+sup)/2;
        if(t[mil]==valeur)
        {
            pos=mil;
            break;
        }
        else
            if(valeur<t[mil])
                sup=mil-1;
            else
                inf=mil+1;
    }
    return pos;
}



#endif // TP3_H_INCLUDED
