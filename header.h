#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
int LuasPersegi (int s, int *l); // L untuk Input sekaligus Output Pointer LUAS
int volumeKubus (int s, int *l);
int VolumePersegiPanjang (int panjang, int lebar, int tinggi, int *l);
int LuasPersegiPanjang (int p, int lebar, int *luaspersegipanjang);
void ProcedureLuasPersegiPanjang (int p, int lebar);
void ProcedureLuasPersegiPanjangV (int p, int lebar, int *Luas);

#endif // HEADER_H_INCLUDED
