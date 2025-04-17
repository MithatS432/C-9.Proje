#include <stdio.h>

// Fonksiyon prototipleri
int faktoriyel(int n);                     // Recursion
int topla(int a, int b);                   // Parametre + dönüþ deðeri
void yazdir(int sonuc);                    // void fonksiyon
void hosgeldinMesaji();                    // void fonksiyon
void globalDegeriGoster();                 // global deðiþkeni kullanýr

int global_sayi = 100; // Global deðiþken

int main() {
    int x = 5, y = 3;
    int toplam;

    hosgeldinMesaji(); // void fonksiyon çaðrýsý

    toplam = topla(x, y); // parametreli fonksiyon
    yazdir(toplam);

    printf("%d sayisinin faktoriyeli: %d\n", x, faktoriyel(x));

    globalDegeriGoster();

    return 0;
}

// Fonksiyon tanýmý
int faktoriyel(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktoriyel(n - 1); // Özyineleme (recursion)
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
