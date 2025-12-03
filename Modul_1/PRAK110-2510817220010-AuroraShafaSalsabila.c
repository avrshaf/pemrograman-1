#include <stdio.h>
#include <math.h>

int main()
{
    int al = 5; 
    int ti = 12; 
    int sa = ti;
    int sb = sqrt(al * al + ti * ti); 
    int sc = al;
    int kel= (sa + sb + sc); 
    int lu = (al * ti) / 2;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", al);
    printf("Tinggi = %d cm\n", ti); 
    printf("\n");
    printf("Jawab :\n"); 
    printf("Sisi A = %d cm\n", ti); 
    printf("Sisi B = %d cm\n", sb); 
    printf("Sisi C = %d cm\n", al);
    printf("Keliling = %d cm\n", kel); 
    printf("Luas = %d cm\n", lu);
    return 0;
}