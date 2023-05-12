#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    double rand_num;

    //initialize random seed
    srand(time(NULL));

    //menghasilkan 10 angka acak antara 0 dan 1
    printf("Nilai random dalam [0, 1]:\n");

    for (int i = 0; i < 10; i++) {
        rand_num = (double)rand() / RAND_MAX;
        printf("%f\n", rand_num);
    }

    _getch();
    return 0;
}