#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int valorDecimal;
    int unidade;
    int dezena;
    int centena;
    int milhar;

    printf("Digite um valor decimal entre 1 e 3999: ");
    scanf("%d", &valorDecimal);

    printf("%d = ", valorDecimal);

    milhar = valorDecimal / 1000;
    valorDecimal %= 1000;
    centena = valorDecimal / 100;
    valorDecimal %= 100;
    dezena = valorDecimal / 10;
    valorDecimal %= 10;
    unidade = valorDecimal;

    switch(milhar){
        case 3:
            printf("MMM");
            break;
        case 2:
            printf("MM");
            break;
        case 1:
            printf("M");
            break;
    }
    switch(centena){
        case 9:
            printf("CM");
            break;
        case 8:
            printf("DCCC");
            break;
        case 7:
            printf("DCC");
            break;
        case 6:
            printf("DC");
            break;
        case 5:
            printf("D");
            break;
        case 4:
            printf("CD");
            break;
        case 3:
            printf("CCC");
            break;
        case 2:
            printf("CC");
            break;
        case 1:
            printf("C");
            break;
    }

    switch(dezena){
        case 9:
            printf("XC");
            break;
        case 8:
            printf("LXXX");
            break;
        case 7:
            printf("LXX");
            break;
        case 6:
            printf("LX");
            break;
        case 5:
            printf("L");
            break;
        case 4:
            printf("XL");
            break;
        case 3:
            printf("XXX");
            break;
        case 2:
            printf("XX");
            break;
        case 1:
            printf("X");
            break;
    }

    switch(unidade){
        case 9:
            printf("IX");
            break;
        case 8:
            printf("VIII");
            break;
        case 7:
            printf("VII");
            break;
        case 6:
            printf("VI");
            break;
        case 5:
            printf("V");
            break;
        case 4:
            printf("IV");
            break;
        case 3:
            printf("III");
            break;
        case 2:
            printf("II");
            break;
        case 1:
            printf("I");
            break;
    }

    return 0;
}
