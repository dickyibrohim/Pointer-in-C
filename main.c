#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{   int sisi;
    int panjang, lebar, tinggi, panjangPersegipanjang, lebarpersegipanjang;
    int *luas, *luasPP;
   printf ("Menghitung Luas persegi dan Volume Kubus dari SISI yang diketahui\n");
    printf ("* Input Sisi= ");
    scanf ("%d", &sisi);
    printf ("* Luas Persegi= %d", LuasPersegi(sisi,&luas)); // & Untuk Mengakses dari suatu Variable
    printf ("\n**Volume Kubus= %d", volumeKubus (sisi,&luas));

    printf ("\n\nMenghitung VolumePersegiPanjang dari Panjang, lebar, tinggi yang diketahui\n");
    printf ("* Input Panjang= ");
    scanf ("%d", &panjang);
    printf ("* Input Lebar= ");
    scanf ("%d", &lebar);
    printf ("* Input Tinggi= ");
    scanf ("%d", &lebar);
    printf ("* VolumePersegiPanjang= %d", VolumePersegiPanjang (panjang,lebar, tinggi,&luas));

    printf ("\n\nMenghitung Luas Persegi Panjang dari Panjang, lebar yang diketahui\n");
    printf ("* Input Panjang= ");
    scanf ("%d", &panjangPersegipanjang);
    printf ("* Input Lebar= ");
    scanf ("%d", &lebarpersegipanjang);
    printf ("* Luas PersegiPanjang= %d", LuasPersegiPanjang (panjangPersegipanjang, lebarpersegipanjang, &luas));

    printf ("\n\nMenghitung VOID Luas Persegi Panjang dari Panjang, lebar yang diketahui\n");
    printf ("* Input Panjang= ");
    scanf ("%d", &panjangPersegipanjang);
    printf ("* Input Lebar= ");
    scanf ("%d", &lebarpersegipanjang);
    ProcedureLuasPersegiPanjang (panjangPersegipanjang, lebarpersegipanjang);
    ProcedureLuasPersegiPanjangV(panjangPersegipanjang, lebarpersegipanjang, &luasPP);
    printf ("\n* Luas Persegi Prosedur dengan pointer= %d",luasPP);
    return 0;
}
