#include "../include/MATH.h"

// seno
double seno(double x) {
    double resultado = 0;
    double termino = x;
    int signo = 1;

    for (int i = 1; i <= 9; i += 2) {
        resultado += signo * termino;

        termino = termino * x * x / ((i + 1) * (i + 2));
        signo *= -1;
    }

    return resultado;
}

// coseno
double coseno(double x) {
    double resultado = 1;
    double termino = 1;
    int signo = -1;

    for (int i = 2; i <= 8; i += 2) {
        termino = termino * x * x / (i * (i - 1));
        resultado += signo * termino;
        signo *= -1;
    }

    return resultado;
}

// tangente = seno / coseno
double tangente(double x) {
    return seno(x) / coseno(x);
}