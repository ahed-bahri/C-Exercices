#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "myconio.h"
#include "TP1.h"
#include "TP2.h"
#include "TP3.h"

/*
   _     _      _     _      _     _      _     _
  (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)
   / ._. \      / ._. \      / ._. \      / ._. \
 __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__
(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
   || M ||      || E ||      || N ||      || U ||
 _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._
(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
 `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'

        - Our Menu to collect our Functions !
*/

//=============================================================================
//                                  TP 1
//=============================================================================



//====================
//  EXERCICE 1 TP 1
//====================


        void ex1_tp1()
        {
            textcolor(BLACK);
           // movetext(int left, int top, int right, int bottom, int destleft, int desttop)
            printf("                              Un programme qui permet d'inserer un entier >9 \n");
            printf("             Puis Verifier s'il est Sym%ctrique || Sym%ctrique et propre || Non Sym%ctrique et Non propre.\n\n",130,130,130);
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            textcolor(GREEN);
            affiche(n);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");

        }

//======================
//   Exercice 2 TP 1
//======================

        void ex2_tp1()
        {

            textcolor(BLACK);
            printf("                 \t Un programme qui permet d'inserer un entier >10 \n");
            printf("                  Puis Afficher Tout les Nombres premiers qui lui sont inf%crieur.\n\n",130);
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n\n");
            textcolor(GREEN);
            affiche_premier(n);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");

        }

//======================
//   Exercice 3 TP 1
//======================

        void ex3_tp1()
        {

            textcolor(BLACK);
            printf("                \t\t Un programme qui permet d'inserer un entier >10 \n");
            printf("    \t\t Puis V%crifier et Afficher si L'entier Ins%crer est Totalement Impair || NON.\n\n",130,130);
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n");
            textcolor(GREEN);
            affiche_parite(n);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");
        }
//======================
//   Exercice 4 TP 1
//======================

        void ex4_tp1()
        {
            textcolor(BLACK);
            printf("                         Un programme qui permet d'inserer un entier >1 \n");
            printf("                      Decomposer & Afficher ce nombre en Facteurs Premiers.\n\n");
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n");
            textcolor(GREEN);
            printf("La Decomposition de %ld en Facteurs premiers = \t",n);
            facteurs_premiers(n);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");
        };

//======================
//   Exercice 5.1 TP 1
//======================

        void ex5_1_tp1()
        {
            textcolor(BLACK);
            printf("            Un programme qui d%ctermine et affiche le carr%c de Entier Inserer selon ce Principe : \n",130,130);
            printf("               Le carr%c de ce entier est %cgal a la somme des n premiers entiers impairs.\n\n",130,130);
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n");
            textcolor(GREEN);
            printf(" Le caree de %d est :   %ld ",n,carre(n));
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");
        }

//======================
//   Exercice 5.2 TP 1
//======================

        void ex5_2_tp1()
        {
            textcolor(BLACK);
            printf("          C'est Un programme qui sert a Tester Si L'entier Inserer MULTIPARFAIT || Non Puis L'afficher .\n\n");
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n ");
            textcolor(GREEN);
            multiparfait(n);
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");
        }


//======================
//   Exercice 5.3 TP 1
//======================

        void ex5_3_tp1()
        {
            textcolor(BLACK);
            printf("            C'est Un programme qui sert a Tester La DIVISIBILIT%c de L'entier sur 13 .\n\n",130);
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n ");
            textcolor(GREEN);
            divisible_13(n);
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");
        }

//======================
//   Exercice 6 TP 1
//======================

        void ex6_tp1()
        {
            textcolor(BLACK);
            printf("        C'est Un programme qui permet de V%crifier Si c'est un Nombre Premier || un Nombre Super Premier.\n\n",130);
            textcolor(LIGHTRED);
                /*_getch();
                 movetext(1,1,30,1,1,20);*/
            long int n;
            n=saisie();
            printf("\n ");
            textcolor(GREEN);
            tester_super_premier(n);
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t");
        }

