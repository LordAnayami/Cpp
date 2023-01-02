#include<bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;

#define w 18
#define k 4

float x = 0;
float y = 0;

void Drukowanie(float matrix[w][k])
{
    printf("Macierz poczatkowa: \n");
    for (int i=0; i<w; i++)
    {
        for(int j=0; j<k; j++)
        {

        float x= matrix[i][j];
        printf("%f , ", x , " ");

        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

void Program(float matrix[w][k])
{
    printf("Wybrales opcje pierwsza - wyswietlenie programu jazdy pociagow. \n");
    printf("Wybierz kierunek trasy: \n");
    printf("1 - Slupsk - Koszalin - Szczecin \n");
    printf("2 - Szczecin - Koszalin - Slupsk \n");

    int b = 0;
    int licznik = 1;
    cin >> b;

    if (b == 1)
    {

    printf("Wybrales trase Slupsk - Koszalin - Szczecin \n");
    printf("Slupsk Odjazd - Koszalin Przyjazd - Koszalin Odjazd - Szczecin Przyjazd \n");
    for (int i=0; i<10; i++)

    {
        printf("%2.i: ", licznik);
        for(int j=0; j<k; j++)
        {

        float y= matrix[i][j];
        int g= 0;
        g = y / 1;
        float s=0;
        s= (y - g) * 60;

        printf(" %2.i:", g);
        printf("%2.0f ", s);

        }

        licznik=licznik+1;
        printf("\n");
    }
    printf("\n");
    printf("\n");
    }

    else

    {
    printf("Wybrales trase Szczecin - Koszalin - Slupsk \n");
    printf("Szczecin Odjazd - Koszalin Przyjazd - Koszalin Odjazd - Slupsk Przyjazd \n");

    for (int i=10; i<w; i++)
    {
        printf("%2.i: ", licznik);
        for(int j=0; j<k; j++)
        {

        float z= matrix[i][j];
        int g= 0;
        g = z / 1;
        float s=0;
        s= (z - g) * 60;
        printf(" %2.i:", g);
        printf("%2.0f ", s);


        }
        licznik=licznik+1;
        printf("\n");
    }
    printf("\n");
    printf("\n");
    }
}

void Trasa(float matrix[w][k])
{
    int licznik = 1;
    printf("Wybrales opcje druga - znalezienie trasy wybranej dla siebie. \n");
    printf("Wybierz kierunek trasy: \n");
    printf("1 - Slupsk - Koszalin - Szczecin \n");
    printf("2 - Szczecin - Koszalin - Slupsk \n");


    int c = 0;
    cin >> c;


    if (c==1)
   {

    printf("Wybierz miejsce poczatkowe: \n");
    printf("0 - Slupsk\n");
    printf("2 - Koszalin\n");

    int d = 0;
    cin >> d;

    printf("Wybierz miejsce koncowe: \n");
    printf("1 - Koszalin\n");
    printf("3 - Szczecin \n");

    int e = 0;
    cin >> e;


    printf("Podaj pelna godzine najblizsza twojego czasu: \n");

    int t = 0;
    cin >> t;

    printf(" Odjazd - Przyjazd - Czas Podrozy: \n");


    for (int i=0; i<10; i++)
    {
    float p= matrix[i][d];
    float o= matrix[i][e];
    int r= matrix[i][d];
    int h= matrix[i][e];
    float P=0;
    P= (p - r ) * 60;
    float O=0;
    O= (o - h ) * 60;

    float delta=0;
    delta = (o - p) * 60;

    if (r  == t-1)
    {


     printf("%2.i: ", licznik);
     printf(" - ");
     printf(" %2.i:", r);
     printf("%2.0f ", P);
     printf(" - ");
     printf(" %2.i:", h);
     printf("%2.0f ", O);
     printf(" - ");
     printf("%.0f ", delta);
     printf("\n");
     licznik=licznik+1;
    }


   if (r  == t)
    {


     printf("%2.i: ", licznik);
     printf(" - ");
     printf(" %2.i:", r);
     printf("%2.0f ", P);
     printf(" - ");
     printf(" %2.i:", h);
     printf("%2.0f ", O);
     printf(" - ");
     printf("%.0f ", delta);
     printf("\n");
     licznik=licznik+1;

    }

    if (r  == t +1)
    {


     printf("%2.i: ", licznik);
     printf(" - ");
     printf(" %2.i:", r);
     printf("%2.0f ", P);
     printf(" - ");
     printf(" %2.i:", h);
     printf("%2.0f ", O);
     printf(" - ");
     printf("%.0f ", delta);
     printf("\n");
     licznik=licznik+1;

    }

    }
   }


   if (c==2)
   {

    printf("Wybierz miejsce poczatkowe: \n");
    printf("0 - Szczecin\n");
    printf("2 - Koszalin\n");

    int d = 0;
    cin >> d;

    printf("Wybierz miejsce koncowe: \n");
    printf("1 - Koszalin\n");
    printf("3 - Slupsk \n");

    int e = 0;
    cin >> e;


    printf("Podaj pelna godzine najblizsza twojego czasu: \n");

    int t = 0;
    cin >> t;

    printf(" Odjazd - Przyjazd - Czas Podrozy: \n");


    for (int i=10; i<w; i++)
    {
    float p= matrix[i][d];
    float o= matrix[i][e];
    int r= matrix[i][d];
    int h= matrix[i][e];
    float P=0;
    P= (p - r ) * 60;
    float O=0;
    O= (o - h ) * 60;

    float delta=0;
    delta = (o - p) * 60;

    if (r  == t-1)
    {


     printf("%2.i: ", licznik);
     printf(" - ");
     printf(" %2.i:", r);
     printf("%2.0f ", P);
     printf(" - ");
     printf(" %2.i:", h);
     printf("%2.0f ", O);
     printf(" - ");
     printf("%.0f ", delta);
     printf("\n");
     licznik=licznik+1;
    }


   if (r  == t)
    {


     printf("%2.i: ", licznik);
     printf(" - ");
     printf(" %2.i:", r);
     printf("%2.0f ", P);
     printf(" - ");
     printf(" %2.i:", h);
     printf("%2.0f ", O);
     printf(" - ");
     printf("%.0f ", delta);
     printf("\n");
     licznik=licznik+1;

    }

    if (r  == t +1)
    {


     printf("%2.i: ", licznik);
     printf(" - ");
     printf(" %2.i:", r);
     printf("%2.0f ", P);
     printf(" - ");
     printf(" %2.i:", h);
     printf("%2.0f ", O);
     printf(" - ");
     printf("%.0f ", delta);
     printf("\n");
     licznik=licznik+1;

    }

    }

   }
}


int main()
{
    float matrix[w][k] = {
                                {4.8, 5.58333, 5.63333, 8.61667},
                                {7.35, 8.0, 8.01667, 10.2},
                                {8.36667, 9.2, 9.35, 12.08333},
                                {10.1, 10.88333, 10.91667, 13.13333},
                                {11.81667, 12.58333, 12.61667, 15.35},
                                {13.4, 14.25, 14.28333, 15.35},
                                {14.16667, 15.11667, 15.13333, 17.66667},
                                {17.76667, 18.55, 18.56667, 20.76667},
                                {18.91667, 19.83333, 19.85, 21.43333},
                                {19.6, 20.36667, 20.43333, 22.31667},
                                {5.86667, 8.33333, 8.35, 9.01667},
                                {6.95, 9.71667, 9.73333, 10.58333},
                                {7.56667, 9.98333, 10.01667, 10.78333},
                                {11.56667, 13.75, 13.78333, 14.46667},
                                {12.75, 15.5, 15.51667, 16.28333},
                                {15.93333, 18.1, 18.11667, 18.78333},
                                {16.58333, 19.23333, 19.25, 20.45},
                                {17.23333, 19.55, 19.56667, 20.21667}
                            };

    Drukowanie(matrix);
    printf("Program wyswietlajacy rozklad jazdy pociagow. \n");
    printf("Wybierz funkcje programu, z ktorej chcesz skorzystac. \n");
    printf("1 - wyswietlic program jazdy pociagow \n");
    printf("2 - znalezc trase wybrana dla siebie. \n");

    int a = 0;
    cin >> a;
    if (a == 1)
    {
       Program(matrix);
    }
    else
    {
        Trasa(matrix);
    }




    return 0;
}

