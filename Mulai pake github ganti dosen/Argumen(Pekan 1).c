#include <stdio.h> #include <stdlib.h>

int main (int argc, char *argv[]) {
    char *nama1 = "songkeng", *nama2 = "sabang", *nama3 = "pade";
    if (argc < 4) {
        printf ("Argumen kurang\nTambahkan argumen seperti : %s %S %S\n", argv[0], nama1, nama2, nama3); 
        return -1;
    }
    printf("Halo %s\n %s\n %s\n", argv[1], argv[2], argv[3]);
    return 0;

}
