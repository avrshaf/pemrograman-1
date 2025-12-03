#include<stdio.h>

int main() {
    char nama[20], nim[20], kelas_paralel[20], tempat_tanggal_lahir[30], alamat[20], hobby[20], no_hp[20];

    printf("Nama                : ");
    gets(nama);
    printf("NIM                 : ");
    gets(nim);
    printf("Kelas Paralel       : ");
    gets(kelas_paralel);
    printf("Tempat/Tanggal Lahir: ");
    gets(tempat_tanggal_lahir);
    printf("Alamat              : ");
    gets(alamat);
    printf("Hobby               : ");
    gets(hobby);
    printf("No. HP              : ");
    gets(no_hp);

    printf("\n");
    printf("Nama                : %s\n", nama);
    printf("NIM                 : %s\n", nim);
    printf("Kelas Paralel       : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir: %s\n", tempat_tanggal_lahir);
    printf("Alamat              : %s\n", alamat);
    printf("Hobby               : %s\n", hobby);
    printf("No. HP              : %s\n", no_hp);

    return 0;
}