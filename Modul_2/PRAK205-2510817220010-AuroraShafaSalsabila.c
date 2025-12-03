#include <stdio.h> 
#include <math.h>
int main(){
int A, B, C, t, kel, lu; 
printf("");
scanf("%d %d", &A, &B);
C =sqrt(pow((B),2)-pow((A),2)); 
kel =A + B + C;
lu = A * C / 2; 
printf("Alas = %d \n", C); 
printf("Tinggi = %d \n", A);
printf("Keliling = %d \n", kel); 
printf("Luas = %d cm^2\n", lu);
return 0;
}