//=============================================================================
//                                  TP 2
//=============================================================================

                                /* Pair & Impair */
 void ex1_1_tp2()
        {
            textcolor(BLACK);
            printf("        Permet de mettre les rang impair dans un Nouveau Tableau en ordre Inverse.\n\n");
            textcolor(BLACK);
            printf("            Et de ranger les %cl%cments de rang Pair dans le meme ordre.\n\n\n",130,130);
            int taille1;
            int T1[100];
            int V1[100];
            textcolor(RED);
            taille1=saisir_taille1();
            printf("\n");
            remplir1(T1,taille1);
            transfere(T1,taille1,V1);
            textcolor(BLUE);
            printf("\n\n Les %cl%cments du rang impair sont rang%cs dans V1 en ordre inverse.\n",130,130,130);
            printf("\n\t\t");
            textcolor(GREEN);
            afficher1(T1,taille1);
            printf("\t\t\t\t");
            textcolor(BLUE);
            printf("\n\n Les %cl%cments du rang pair de T1 sont rang%cs dans V1 dans le meme ordre.\n",130,130,130);
            printf("\n\t\t");
            textcolor(GREEN);
            afficher1(V1,taille1);
            textcolor(LIGHTBLUE);
            printf("\t\t\t\t");
            printf("\n\n");

        };


    void remplissageTab1()
        {
            textcolor(RED);
            printf("                Un programme qui permet d'inserer un entier >1 \n");
            textcolor(RED);
            printf("             Decomposer & Afficher ce nombre en Facteurs Premiers.\n\n");
            textcolor(LIGHTRED);
            long int taille1;
            int T1[100];
            taille1=saisir_taille1();
            remplir1(T1,taille1);
            printf("\n\n\n\t\t\t");
            enregistrement(T1,taille1,"tab1.txt");

        };

    void recuperTab1()
        {
            int T1[100];
            int V1[100];
            int taille1=0;
            taille1=recuperation(T1,"tab1.txt");
            textcolor(BLACK);
            printf("\t\t\t\t*** Le contenu du tableau T1 *** \n\n");
            printf("\t\t\t\t\t\t");
            afficher1(T1,taille1);
            printf("\n");
            transfere(T1,taille1,V1);
            textcolor(RED);
            printf("\n                        Les %cl%cments du rang impair sont rang%cs dans V1 en ordre inverse.",130,130,130);
            printf("\n                    && Les %cl%cments du rang pair de T1 sont rang%cs dans V1 dans le meme ordre.\n\n",130,130,130);
            printf("\t\t\t\t\t\t");
            afficher1(V1,taille1);
            printf("\n\n\n\t\t\t");
        }


                                /* Symétrique */

    void ex1_2_tp2()

    {
            textcolor(BLACK);
            printf("              Permet de Tester si Le Tableau est Symetrique || Non.\n\n");
            int taille2;
            int T2[100];
            int test;
            textcolor(RED);
            taille2=saisir_taille1();
            printf("\n");
            textcolor(RED);
            remplir1(T2,taille2);
            printf("\n\n\t");
            test=symetrique_tab(taille2,T2);
                if(test)
                    {
                    textcolor(GREEN);
                    printf(" - Le tableau Est sym%ctrique - ",130);

                    }
                else
                    {
                     textcolor(RED);
                     printf(" - Le tableau n'est sym%ctrique - ",130);
                    }
            textcolor(LIGHTBLUE);
            printf("\t\t\t\t");
            printf("\n\n");

    }


    void remplissageTab2()
        {
            int taille2;
            int T2[100];
            textcolor(RED);
            printf("            Remplissage de Tableau T2 \n\n");
            textcolor(BLACK);
            taille2=saisir_taille1();
            printf("\n");
            remplir1(T2,taille2);
            textcolor(GREEN);
            printf("\n\n\t\t\t");
            textcolor(BLUE);
            enregistrement(T2,taille2,"tab2.txt");
            textcolor(LIGHTBLUE);


};

    void recuperTab2()

        {
            textcolor(BLACK);
            long int taille2;
            int T2[100];
            int test;
            taille2=recuperation(T2,"tab2.txt");
             printf("Le contenu du tableau T2 associer de Resultat de tester Symetrique || Non:\n\n");
             afficher1(T2,taille2);
             test=symetrique_tab(taille2,T2);
                if(test)
                    {
                      textcolor(GREEN);
                      printf(" - Le tableau Est sym%ctrique - ",130);

                    }
                else
                {
                     textcolor(RED);
                     printf(" - Le tableau n'est sym%ctrique - ",130);
                }
            textcolor(LIGHTBLUE);
            printf("\t\t\t\t");
            printf("\n\n\n\n\n");

        }
                                /* Inverser */

    void ex1_3_tp2()

    {
            textcolor(BLACK);
            printf("      \t\t\t  Permet d'inverser les %cl%ments de tableau T3.\n\n",130,130);
            int taille3;
            int T3[100];
            textcolor(RED);
            taille3=saisir_taille1();
            printf("\n");
            remplir1(T3,taille3);
            printf("\n\n\t");
            inverser(T3,taille3);
            textcolor(GREEN);
            printf("Tableau Inverser : \t");
            afficher1(T3,taille3);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\n");

    }


 void remplissageTab3()
        {
            int taille3;
            int T3[100];
            textcolor(BLACK);
            printf("            Remplissage de Tableau T3 \n\n");
            textcolor(RED);
            taille3=saisir_taille1();
            printf("\n");
            remplir1(T3,taille3);
            textcolor(BLACK);
            printf("\n\n\t\t\t");
            enregistrement(T3,taille3,"tab3.txt");
            textcolor(LIGHTBLUE);

        }

    void recuperTab3()
        {
            textcolor(BLACK);
            long int taille3;
            int T3[100];
            taille3=recuperation(T3,"tab3.txt");
            printf(" Le contenu du tableau T3 est : \n\n");
            textcolor(RED);
            afficher1(T3,taille3);
            inverser(T3,taille3);
            printf("\n\n");
            textcolor(BLACK);
            printf(" Le contenu du tableau T3 dont les elements sont rang%cs Dans L'ordre inverse \n\n",130);
            textcolor(RED);
            afficher1(T3,taille3);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }
                                /* Rotation */

    void ex1_4_tp2()
        {

            textcolor(BLACK);
            printf("      \t\t\t\t  La Rotation Circulaire de tableau T4.\n\n",130,130);
            int taille4;
            int T4[100];
            textcolor(RED);
            taille4=saisir_taille1();
            printf("\n");
            remplir1(T4,taille4);
            textcolor(BROWN);
            rotation_k(T4,taille4);
            printf("\n");
            textcolor(BLUE);
            printf("  Tableau Apres la Rotation : \t");
            afficher1(T4,taille4);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\n");

       }

 void remplissageTab4()
        {
            int taille4;
            int T4[100];
            textcolor(BLACK);
            printf("            Remplissage de Tableau T4 \n\n");
            textcolor(RED);
            taille4=saisir_taille1();
            printf("\n");
            remplir1(T4,taille4);
            textcolor(BLACK);
            printf("\n\t\t\t");
            enregistrement(T4,taille4,"tab4.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab4()
        {
            textcolor(BLACK);
            long int taille4;
            int T4[100];
            taille4=recuperation(T4,"tab4.txt");
            printf(" Le contenu du tableau T4 est : \n\n");
            textcolor(RED);
            afficher1(T4,taille4);
            inverser(T4,taille4);
            printf("\n\n");
            textcolor(BLACK);
            printf(" Le contenu du tableau T4 Apr%cs la Rotation \n\n",130);
            textcolor(RED);
            afficher1(T4,taille4);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }

                                /*Insertion*/
    void ex1_5_tp2()

        {
            textcolor(BLACK);
            printf("      \t\t Ce Programme sert a Inserer un valeur a une position demander.\n\n");
            int taille5;
            int T5[100];
            textcolor(RED);
            taille5=saisir_taille1();
            printf("\n");
            remplir1(T5,taille5);
            printf("\n\n\t");
            textcolor(BLUE);
            insertion(T5,taille5);
            printf("\n\n\t");
            textcolor(LIGHTBLUE);
            printf("\t\t\t\t");
            printf("\n\n");

        }

     void remplissageTab5()
        {
            int taille5;
            int T5[100];
            textcolor(BLACK);
            printf("            Remplissage de Tableau T5 \n\n");
            textcolor(RED);
            taille5=saisir_taille1();
            printf("\n");
            remplir1(T5,taille5);
            textcolor(BLACK);
            printf("\n\t\t\t");
            enregistrement(T5,taille5,"tab5.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab5()
        {
            textcolor(BLACK);
            long int taille5;
            int T5[100];
            taille5=recuperation(T5,"tab5.txt");
            printf(" Le contenu du tableau T5 est : \n\n");
            textcolor(RED);
            afficher1(T5,taille5);
            insertion(T5,taille5);
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }

                                /* Presents */

    void ex1_6_tp2()

        {

            textcolor(BLACK);
            printf("              \t\t Ce Programme Permet de construire un tableau V2 Comportant les entiers presents dans T6 & T7 .\n\n\n");
            int taille6;
            int taille7;
            int T6[100];
            int T7[100];
            textcolor(RED);
            taille6=saisir_taille1();
            printf("\n");
            remplir1(T6,taille6);
            printf("\n\n\t");
            textcolor(GREEN);
            printf("Tableau T6 \t");
            afficher1(T6,taille6);
            printf("\n\n");
            textcolor(RED);
            taille7=saisir_taille1();
            printf("\n");
            remplir1(T7,taille7);
            printf("\n\n\t");
            textcolor(GREEN);
            printf("Tableau T7 \t");
            afficher1(T7,taille7);
            printf("\n\n");
            textcolor(BLACK);
            printf("les entiers presents dans T6 & T7 -Sans Repetition- Sont : \t");
            presents(T6,T7,taille6,taille7);
            printf("\n\n\t");
            textcolor(LIGHTBLUE);
            printf("\t\t\t\t");
            printf("\n\n");

        }


     void remplissageTab6()
        {
            int taille6;
            int taille7;
            int T6[100];
            int T7[100];
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T6 ***  \n\n");
            textcolor(RED);
            taille6=saisir_taille1();
            printf("\n");
            remplir1(T6,taille6);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T6,taille6,"tab6.txt");

            textcolor(BLACK);
            printf("            *** Remplissage de Tableau T7 ***  \n\n");
            textcolor(RED);
            taille7=saisir_taille1();
            printf("\n");
            remplir1(T7,taille7);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T7,taille7,"tab7.txt");

            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab6()
        {
            textcolor(BLACK);
            long int taille6;
            int T6[100];
            long int taille7;
            int T7[100];
            taille6=recuperation(T6,"tab6.txt");
            taille7=recuperation(T7,"tab7.txt");
            printf(" Le contenu du tableau T6 est : \t");
            textcolor(RED);
            afficher1(T6,taille6);
            printf("\n\n");
            textcolor(BLACK);
            printf(" Le contenu du tableau T7 est : \t");
            textcolor(RED);
            afficher1(T7,taille7);
            printf("\n\n");
            textcolor(BLACK);
            printf(" Le contenu du tableau qui contient T7 & T7 Sans repetition  est : \t");
            textcolor(RED);
            presents(T6,T7,taille6,taille7);
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }
                           /* Absent */

    void ex1_7_tp2()

        {
            textcolor(BLACK);
            printf("        Ce Programme Permet de construire un tableau V2 Comportant les entiers\n");
            printf("                Presents dans T6 mais Absente dans T7 .\n\n\n");
            long int taille8;
            long int taille9;
            int T8[100];
            int T9[100];
            textcolor(RED);
            taille8=saisir_taille1();
            printf("\n");
            remplir1(T8,taille8);
            printf("\n\t");
            textcolor(GREEN);
            printf("        Tableau T8 \t");
            afficher1(T8,taille8);
            printf("\n\n");
            textcolor(RED);
            taille9=saisir_taille1();
            printf("\n");
            remplir1(T9,taille9);
            printf("\n\t");
            textcolor(GREEN);
            printf("        Tableau T9 \t");
            afficher1(T9,taille9);
            printf("\n\n");
            textcolor(BLACK);
            printf("les entiers presents dans T6 Mais Absente Dans T7 Sont : \t");
            absents(T8,T9,taille8,taille9);
            printf("\n\n\t");
            textcolor(LIGHTBLUE);
            printf("\t\t\t\t");
            printf("\n\n");

        }


     void remplissageTab7()
        {
            long int taille8;
            long int taille9;
            int T8[100];
            int T9[100];
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T8 ***  \n\n");
            textcolor(RED);
            taille8=saisir_taille1();
            printf("\n");
            remplir1(T8,taille8);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T8,taille8,"tab8.txt");

            textcolor(BLACK);
            printf("            *** Remplissage de Tableau T9 ***  \n\n");
            textcolor(RED);
            taille9=saisir_taille1();
            printf("\n");
            remplir1(T9,taille9);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T9,taille9,"tab9.txt");

            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab7()
        {
            textcolor(BLACK);
            long int taille8;
            long int taille9;
            int T8[100];
            int T9[100];
            taille8=recuperation(T8,"tab8.txt");
            taille9=recuperation(T9,"tab9.txt");
            printf(" Le contenu du tableau T8 est : \t");
            textcolor(RED);
            afficher1(T8,taille8);
            printf("\n\n");
            textcolor(BLACK);
            printf(" Le contenu du tableau T9 est : \t");
            textcolor(RED);
            afficher1(T9,taille9);
            textcolor(BLACK);
            printf("\n\n");
            printf(" Le contenu du tableau qui contient T8 mais Absents dans T9 est : \t");
            textcolor(RED);
            afficher1(T9,taille9);
            printf("\n\n");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


                                //====================//
                                //  EXERCICE 2 TP 2   //
                                //====================//

//======================
//Recherche Elements Sup
//======================
void ex2_1_tp2() {

            textcolor(BLACK);
            printf("            Ce Programme Permet d'afficher Les elements de T8 qui sont superieur a A\n");
            printf("                  Puis afficher les plus petit elements qui sont superieur a A .\n\n\n");
            long int taille10;
            long int T10[100];
            long int val;
            textcolor(RED);
            taille10=saisir_taille1();
            printf("\n");
            remplir1(T10,taille10);
            printf("\n  ");
            textcolor(BLUE);
            val=SAISIE_VALEUR2();
            textcolor(GREEN);
            recherche_element_sup(T10,taille10,val);
            printf("\n\n\n\n\n");
            textcolor(LIGHTBLUE);

}


     void remplissageTab8()
        {
            long int taille10;
            long int T10[100];
            long int val;
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T10 ***  \n\n");
            textcolor(RED);
            taille10=saisir_taille1();
            printf("\n");
            remplir1(T10,taille10);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T10,taille10,"tab10.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab8()
        {
            textcolor(BLACK);
            long int taille10;
            long int T10[100];
            long int val;
            taille10=recuperation(T10,"tab10.txt");
            printf(" Le contenu du tableau T10 est : \t");
            textcolor(RED);
            afficher1(T10,taille10);
            printf("\n\n\t");
            val=SAISIE_VALEUR2();
            printf("\n");
            textcolor(BLACK);
            recherche_element_sup(T10,taille10,val);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }

//======================
//      Occurance
//======================

void ex2_2_tp2() {

            textcolor(BLACK);
            printf("            Ce Programme sert a chercher et afficher l'element qui apparait le plus dans le tableau\n\n\n");
            long int taille11;
            long int T11[100];
            textcolor(RED);
            taille11=saisir_taille1();
            printf("\n");
            remplir1(T11,taille11);
            printf("\n\t");
            textcolor(GREEN);
            occurence(T11,taille11);
            printf("\n\n\n\n");
            textcolor(LIGHTBLUE);

}

     void remplissageTab9()
        {
            long int taille11;
            long int T11[100];
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T11 ***  \n\n");
            textcolor(RED);
            taille11=saisir_taille1();
            printf("\n");
            remplir1(T11,taille11);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T11,taille11,"tab11.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab9()
        {
            textcolor(BLACK);
            long int taille11;
            long int T11[100];
            taille11=recuperation(T11,"tab11.txt");
            printf(" Le contenu du tableau T11 est : \t");
            textcolor(RED);
            afficher1(T11,taille11);
            printf("\n");
            textcolor(BLACK);
            occurence(T11,taille11);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }

//======================
//     Long Plateau
//======================

void ex2_3_tp2() {

            textcolor(BLACK);
            printf("            Ce Programme sert a chercher et afficher Le plus Long Plateau dans le tableau\n\n\n");
            long int taille12;
            long int T12[100];
            textcolor(RED);
            taille12=saisir_taille1();
            printf("\n");
            remplir1(T12,taille12);
            printf("\n\t");
            textcolor(GREEN);
            plus_long_plateau(T12,taille12);
            printf("\n\n\n\n");
            textcolor(LIGHTBLUE);

}

     void remplissageTab10()
        {
            long int taille12;
            long int T12[100];
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T12 ***  \n\n");
            textcolor(RED);
            taille12=saisir_taille1();
            printf("\n");
            remplir1(T12,taille12);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T12,taille12,"tab12.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab10()
        {
            textcolor(BLACK);
            long int taille12;
            long int T12[100];
            taille12=recuperation(T12,"tab12.txt");
            printf(" Le contenu du tableau T12 est : \t");
            textcolor(RED);
            afficher1(T12,taille12);
            printf("\n");
            textcolor(BLACK);
            plus_long_plateau(T12,taille12);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


//====================
//  EXERCICE 3 TP 2
//====================

void ex3_tp2() {

            textcolor(BLACK);
            printf("            Ce Programme sert a chercher et afficher les nombres symetrique de tableau\n\n\n");
            long int taille13;
            long int T13[100];
            textcolor(RED);
            taille13=SAISIE2_TAILLE();
            printf("\n");
            remplir3(T13,taille13);
            printf("\n\t");
            textcolor(GREEN);
            sym_tab(T13,taille13);
            printf("\n\n\n\n");
            textcolor(LIGHTBLUE);

}

     void remplissageTab11()
        {
            long int taille13;
            long int T13[100];
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T13 ***  \n\n");
            textcolor(RED);
            taille13=SAISIE2_TAILLE();
            printf("\n");
            remplir3(T13,taille13);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T13,taille13,"tab12.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab11()
        {
            textcolor(BLACK);
            long int taille13;
            long int T13[100];
            taille13=recuperation(T13,"tab12.txt");
            printf(" Le contenu du tableau T13 est : \t");
            textcolor(RED);
            afficher1(T13,taille13);
            printf("\n\n\t");
            textcolor(BLACK);
            sym_tab(T13,taille13);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }

void ex4_tp2() {

            textcolor(BLACK);
            printf("            Ce programme permet a tester la homogente d'un couple selon leurs facteurs premiers\n\n\n");
            long int taille13;
            long int T13[100];
            textcolor(RED);
            taille13=SAISIE2_TAILLE();
            printf("\n");
            remplir1(T13,taille13);
            printf("\n\t");
            textcolor(GREEN);
            affichie_hom(T13,taille13);
            printf("\n\n\n\n");
            textcolor(LIGHTBLUE);

}
//============================
//         Homogene
//============================


         void remplissageTab19()
            {
                long int taille21;
                long int T21[100];
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T21  ***  \n\n");
                printf("\n");
                taille21=saisir_taille1();
                printf("\n");
                remplir1(T21,taille21);
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T21,taille21,"tab21.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }

        void recuperTab19()
            {
                textcolor(BLACK);
                long int taille21;
                long int T21[100];
                taille21=recuperation(T21,"tab21.txt");
                printf("    Le contenu du tableau T21  : \t");
                textcolor(GREEN);
                affichie_hom(T21,taille21);
                printf("\n\n");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }

//=============================================================================
//                                  TP 3
//=============================================================================


//======================
//   Tri par Selection
//======================

void ex1_1_tp3() {

            textcolor(BLACK);
            printf("            Ce Programme Permet d'effectuer un Tri a Selection de tableau - Par Minimum - \n\n\n");
            long int taille14;
            long int T14[100];
            textcolor(RED);
            taille14=saisir_taille1();
            printf("\n");
            remplir1(T14,taille14);
            printf("\n\t");
            textcolor(GREEN);
            Tri_selection(T14,taille14);
            textcolor(GREEN);
            printf("Tableau Trier : \t");
            afficher1(T14,taille14);
            printf("\n\n\n\n");
            textcolor(LIGHTBLUE);

}

     void remplissageTab12()
        {
            long int taille14;
            long int T14[100];
            textcolor(BLACK);
            printf("          ***   Remplissage de Tableau T14 ***  \n\n");
            textcolor(RED);
            taille14=saisir_taille1();
            printf("\n");
            remplir1(T14,taille14);
            textcolor(GREEN);
            printf("\n\t\t\t");
            enregistrement(T14,taille14,"tab13.txt");
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }


    void recuperTab12()
        {
            textcolor(BLACK);
            long int taille14;
            long int T14[100];
            taille14=recuperation(T14,"tab13.txt");
            printf(" Le contenu du tableau T14 Avant le Tri : \t");
            textcolor(RED);
            afficher1(T14,taille14);
            printf("\n\n");
            textcolor(GREEN);
            Tri_selection(T14,taille14);
            printf(" Le contenu du tableau T14 Apres le Tri : \t");
            afficher1(T14,taille14);
            textcolor(LIGHTBLUE);
            printf("\n\n\n\t\t");

        }

//======================
//   Tri a Bulles
//======================

    void ex1_2_tp3() {

                textcolor(BLACK);
                printf("            Ce Programme Permet d'effectuer un - Tri a Bulles - de tableau \n\n\n");
                long int taille15;
                long int T15[100];
                textcolor(RED);
                taille15=saisir_taille1();
                printf("\n");
                remplir1(T15,taille15);
                printf("\n\t");
                textcolor(GREEN);
                tri_bulles(T15,taille15);
                textcolor(GREEN);
                printf("Tableau Trier : \t");
                afficher1(T15,taille15);
                printf("\n\n\n\n");
                textcolor(LIGHTBLUE);

    }

         void remplissageTab13()
            {
                long int taille15;
                long int T15[100];
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T15 ***  \n\n");
                textcolor(RED);
                taille15=saisir_taille1();
                printf("\n");
                remplir1(T15,taille15);
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T15,taille15,"tab14.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }


        void recuperTab13()
            {
                textcolor(BLACK);
                long int taille15;
                long int T15[100];
                taille15=recuperation(T15,"tab14.txt");
                printf(" Le contenu du tableau T15 Avant le Tri : \t");
                textcolor(RED);
                afficher1(T15,taille15);
                printf("\n\n");
                textcolor(GREEN);
                tri_bulles(T15,taille15);
                printf(" Le contenu du tableau T15 Apres le Tri : \t");
                afficher1(T15,taille15);
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }


//======================
//   Tri par Insertion
//======================

    void ex1_3_tp3() {

                textcolor(BLACK);
                printf("            Ce Programme Permet d'effectuer un - Tri Par Insertion - de tableau \n\n\n");
                long int taille16;
                long int T16[100];
                textcolor(RED);
                taille16=saisir_taille1();
                printf("\n");
                remplir1(T16,taille16);
                printf("\n\t");
                textcolor(GREEN);
                tri_insertion(T16,taille16);
                textcolor(GREEN);
                printf("Tableau Trier : \t");
                afficher1(T16,taille16);
                printf("\n\n\n\n");
                textcolor(LIGHTBLUE);

    }

         void remplissageTab14()
            {
                long int taille16;
                long int T16[100];
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T16 ***  \n\n");
                textcolor(RED);
                taille16=saisir_taille1();
                printf("\n");
                remplir1(T16,taille16);
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T16,taille16,"tab15.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }


        void recuperTab14()
            {
                textcolor(BLACK);
                long int taille16;
                long int T16[100];
                taille16=recuperation(T16,"tab15.txt");
                printf(" Le contenu du tableau T16 Avant le Tri : \t");
                textcolor(RED);
                afficher1(T16,taille16);
                printf("\n\n");
                textcolor(GREEN);
                tri_insertion(T16,taille16);
                printf(" Le contenu du tableau T16 Apres le Tri : \t");
                afficher1(T16,taille16);
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }


//======================
//   Tri Denombrement
//======================

    void ex1_4_tp3() {

                textcolor(BLACK);
                printf("            Ce Programme Permet d'effectuer un - Tri Denombrement - de tableau \n\n\n");
                long int taille17;
                long int T17[100];
                textcolor(RED);
                taille17=saisir_taille1();
                printf("\n");
                remplir1(T17,taille17);
                printf("\n\t");
                textcolor(GREEN);
                tri_insertion(T17,taille17);
                textcolor(GREEN);
                printf("Tableau Trier : \t");
                afficher1(T17,taille17);
                printf("\n\n\n\n");
                textcolor(LIGHTBLUE);

    }

         void remplissageTab15()
            {
                long int taille17;
                long int T17[100];
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T17 ***  \n\n");
                textcolor(RED);
                taille17=saisir_taille1();
                printf("\n");
                remplir1(T17,taille17);
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T17,taille17,"tab16.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }


        void recuperTab15()
            {
                textcolor(BLACK);
                long int taille17;
                long int T17[100];
                taille17=recuperation(T17,"tab16.txt");
                printf(" Le contenu du tableau T17 Avant le Tri : \t");
                textcolor(RED);
                afficher1(T17,taille17);
                printf("\n\n");
                textcolor(GREEN);
                tri_insertion(T17,taille17);
                printf(" Le contenu du tableau T17 Apres le Tri : \t");
                afficher1(T17,taille17);
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }

//======================
//   Tri Particulier
//======================
    void ex1_5_tp3() {

                textcolor(BLACK);
                printf("            Ce Programme Permet d'effectuer un - Tri Particulier - de tableau \n\n\n");
                long int taille18;
                long int T18[100];
                textcolor(RED);
                taille18=saisir_taille1();
                printf("\n");
                remplir1(T18,taille18);
                printf("\n\t");
                textcolor(GREEN);
                tri_insertion(T18,taille18);
                textcolor(GREEN);
                printf("Tableau Trier : \t");
                afficher1(T18,taille18);
                printf("\n\n\n\n");
                textcolor(LIGHTBLUE);

    }

         void remplissageTab16()
            {
                long int taille18;
                long int T18[100];
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T18 ***  \n\n");
                textcolor(RED);
                taille18=saisir_taille1();
                printf("\n");
                remplir1(T18,taille18);
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T18,taille18,"tab17.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }


        void recuperTab16()
            {
                textcolor(BLACK);
                long int taille18;
                long int T18[100];
                taille18=recuperation(T18,"tab17.txt");
                printf(" Le contenu du tableau T18 Avant le Tri : \t");
                textcolor(RED);
                afficher1(T18,taille18);
                printf("\n\n");
                textcolor(GREEN);
                tri_insertion(T18,taille18);
                printf(" Le contenu du tableau T18 Apres le Tri : \t");
                afficher1(T18,taille18);
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }
//============================
//  Rechereche Sequentielle
//============================
    void ex2_1_tp3() {

                textcolor(BLACK);
                printf("            Ce Programme Permet d'effectuer un - Recherche Sequentille - d'un Valeur dans un tableau \n\n\n");
                long int taille19;
                long int T19[100];
                long int valeur1;
                int pos1;
                textcolor(RED);
                taille19=saisir_taille1();
                printf("\n");
                remplissageTab1(T19,taille19);
                printf("\n\t");
                textcolor(BLUE);
                valeur1=SAISIE_VALEUR3();
                pos1=rech_seq(T19,taille19,valeur1);
                printf("\n\t");
                textcolor(GREEN);
                 if(pos1!=-1)
                        printf("La position de la valeur a rechercher est  :%d",pos1);
                 else
                        printf("La valeur a rechercher n'est pas dans le tableau");

                printf("\n\n\n\n");
                textcolor(LIGHTBLUE);

    }

         void remplissageTab17()
            {
                long int taille19;
                long int T19[100];
                long int valeur;
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T19 Dans l'ordre croissant ***  \n\n");
                textcolor(RED);
                taille19=saisir_taille1();
                printf("\n");
                remplir1(T19,taille19);
                printf("\n\t");
                textcolor(BLUE);
                valeur=SAISIE_VALEUR3();
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T19,taille19,"tab18.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }

        void recuperTab17()
            {
                textcolor(BLACK);
                long int taille19;
                long int T19[100];
                long int valeur1;
                int pos1;
                taille19=recuperation(T19,"tab18.txt");
                printf(" Le contenu du tableau T19 d'ordre croissant : \t");
                textcolor(RED);
                afficher1(T19,taille19);
                printf("\n\n");
                textcolor(BLUE);
                valeur1=SAISIE_VALEUR3();
                printf("\n\n");
                pos1=rech_seq(T19,taille19,valeur1);
                textcolor(GREEN);
                 if(pos1!=-1)
                        printf("La position de la valeur a rechercher est  :%d",pos1);
                 else
                        printf("La valeur a rechercher n'est pas dans le tableau");

                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }

//============================
//  Rechereche Dichotmique
//============================
    void ex2_2_tp3() {

                textcolor(BLACK);
                printf("            Ce Programme Permet d'effectuer un - Recherche Dichotomique - d'un Valeur dans un tableau \n\n\n");
                long int taille20;
                long int T20[100];
                long int valeur2;
                int pos2;
                textcolor(RED);
                taille20=saisir_taille1();
                printf("\n");
                REMPLIR_trie(T20,taille20);
                printf("\n\t");
                textcolor(BLUE);
                valeur2=SAISIE_VALEUR3();
                pos2=rech_seq(T20,taille20,valeur2);
                printf("\n\t");
                textcolor(GREEN);
                 if(pos2!=-1)
                        printf("La position de la valeur a rechercher est  :%d",pos2);
                 else
                        printf("La valeur a rechercher n'est pas dans le tableau");

                printf("\n\n\n\n");
                textcolor(LIGHTBLUE);

    }


         void remplissageTab18()
            {
                long int taille20;
                long int T20[100];
                long int valeur2;
                int pos2;
                textcolor(BLACK);
                printf("          ***   Remplissage de Tableau T20 d'ordre croissant ***  \n\n");
                textcolor(RED);
                taille20=saisir_taille1();
                printf("\n");
                REMPLIR_trie(T20,taille20);
                textcolor(GREEN);
                printf("\n\t\t\t");
                enregistrement(T20,taille20,"tab19.txt");
                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }

        void recuperTab18()
            {
                textcolor(BLACK);
                long int taille20;
                long int T20[100];
                long int valeur2;
                int pos2;
                taille20=recuperation(T20,"tab19.txt");
                printf(" Le contenu du tableau T20 d'ordre croissant : \t");
                textcolor(RED);
                afficher1(T20,taille20);
                printf("\n\n");
                textcolor(BLUE);
                valeur2=SAISIE_VALEUR3();
                printf("\n");
                pos2=rech_dich(T20,taille20,valeur2);
                textcolor(GREEN);
                 if(pos2!=-1)
                        printf("La position de la valeur a rechercher est  :%d",pos2);
                 else
                        printf("La valeur a rechercher n'est pas dans le tableau");

                textcolor(LIGHTBLUE);
                printf("\n\n\n\t\t");

            }



#endif // MENU_H_INCLUDED
