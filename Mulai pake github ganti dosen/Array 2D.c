#include <stdio.h>
#include <stdlib.h>

int main() {
    char wayaee[3][5] = {"x o x", "o x o", "x o x"};

    int row, column;

    for(row = 0; row < 3; row++) {
        printf ("\n");
        for (column = 0; column < 5; column++) {
            printf ("%c", wayaee[row][column]);
        }

        
    }



    return 0;
}