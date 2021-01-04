#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int sira = 0, bilet[7], sayi, i, ilkRakam = 0;
    srand(time(NULL));

    while (sira <= 6) {
        sayi = rand() % 10;

        if (sayi == 0 && ilkRakam == 0) {
        } else {
            if (ilkRakam == 0) {
                bilet[sira] = sayi;
                ilkRakam = 1;
                sira++;
            } else {
                for (i = 0; i < sira; i++) {
                    if (bilet[i] == sayi) {
                        i = sira;
                    } else if (i == sira - 1) {
                        bilet[sira] = sayi;
                        sira++;
                    }
                }
            }
        }
    }
    for (i = 0; i < 7; i++)
        printf("%d", bilet[i]);

    getchar();
    return 0;
}