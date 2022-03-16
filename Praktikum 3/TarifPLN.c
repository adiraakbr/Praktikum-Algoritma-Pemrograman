/* Nama File: TarifPLN.c */
/* Deskripsi: Menghitung berapa tarif PLN yang dikenakan */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int g,i;

    /*Algoritma*/
    printf("Masukkan golongan listrik : ");
    scanf("%d",&g);
    printf("Masukkan jumlah pemakaian dalam kWh : ");
    scanf("%d", &i);
    if(g == 1){
        if(i > 0 && i <= 100){
            printf("%d",100*1000);
        }
        else if (i > 100 && i < 1000){
            printf("%d",i*1000);
        }
        else if (i>=1000){
            printf("%d", i*1000 + (i*1000*10/100));
        }
        else{
            printf("Angka yang dimasukan harus diatas 0 kWh");
        }
    }
    else{
        if(i > 0 && i <= 100){
            printf("%d",100*2000);
        }
        else if (i > 100 && i< 1000){
            printf("%d",i*2000);
        }
        else if (i>=1000){
            printf("%d", i*2000 + (i*2000*10/100));
        }
        else{
            printf("Angka dimasukan harus diatas 0 kWh");
        }
    }
    return 0;
}
