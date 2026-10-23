#include <stdio.h>
#include <stdlib.h>

int main() {
    char wayaee[3][5] = {"_ . _", ", - ,", "_ . _"};

    void PrintTheMap() {

        

        for(int row = 0; row < 3; row++) {
            printf ("\n");
            for (int column = 0; column < 5; column++) {
                printf ("%c", wayaee[row][column]);
            }
        }

    }
    PrintTheMap();

    printf("\n\nPlayer 1, Pilih (x/o) : "); char P_1 = getchar(), P_2;
    switch(P_1) {
        case 'x' :
        P_2 = 'o'; break;

        case 'o' :
        P_2 = 'x'; break;

        default :
        printf("Karena player tidak pintar memilih, x akan digunakan untuk player 1 dan o untuk player 2\n");
        P_1 = 'x'; P_2 = 'o'; break;

    }
    printf("Player 1 memilih %c, Player 2 akan menggunakan %c", P_1, P_2);
    

    int P1turn() {
        int Barris, Kollom;
            
        

        printf("\n\nPlayer 1, Tambahkan %c pada (Baris,Kolom) : ", P_1); scanf("%i,%i", &Barris, &Kollom);
        
        int MapCorY = --Barris, MapCorX;
        switch(Kollom) {
            case 1 :
            MapCorX = 0; break;

            case 2 :
            MapCorX = 2; break;

            case 3 :
            MapCorX = 4; break;

            default : 
            printf("Masukkan Kordinat yang benar!"); break;

        }

        switch(wayaee[MapCorY][MapCorX]) {
            case 'x' :
            printf("Kordinat Sudah ditempati"); break;

            case 'o' :
            printf("Kordinat Sudah ditempati"); break;

            default :
            wayaee[MapCorY][MapCorX] = P_1;
            PrintTheMap(); break;
        }
        
        
        
        
        

    }

    int P2turn() {
        int Barris, Kollom;
            
        

        printf("\n\nPlayer 2, Tambahkan %c pada (Baris,Kolom) : ", P_2); scanf("%i,%i", &Barris, &Kollom);
        
        int MapCorY = --Barris, MapCorX;
        switch(Kollom) {
            case 1 :
            MapCorX = 0; break;

            case 2 :
            MapCorX = 2; break;

            case 3 :
            MapCorX = 4; break;

            default : 
            printf("Masukkan Kordinat yang benar!"); P2turn(); break;

        }

        switch(wayaee[MapCorY][MapCorX]) {
            case 'x' :
            printf("Kordinat Sudah ditempati"); P2turn(); break;

            case 'o' :
            printf("Kordinat Sudah ditempati"); P2turn(); break;

            default :
            wayaee[MapCorY][MapCorX] = P_2;
            PrintTheMap(); break;
        }
        
        
        

    }


    



    for(int turn = 1; turn < 10; turn++) {
        if(turn % 2 == 0) {P2turn();} else {P1turn();}
        int Bwasok = turn % 2;

        if (wayaee[0][0] == wayaee[1][0] && wayaee[1][0] == wayaee[2][0]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[0][2] == wayaee[1][2] && wayaee[1][2] == wayaee[2][2]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[0][4] == wayaee[1][4] && wayaee[1][4] == wayaee[2][4]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[0][0] == wayaee[0][2] && wayaee[0][2] == wayaee[0][4]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[1][0] == wayaee[1][2] && wayaee[1][2] == wayaee[1][4]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[2][0] == wayaee[2][2] && wayaee[2][2] == wayaee[2][4]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[0][0] == wayaee[1][2] && wayaee[1][2] == wayaee[2][4]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        } else if (wayaee[0][4] == wayaee[1][2] && wayaee[1][2] == wayaee[2][0]) {
            switch(Bwasok) {
                case 0 :
                printf("\n\nPlayer 2 menang yeey");
                break;

                default : 
                printf("\n\nPlayer 1 menang yeey");
                break;
            }
            break;
        }
    }

    
    
    






    return 0;
}