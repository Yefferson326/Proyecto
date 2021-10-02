#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para la funcion exit
#include <ctype.h> // para Toupper
#include <stdbool.h>
#include "Mensajes.c"

void playTriki ();
void fillFirstMatrix  (char  matrix [3][3]);
void board (char  matrix [3][3]);
void userPlay (char matrix [3][3]);
int checkXorO (char matrix [3][3] , char userTurn, int row, int columns);
void machinePlay (char matrix [3][3]);
void instruccionsTriki();
int checkWinnerOrLoser (char matrix [3][3]);



void gameTriki (){
    int beginning;
    do{
        system ("cls");
        printf("\tTRIKI\n\n");
        pictureTriki();
        printf("\n\n");
        printf("1.Jugar\n2.Explicame de que se trata\n3.Salirme\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        fflush (stdin);
        
        if (beginning == 1){
            playTriki();
        }else if(beginning == 2){
            instruccionsTriki ();
        }else if (beginning == 3){

        }else{
            printf("Opcion incorrecta\n");
            system("pause");
        }
    }while(beginning != 3);
}

/////////////////////////FUNCIONES JUEGO TRIKI/////////////////////////    
void playTriki (){

    system("cls");
    printf ("TRES EN RAYA (TRIKI)\n\n");
    int i,exit;
    char  matrix [3][3];

    exit = false;
    fillFirstMatrix(matrix);

    for (i = 0; i <= 9; i ++){
    
        system("cls");
        if (i % 2 == 0){
            printf("\t\t%c%c%cTU TURNO!!!\n\n",173,173,173);
            board (matrix);
            userPlay (matrix);
        }else{
            printf("\t\t%c%c%cTURNO DE LA MAQUINA!!!\n\n",173,173,173);
            board (matrix);
            machinePlay (matrix);
            system("pause");
        }
        exit = checkWinnerOrLoser(matrix);
        if(exit == 1 || exit == 2){
            break;
        }
    }
    if (exit != 1 && exit != 2){
    printf("\n\n%c%c%cHAS EMPATADO!!!\nIntentalo de nuevo");
    }
}
void fillFirstMatrix  (char  matrix [3][3]){
    int i, j;
    char initialLetter;
    initialLetter = 'A';

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            matrix [i][j] = initialLetter ++;
        }
    }

}
void board (char  matrix [3][3]){
    int row,columns;

    for (row = 0; row < 3; row++){
        for ( columns = 0; columns < 3; columns++){
            if (columns < 1){
                printf("\t\t  %c %c",matrix[row][columns],186);
            }else if(columns >= 1 && columns < 2){
                printf (" %c %c",matrix [row][columns],186);
            }else{
                printf (" %c ", matrix [row][columns]);
            }
        }
        
    if (row < 2 || columns < 2){
        printf("\n\t\t %c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    }
    }
    printf("\n\n");
}
void userPlay (char matrix [3][3]){
int row,columns,repeat;
char userTurn;
do{
     do{
         printf("Selecciona la letra donde quieras colocar tu ficha: ");
         fflush(stdin);
         scanf("%c",&userTurn);
         userTurn = toupper(userTurn);
         if (userTurn <'A' || userTurn > 'I'){
             printf("\n\n%c%cCasilla no encontrada!!\n   Elige otra casilla\n\n",173,173);
         }
     }while (userTurn <'A' || userTurn > 'I');
    
    repeat = 0;
    if (userTurn == 'A'){
        row = 0;
        columns = 0;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'B'){
        row = 0;
        columns = 1;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'C'){
        row = 0;
        columns = 2;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'D'){
        row = 1;
        columns = 0;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'E'){
        row = 1;
        columns = 1;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'F'){
        row = 1;
        columns = 2;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'G'){
        row = 2;
        columns = 0;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'H'){
        row = 2;
        columns = 1;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }else if (userTurn == 'I'){
        row = 2;
        columns = 2;
        repeat = checkXorO (matrix ,userTurn,row,columns);
    }
    matrix [row][columns] = 'X';
}while(repeat == 1);
}
int checkXorO (char matrix [3][3] , char userTurn, int row, int columns){
    if (matrix [row][columns]  == 'X' || matrix [row][columns]  == 'O'){
            printf("\t%c%cCASILLA %c OCUPADA!!\n\tIntenta en otra casilla\n\n",173,173,userTurn);
            system("pause");
            return 1;
    }
}
void machinePlay (char matrix [3][3]){
    int row,columns,repeat;
    char machineTurn;

    srand(time(NULL)); //se genera una semilla

    do{
        row = rand() % 3;
        columns = rand() % 3;
        repeat = 0;

        if (matrix[row][columns] == 'X' || matrix [row][columns] == 'O'){
           repeat = 1;
        }
    }while(repeat == 1);
    printf("La maquina colocara su ficha en la posicion %c\n\n",matrix[row][columns]);
    matrix[row][columns] = 'O';
}


int checkWinnerOrLoser (char matrix [3][3]){
    if (matrix[0][0] == matrix [0][1] && matrix[0][1] == matrix [0][2]){
        if(matrix[0][0] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if(matrix[1][0] == matrix [1][2] && matrix[1][1] == matrix [1][2]){
        if(matrix[1][0] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if(matrix[2][0] == matrix [2][1] && matrix[0][1] == matrix [2][2]){
        if(matrix[2][0] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if (matrix[0][0] == matrix [1][0] && matrix[1][0] == matrix [2][0]){
        if(matrix[0][0] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if (matrix[0][1] == matrix [1][1] && matrix[1][1] == matrix [2][1]){
        if(matrix[0][1] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if (matrix[0][2] == matrix [1][2] && matrix[1][2] == matrix [2][2]){
        if(matrix[0][2] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if (matrix[0][0] == matrix [1][1] && matrix[1][1] == matrix [2][2]){
        if(matrix[0][0] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }else if (matrix[0][2] == matrix [1][1] && matrix[1][1] == matrix [2][0]){
        if(matrix[0][2] == 'X'){
            system ("cls");
            messageWin();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 1;
        }else{
            system ("cls");
            messageLose();
            printf("\n\n");
            board (matrix);
            printf("\n\n");
            system("pause");
            return 2;
        }
    }

}
void instruccionsTriki(){
    system ("cls");
    printf("\n\tINSTRUCCIONES\n\t<<<TRIKI>>>\n\n");
    pictureTriki();
    printf("\n\n%cEn esta version del juego, no te enfrentaras contra la inteligencia de una maquina sino contra la suerte!\nEl objetivo de este juego es formar una linea de tres a partir de las fichas que vayas colocando, e intentar que no lo consiga la maquina.\nEn esta version para poner tu ficha deberas selecionar la letra de la casilla donde\nquieres jugar como se muestra en la siguiente imagen:\n\n",173);
    printf("\t\t A %c B %c C\n",186,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("\t\t D %c E %c F\n",186,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("\t\t G %c H %c I\n\n",186,186);
    printf("\t\tSUERTE =)\n");
    system("pause");
 }






