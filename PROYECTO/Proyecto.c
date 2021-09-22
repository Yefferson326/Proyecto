#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para la funcion exit
#include <conio.h>

void pictureAhorcado (){
    printf("         %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
    printf("         %c        %c%c%c\n",186,201,202,187);
    printf("         %c        %c%c%c\n",186,200,203,188);
    printf("         %c       %c%c%c%c%c\n",186,201,205,206,205,187);
    printf("         %c         %c\n",186,186);
    printf("         %c        %c%c%c\n",186,201,202,187);
    printf("         %c\n",186);
    printf("       %c%c%c%c%c\n",205,205,202,205,205);
}

void pictureTriki (){
    printf("      %c %c %c %c\n",88,186,79,186);
    printf("     %c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("      %c %c %c %c\n",79,186,88,186);
    printf("     %c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
    printf("        %c %c %c %c\n",186,79,186,88);
}

void pictureNim (){
    printf("      %c%c%c%c%c%c%c%c\n",201,188,92,47,47,92,200,187);
    printf("      %c%c %c %c%c%c\n",186,47,92,47,92,186);
    printf("      %c%c %c%c %c%c\n",186,92,92,92,47,186);
    printf("      %c%c%c %c %c%c\n",186,47,92,47,47,186);
    printf("      %c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,188);
}

int checkOutputGame (){
    int Game;
    printf("Quieres quieres hacer:\n1.Cambiar de juego\n2.Salir de la aplicacion\nSeleccione una opcion:");
    scanf("%d",&Game);
    return Game;
}

void gameAhorcado (){
    int beginning;
    do{
        printf("       AHORCADO\n1.Jugar\n2.Explicame de que se trata\n3.Salir\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        
        switch (beginning){
        case 1:

            break;
        
        case 2:
            instruccionsAhorcado();
            break;
            
        }
    }while(beginning != 3);
    exit(0);
}   
    int instruccionsAhorcado (){
    
        printf("     INSTRUCCIONES\nEste juego es de uno de los clasicos\nSe trata de adivinar la palabra incognita sin llegar al numero maximo de intentos(6) para evitar asi ahorcar al personaje\nEs decir si consigues evitar llegar a este punto\n");
        pictureAhorcado();
        printf("Despues de haber encontrado la palabra oculta\n       ***********GANAS***********\n");
        system("pause");    
    }
    void playGame (){

    }
    void categoryWords (){

    }

void gameTriki (){
    
}

void gameNim (){
    
}

int main(){

int Game,repeat;
printf("                 BIENVENIDO\n");
do{
    printf("%cQue quieres jugar hoy?\n1.AHORCADO\n",168);
        pictureAhorcado();
    printf("2.TRES EN RAYA (TRIKI)\n");
        pictureTriki();
    printf("3.JUEGO DE NIM\n");
        pictureNim();
    printf("Selecione una opcion:");
    scanf("%d", &Game);

    switch (Game){
        case 1:
            gameAhorcado();
            repeat = checkOutputGame(); 
        break;
        case 2:
            repeat = checkOutputGame();
        break;
        case 3:
            repeat = checkOutputGame();
        break;
    }
}while (repeat == 1);
return 0;
}
