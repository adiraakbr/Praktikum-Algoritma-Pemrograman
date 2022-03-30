/*Nama File : SelisihKetinggianMinMax.c*/
/*Deskripsi: Menghitung selisih ketinggian*/
/*Nama: Adira Rahmana Akbar*/
/*NIM: 24060121140114*/



#include <stdio.h>

int main(){
    /*Kamus*/
    int N, i, min, max;

    /*Algoritma*/
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    int H[N];

    for (i = 0; i < N; i++)
    scanf("%d", &H[i]);

    max = H[0];
    min = H[0];

    for (i = 0; i < N; i++) if (H[i] > max) max = H[i];

    for (i = 0; i < N; i++) if (H[i] < min) min = H[i];

    printf("Maksimum: %d\nMinimum: %d\nSelisih ketinggiannya adalah: %d", max, min, max-min);
    return 0;
}
