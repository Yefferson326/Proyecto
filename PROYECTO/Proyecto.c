#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para la funcion exit
#include <ctype.h> // para Toupper
#include <time.h> // Para los numeros aleatorios 
#include "Juego_ahorcado.c"
#include "juego_triki.c"
#include "Juego_De_Nim.c"
#include "Mensajes.c"




int main(){

int game,repeat;
do{ 
    messageWelcome();
    printf("\n%cQue quieres jugar hoy?\n\n1.AHORCADO\n",168);
    pictureAhorcado();
    printf("\n");
    printf("2.TRES EN RAYA (TRIKI)\n");
    pictureTriki();
    printf("\n");
    printf("3.JUEGO DE NIM\n");
    pictureNim();
    printf("\n");
    printf("Selecione una opcion:");
    scanf("%d", &game);
    fflush (stdin);

    if (game == 1){
        gameAhorcado();
        repeat = checkOutputGame(); 
    }else if (game == 2){ 
        gameTriki();
        repeat = checkOutputGame();
    }else if (game == 3){
        gameNim();
        repeat = checkOutputGame();
    }else{
        printf("\n%c%cOpcion Invalida%c%c\n\n",177,177,177,177);
        system("pause");
    }
    system ("cls");
}while (repeat == 1);
return 0;
}
