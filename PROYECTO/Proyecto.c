#include <stdio.h>
void drawAhorcado (){
    printf("         %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
    printf("         %c        %c%c%c\n",186,201,202,187);
    printf("         %c        %c%c%c\n",186,200,203,188);
    printf("         %c       %c%c%c%c%c\n",186,201,205,206,205,187);
    printf("         %c         %c\n",186,186);
    printf("         %c        %c%c%c\n",186,201,202,187);
    printf("         %c\n",186);
    printf("       %c%c%c%c%c\n",205,205,202,205,205);
}
void drawTriki (){
printf("      %c %c %c %c\n",88,186,79,186);
printf("     %c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
printf("      %c %c %c %c\n",79,186,88,186);
printf("     %c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,206,205,205,205,206,205,205,205);
printf("        %c %c %c %c\n",186,79,186,88);
}
void drawNim (){
printf("      %c%c%c%c%c%c%c%c\n",201,188,92,47,47,92,200,187);
printf("      %c%c %c %c%c%c\n",186,47,92,47,92,186);
printf("      %c%c %c%c %c%c\n",186,92,92,92,47,186);
printf("      %c%c%c %c %c%c\n",186,47,92,47,47,186);
printf("      %c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,188);
}
int main(){

int Game;
printf("                 BIENVENIDO\n");
printf("%cQue quieres jugar hoy?\n1.AHORCADO\n",168);
    drawAhorcado();
printf("2.TRES EN RAYA (TRIKI)\n");
    drawTriki();
printf("3.JUEGO DE NIM\n");
    drawNim();
printf("Selecione una opcion:");
scanf("%d", &Game);

switch (Game){
    case 1:
        
    break;
    case 2:
        
    break;
    case 3:
        
    break;
}
    return 0;
}

int checkOutputGame (){
    int Game;
    printf("Quieres cambiar de juego\n1.NO\n2.SI\nSeleccione una opcion:");
    scanf("%d",&Game);
    return Game;
}

void gameAhorcado (){
    
}

void gameTriki (){
    
}

void gameNim (){
    
}