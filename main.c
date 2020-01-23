    #if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
    #elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
    #endif

/*

    +-------------------------------------------------------------+
     |                                                            |
     |          Created With Love: My C Project                   |
     |                                                            |
     |                      Ahed Bahri                            |
     |                                                            |
     +------------------------------------------------------------+

*/
    #include <tchar.h>
    #include "myconio.h"
    #include <stdio.h>
    #include <windows.h>
    #include "Entree_Sortie.h"
    #include "TP1.h"
    #include "TP2.h"
    #include "TP3.h"
    #include "menu.h"
    #include"jeux.h"


    /*  Declare Windows procedure  */

    LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
    void addmenus(HWND);
    void CreateBtt(HWND hwnd) ;

    HWND hname ,hage,hout,hogo,Add,Finnish;
     HDC hdc;
    HMENU hmenu ;

    HBITMAP hlogoImage , hgenerateImage;
    int intro=1 ;
    char ch[30];

    long p ;
    /*  Make the class name into a global variable  */
    TCHAR szClassName[ ] = _T("my project");

    int WINAPI WinMain (HINSTANCE hThisInstance,
                         HINSTANCE hPrevInstance,
                         LPSTR lpszArgument,
                         int nCmdShow)
    {
        HWND hwnd;               /* This is the handle for our window */
        MSG messages;            /* Here messages to the application are saved */
        WNDCLASSEX wincl;        /* Data structure for the windowclass */

        /* The Window structure */
        wincl.hInstance = hThisInstance;
        wincl.lpszClassName = szClassName;
        wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
        wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
        wincl.cbSize = sizeof (WNDCLASSEX);

        /* Use default icon and mouse-pointer */
        wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
        wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
        wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
        wincl.lpszMenuName = NULL;                 /* No menu */
        wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
        wincl.cbWndExtra = 0;                      /* structure or the window instance */
        /* Use Windows's default colour as the background of the window */
        wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND+7;


        /* Register the window class, and if it fails quit the program */
        if (!RegisterClassEx (&wincl))
            return 0;

        /* The class is registered, let's create the program*/
        hwnd = CreateWindowEx (
               0,                   /* Extended possibilites for variation */
               szClassName,         /* Classname */
               _T("my project"),       /* Title Text */
               WS_OVERLAPPEDWINDOW, /* default window */
               CW_USEDEFAULT,       /* Windows decides the position */
               CW_USEDEFAULT,       /* where the window ends up on the screen */
               1366,                 /* The programs width */
               768,                 /* and height in pixels */
               HWND_DESKTOP,        /* The window is a child-window to desktop */
               NULL,                /* No menu */
               hThisInstance,       /* Program Instance handler */
               NULL                 /* No Window Creation data */
               );

        /* Make the window visible on the screen */
        ShowWindow (hwnd, nCmdShow);

        /* Run the message loop. It will run until GetMessage() returns 0 */
        while (GetMessage (&messages, NULL, 0, 0))
        {
            /* Translate virtual-key messages into character messages */
            TranslateMessage(&messages);
            /* Send message to WindowProcedure */
            DispatchMessage(&messages);
        }

        /* The program return-value is 0 - The value that PostQuitMessage() gave */
        return messages.wParam;
    }


    /*  This function is called by the Windows function DispatchMessage()  */

    LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
    {static HBITMAP  hBmp;


       /* if(intro)
        {
            system("start test.exe") ;
            intro=0;
        }*/

        switch (message)                  /* handle the messages */
        {

            case WM_COMMAND:
            switch(wParam)
            {
                                        /* Menu TP 1*/
            case 1:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Exercice 1 === \n\n\n");
                    ex1_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");

                    break;
            case 2:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Exercice 2 === \n\n\n");
                    ex2_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 3:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Exercice 3 === \n\n\n");
                    ex3_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 4:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Exercice 4 === \n\n\n");
                    ex4_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 5:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Carre de N ? === \n\n\n");
                    ex5_1_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 6:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Multiparfait ? === \n\n\n");
                    ex5_2_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 7:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Divisible 13 ? === \n\n\n");
                    ex5_3_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 8:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Exercice 6 === \n\n\n");
                    ex6_tp1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
                                                        /* Menu TP 2*/
            case 9:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === TRANSFERE === \n\n\n");
                    ex1_1_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 10:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === SYMETRIQUE === \n\n\n");
                    ex1_2_tp2();
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 11:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === INVERSE === \n\n\n");
                    ex1_3_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 12:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === ROTATION CIRCULAIRE === \n\n\n");
                    ex1_4_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 13:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === INSERTION === \n\n\n");
                    ex1_5_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 14:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === PRESENTS === \n\n\n");
                    ex1_6_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 15:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === ABSENTS === \n\n\n");
                    ex1_7_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 16:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === MINIMUM === \n\n\n");
                    ex2_1_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 17:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === OCCURANCE === \n\n\n");
                    ex2_2_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 18:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === PLATEAU === \n\n\n");
                    ex2_3_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 19:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Nombres Symetrique === \n\n\n");
                    ex3_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 20:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === HOMOGENE ? === \n\n\n");
                    ex4_tp2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

    /* ******************* QUITTER & PDF ********************* */
            case 21:
                    if (MessageBox(hwnd,"       Vous voulez quitter ?", "QUITTER", MB_YESNO | MB_ICONQUESTION ) == IDYES)
                    {

                        DestroyWindow(hwnd);
                        system("cls");
                    }
                break;
         case 25:
                    system("color F2");
                    ShowWindow(hwnd,SW_HIDE);
                    done();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                break;
            case 22: ShellExecute(NULL,"open","TP1.pdf",NULL,NULL,SW_SHOWNORMAL);break;
            case 23: ShellExecute(NULL,"open","TP2.pdf",NULL,NULL,SW_SHOWNORMAL);break;
            case 24: ShellExecute(NULL,"open","TP3.pdf",NULL,NULL,SW_SHOWNORMAL);break;

           case 26:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Tri Par Selection === \n\n\n");
                    ex1_1_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 27:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Tri a Bulles === \n\n\n");
                    ex1_2_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 28:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Tri par Insertion === \n\n\n");
                    ex1_3_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
            case 29:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Tri par Denombrement === \n\n\n");
                    ex1_4_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 30:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Tri Particulier === \n\n\n");
                    ex1_5_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

            case 31:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recherche Sequentielle === \n\n\n");
                    ex2_1_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 32:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recherche Dichotomique === \n\n\n");
                    ex2_2_tp3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

    /* ******************* Remplissage Tableau********************* */

           case 33:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T1 === \n\n\n");
                    remplissageTab1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 34:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T2 === \n\n\n");
                    remplissageTab2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 35:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T3 === \n\n\n");
                    remplissageTab3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 36:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T4 === \n\n\n");
                    remplissageTab4();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 37:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T5 === \n\n\n");
                    remplissageTab5();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 38:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T6 === \n\n\n");
                    remplissageTab6();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 39:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T7 === \n\n\n");
                    remplissageTab7();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 40:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T8 === \n\n\n");
                    remplissageTab8();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 41:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T9 === \n\n\n");
                    remplissageTab9();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 42:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T10 === \n\n\n");
                    remplissageTab10();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 43:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T11 === \n\n\n");
                    remplissageTab11();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 44:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T12 === \n\n\n");
                    remplissageTab12();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 45:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T13 === \n\n\n");
                    remplissageTab13();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 46:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T14 === \n\n\n");
                    remplissageTab14();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 47:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T15 === \n\n\n");
                    remplissageTab15();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 48:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T16 === \n\n\n");
                    remplissageTab16();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 49:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T17 === \n\n\n");
                    remplissageTab17();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 50:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T18 === \n\n\n");
                    remplissageTab18();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 51:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Remplissage T19 === \n\n\n");
                    remplissageTab19();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;


     /* ******************* Debut Recuperation ********************* */

           case 52:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T1 === \n\n\n");
                    recuperTab1();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 53:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T2 === \n\n\n");
                    recuperTab2();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 54:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T3 === \n\n\n");
                    recuperTab3();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

           case 55:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T4 === \n\n\n");
                    recuperTab4();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 56:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T5 === \n\n\n");
                    recuperTab5();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 57:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T6 === \n\n\n");
                    recuperTab6();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

           case 58:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T7 === \n\n\n");
                    recuperTab7();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 59:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T8 === \n\n\n");
                    recuperTab8();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 60:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T9 === \n\n\n");
                    recuperTab9();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

           case 61:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T10 === \n\n\n");
                    recuperTab10();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 62:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T11 === \n\n\n");
                    recuperTab11();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 63:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T12 === \n\n\n");
                    recuperTab12();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

           case 64:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T13 === \n\n\n");
                    recuperTab13();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 65:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T14 === \n\n\n");
                    recuperTab14();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 66:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T15 === \n\n\n");
                    recuperTab15();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

           case 67:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T16 === \n\n\n");
                    recuperTab16();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 68:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T17 === \n\n\n");
                    recuperTab17();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;
           case 69:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T18 === \n\n\n");
                    recuperTab18();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

           case 70:
                    system("color F9");
                    ShowWindow(hwnd,SW_HIDE);
                    gotoxy(30,5);
                    printf(" \t\t === Recuperation T19 === \n\n\n");
                    recuperTab19();
                    system("pause");
                    ShowWindow(hwnd,SW_NORMAL);
                    system("cls");
                    break;

    /* ******************* Fin Recuperation ********************* */


            }
        case WM_CREATE :
            addmenus(hwnd);
    //         CreateBtt(hwnd) ;
                /*****************ajouter fond **********************/
                hBmp=LoadImage(NULL,"3.bmp",IMAGE_BITMAP,1370,700,LR_LOADFROMFILE);

                break;

            case WM_PAINT :
                {

             PAINTSTRUCT ps;
                hdc = BeginPaint(hwnd, &ps);

                DrawState(hdc,NULL,NULL,(long)hBmp,0,0,0,0,0,DST_BITMAP);

                EndPaint(hwnd, &ps);}
            break;
            case WM_DESTROY:
                PostQuitMessage (0);        /* send a WM_QUIT to the message queue */
                break;
            default:                      /* for messages that we don't deal with */
                return DefWindowProc (hwnd, message, wParam, lParam);
        }

        return 0;
    }

    void addmenus(HWND hwnd)
    {
        hmenu=CreateMenu();
        HMENU htp=CreateMenu();
        HMENU htp1=CreateMenu();
        HMENU htp3=CreateMenu();
        HMENU htp4=CreateMenu();
        HMENU htp5=CreateMenu();
        HMENU htp6=CreateMenu();
        HMENU htp2=CreateMenu();
        //HMENU htp7=CreateMenu();

        HMENU hex0=CreateMenu();
        HMENU hex1=CreateMenu();
        HMENU hex2=CreateMenu();
        HMENU hex3=CreateMenu();
        HMENU hex4=CreateMenu();


        //AppendMenu(hmenu,MF_STRING,0,"creation du repertoire");
       AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp," Lancer TP1");
            AppendMenu(htp,MF_STRING,22,"Serie1 PDF");
            AppendMenu(htp,MF_STRING,1,"EXERCICE 1");
            AppendMenu(htp,MF_STRING,2,"EXERCICE 2");
            AppendMenu(htp,MF_STRING,3,"EXERCICE 3");
            AppendMenu(htp,MF_STRING,4,"EXERCICE 4");
        AppendMenu(htp,MF_POPUP,(UINT_PTR)hex0,"EXERCICE 5");
            AppendMenu(hex0,MF_STRING,5,"Probleme 1");
            AppendMenu(hex0,MF_STRING,6,"Probleme 2");
            AppendMenu(hex0,MF_STRING,7,"Probleme 3");
            AppendMenu(hex0,MF_STRING,21,"Quitter");
        AppendMenu(htp,MF_STRING,8,"EXERCICE 6");

        AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp1,"Lancer TP 2");
                AppendMenu(htp1,MF_STRING,23,"Serie2 PDF");
        AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex1,"EXERCICE 1");
                AppendMenu(hex1,MF_STRING,9,"TRANSFERE");
                AppendMenu(hex1,MF_STRING,10,"SYMETRIQUE");
                AppendMenu(hex1,MF_STRING,11,"INVERSE");
                AppendMenu(hex1,MF_STRING,12,"K-ROTATION");
                AppendMenu(hex1,MF_STRING,13,"INSERTION");
                AppendMenu(hex1,MF_STRING,14,"PRESENTS");
                AppendMenu(hex1,MF_STRING,15,"ABSENTS");
            AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex2,"EXERCICE 2");
                AppendMenu(hex2,MF_STRING,16,"MINIMUM");
                AppendMenu(hex2,MF_STRING,17,"OCCURANCE");
                AppendMenu(hex2,MF_STRING,18,"PLATEAU");

            AppendMenu(htp1,MF_STRING,19,"SYMETRIQUE");
            AppendMenu(htp1,MF_STRING,20,"HOMOGENE");


               AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp3,"Lancer TP3");
                    AppendMenu(htp3,MF_STRING,24,"Serie 3 PDF");
                    AppendMenu(htp3,MF_POPUP,(UINT_PTR)hex3,"TRI");
                    AppendMenu(hex3,MF_STRING,26,"Selection");
                    AppendMenu(hex3,MF_STRING,27,"A Bulles");
                    AppendMenu(hex3,MF_STRING,28,"Insertion");
                    AppendMenu(hex3,MF_STRING,29,"Denombrement");
                    AppendMenu(hex3,MF_STRING,30,"TRI Particulier");

                    AppendMenu(htp3,MF_POPUP,(UINT_PTR)hex4,"Recherche");
                    AppendMenu(hex4,MF_STRING,31,"Sequentielle");
                    AppendMenu(hex4,MF_STRING,32,"Dichotomique");


            AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp4,"Jeu");
             AppendMenu(htp4,MF_STRING,25,"Let'S play ");

    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp5,"Remplissage");
             AppendMenu(htp5,MF_STRING,33,"T1");
             AppendMenu(htp5,MF_STRING,34,"T2");
             AppendMenu(htp5,MF_STRING,35,"T3");
             AppendMenu(htp5,MF_STRING,36,"T4");
             AppendMenu(htp5,MF_STRING,37,"T5");
             AppendMenu(htp5,MF_STRING,38,"T6");
             AppendMenu(htp5,MF_STRING,39,"T7");
             AppendMenu(htp5,MF_STRING,40,"T8");
             AppendMenu(htp5,MF_STRING,41,"T9");
             AppendMenu(htp5,MF_STRING,42,"T10");
             AppendMenu(htp5,MF_STRING,43,"T11");
             AppendMenu(htp5,MF_STRING,44,"T12");
             AppendMenu(htp5,MF_STRING,45,"T13");
             AppendMenu(htp5,MF_STRING,46,"T14");
             AppendMenu(htp5,MF_STRING,47,"T15");
             AppendMenu(htp5,MF_STRING,48,"T16");
             AppendMenu(htp5,MF_STRING,49,"T17");
             AppendMenu(htp5,MF_STRING,50,"T18");
             AppendMenu(htp5,MF_STRING,51,"T19");

    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp6,"Recuperation");
             AppendMenu(htp6,MF_STRING,52,"T1");
             AppendMenu(htp6,MF_STRING,53,"T2");
             AppendMenu(htp6,MF_STRING,54,"T3");
             AppendMenu(htp6,MF_STRING,55,"T4");
             AppendMenu(htp6,MF_STRING,56,"T5");
             AppendMenu(htp6,MF_STRING,57,"T6");
             AppendMenu(htp6,MF_STRING,58,"T7");
             AppendMenu(htp6,MF_STRING,59,"T8");
             AppendMenu(htp6,MF_STRING,60,"T9");
             AppendMenu(htp6,MF_STRING,61,"T10");
             AppendMenu(htp6,MF_STRING,62,"T11");
             AppendMenu(htp6,MF_STRING,63,"T12");
             AppendMenu(htp6,MF_STRING,64,"T13");
             AppendMenu(htp6,MF_STRING,65,"T14");
             AppendMenu(htp6,MF_STRING,66,"T15");
             AppendMenu(htp6,MF_STRING,67,"T16");
             AppendMenu(htp6,MF_STRING,68,"T17");
             AppendMenu(htp6,MF_STRING,69,"T18");
             AppendMenu(htp6,MF_STRING,70,"T19");
        AppendMenu(hmenu,MF_STRING,21,"Quitter");
        SetMenu(hwnd,hmenu);
    }

