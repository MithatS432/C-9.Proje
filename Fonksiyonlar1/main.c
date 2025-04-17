#include <stdio.h>

// Fonksiyon prototipleri
int faktoriyel(int n);                     // Recursion
int topla(int a, int b);                   // Parametre + d�n�� de�eri
void yazdir(int sonuc);                    // void fonksiyon
void hosgeldinMesaji();                    // void fonksiyon
void globalDegeriGoster();                 // global de�i�keni kullan�r

int global_sayi = 100; // Global de�i�ken

int main() {
    int x = 5, y = 3;
    int toplam;

    hosgeldinMesaji(); // void fonksiyon �a�r�s�

    toplam = topla(x, y); // parametreli fonksiyon
    yazdir(toplam);

    printf("%d sayisinin faktoriyeli: %d\n", x, faktoriyel(x));

    globalDegeriGoster();

    return 0;
}

// Fonksiyon tan�m�
int faktoriyel(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktoriyel(n - 1); // �zyineleme (recursion)
}

int topla(int a, int b) {
    return a + b;
}

void yazdir(int sonuc) {
    printf("Toplam sonucu: %d\n", sonuc);
}

void hosgeldinMesaji() {
    printf("Programimiza hos geldiniz!\n");
}

void globalDegeriGoster() {
    printf("Global degisken degeri: %d\n", global_sayi);
}
