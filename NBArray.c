/*Nama File : NBArray.c*/
/*Deskripsi : Menghitung besarnya penjumlahan sub array/tabel T*/
/*Nama: Adira Rahmana Akbar*/
/*NIM: 24060121140114*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N, i, p, sum;

    /*Algoritma*/
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &N);
    int T[N];
    sum = 0;

    for (i = 0; i < N; i++)
    scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        printf("(");
        for (p = i; p < N; p++) {
            sum += T[p];
            if (p != N-1) printf("%d + ", T[p]);
            else printf("%d", T[p]);
        }
        if (i != N-1) printf(") + ");
        else printf(")");
    }
    printf("\nJumlah dari array dan subarraynya adalah: %d", sum);
    return 0;
}
