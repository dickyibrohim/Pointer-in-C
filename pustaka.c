#include "header.h"
int LuasPersegi (int s, int *l) // L untuk Input sekaligus Output Pointer
{
    *l = s*s;
    return *l;
}

// LUAS PERSEGI PANJANG
int LuasPersegiPanjang (int p, int lebar, int *luaspersegipanjang) // L untuk Input sekaligus Output Pointer
{
    *luaspersegipanjang = p*lebar;
    return *luaspersegipanjang;
}
// VOLUME KUDUS
int volumeKubus (int s, int *l) // L untuk Input sekaligus Output Pointer
{
    *l = s*s*s;
    return *l;
}

// Volume PERSEGI PANJANG
int VolumePersegiPanjang (int panjang, int lebar, int tinggi, int *l) // L untuk Input sekaligus Output Pointer
{
    *l = panjang*lebar*tinggi;
    return *l;
}


void ProcedureLuasPersegiPanjang (int p, int lebar)
{
    int *luaspersegipanjang = p*lebar;
    printf ("* Luas PersegiPanjang dengan VOID= %d",luaspersegipanjang);
}
void ProcedureLuasPersegiPanjangV (int p, int lebar, int *Luas)
{
    *Luas = p*lebar;
}
