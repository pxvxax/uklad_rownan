#include <stdio.h>

void wyswietl_informacje();

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2);

int main() {
    double a1, b1, c1, a2, b2, c2;

    wyswietl_informacje();
    wczytaj_wspolczynniki(&a1, &b1, &c1, &a2, &b2, &c2);

// nie SKOŃCZONE !!!


    printf("Twój układ równań:\n");
    printf("%5.2lf=x + %5.2lf+y = %5.2\n", a1, b1, c1);
    printf("%5.2lf=x + %5.2lf+y = %5.2\n", a2, b2, c2);
    return 0;
}

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {
    printf("Podaj a1: "); scanf("%lf", a1);
    printf("Podaj b1: "); scanf("%lf", b1);
    printf("Podaj c1: "); scanf("%lf", c1);
    printf("Podaj a2: "); scanf("%lf", a2);
    printf("Podaj b2: "); scanf("%lf", b2);
    printf("Podaj c2: "); scanf("%lf", c2);
}

void wyswietl_informacje() {
    printf("Program rozwiązuje układ dwóch równań liniowych.\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("\n");
    printf("Podaj współczynniki. \n");
}