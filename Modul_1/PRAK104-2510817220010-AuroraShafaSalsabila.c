#include <stdio.h>

int main(){
    double A = 400000;
    double d1 = 13;
    double rA;
    double B = 350000;
    double d2 = 21;
    double rB;

    rA = A - (A * (d1/100));
    rB = B - (B * (d2/100));

    printf("Harga sepatu A adalah %.0f\n", A);
    printf("Harga sepatu B adalah %.0f\n", B);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", d1, rA);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", d2, rB);
    return 0;
    }
