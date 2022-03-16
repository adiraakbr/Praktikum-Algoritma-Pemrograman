/* Nama File: HargaDiskon.c */
/* Deskripsi: Menghitung total harga setelah diberikan diskon */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int harga;
    char jenis;

    /*Algoritma*/
    printf("Masukkan jenis barang antara A - C : ");
    scanf(" %c",&jenis);
    printf("Masukkan harga barang : ");
    scanf("%d", &harga);
    switch (jenis){
        case 'A' :
            printf("%d", 90 * harga / 100);
            break;
        case 'B' :
            printf("%d", 85* harga / 100);
            break;
        case 'C' :
            printf("%d", 80* harga / 100);
            break;
    }
    return 0;
}
