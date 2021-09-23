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
    system ("cls");
    printf("Quieres quieres hacer:\n1.Cambiar de juego\n2.Salir de la aplicacion\nSeleccione una opcion:");
    scanf("%d",&Game);
    return Game;
}

void gameAhorcado (){
    int beginning;
    do{
        system ("cls");
        printf("\t\t\tAHORCADO\n1.Jugar\n2.Explicame de que se trata\n3.Salir\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        
        switch (beginning){
        case 1:
            categoryWords();
            break;
        
        case 2:
            instruccionsAhorcado();
            break;
            
        }
    }while(beginning != 3);
}   
    void instruccionsAhorcado (){
        system ("cls");
        printf("\t\tINSTRUCCIONES\nEste juego es de uno de los clasicos\nSe trata de adivinar la palabra incognita sin llegar al numero maximo de intentos(6) para evitar asi ahorcar al personaje\nEs decir si consigues evitar llegar a este punto\n");
        pictureAhorcado();
        printf("Despues de haber encontrado la palabra oculta\n\t***********GANAS***********\n");
        system("pause");    
    }
    void playGame (char words [][10],char category []){
        int i,numberRandom,numberOfCaracters,points = 600,opportunities = 6;
        srand (time(NULL));
        numberRandom = rand ()%10;
        numberOfCaracters = strlen (words[numberRandom]);
        char sentence [numberOfCaracters]; //se esta definiendo un string a partir del numero de caracteres que se tiene en la palabra oculta

        for(i = 0; i < numberOfCaracters; i ++){
            sentence [i] = '_'; //se le esta definiendo a cada caracter de la cadena de caracteres que sea igual a _
        }


        do{
            system ("cls");
            printf("\t\t\t************COMENZEMOS**************\nCATEGORIA: %s\t\t\t\t\t TE QUEDAN %d INTENTOS\n\n",category,opportunities);
            printf("TU PUNTUACION ES DE: %d\n",points);
            picturesGameAhorcado(opportunities);

            printf("\n\n\n");
            for(i = 0; i < numberOfCaracters; i ++){
            printf (" %c ",sentence[i]);
            }
        }while (opportunities < 0);
    }
    void categoryWords (){
        int opcionCategory;
        system ("cls");
        do{
        printf("\t\t\t\tCATEGORIAS\nLas siguientes categorias te serviran como pistas para poder acertar la palabra oculta:\n1.Materiales de escuela\n2.Deportes\n3.Peliculas\n4.VideoJuegos\n5.Verduras\n");
        printf("Escoge una de las categorias para comenzar a jugar:");
        scanf("%d",&opcionCategory);
        
        if (opcionCategory == 1) {
            words(opcionCategory);
        }else if (opcionCategory == 2){
            words(opcionCategory);
        }else if (opcionCategory == 3){
            words(opcionCategory);
        }else if (opcionCategory == 4){
            words(opcionCategory);
        }else if (opcionCategory == 5){
            words(opcionCategory);
        }else{
            printf("\t\t\tValor incorrecto\n\t\t\tNo se encuentra esa seleccion\n");
        }
        }while(opcionCategory);
    }
    void words (int opcionCategory){
        char categorys [5][30] = {"Materiales de escuela","Deportes","Peliculas","VideoJuegos","Comidas rapidas"};
        char schoolSupplies [10][30] = {"CUADERNO","LAPIZ","BORRADOR","ESFEROS","CALCULADORA","REGLA","LIBROS","CORRECTOR","TIJERAS","COMPAS"};
        char sports [10][30] = {"FUTBOL","TENIS","BALONCESTO","VOLEIBOL","NATACION","ATLETISMO","LUCHA","GOLF","TAEKWONDO","CICLISMO"};
        char films [10][30] = {"UP","SHREK","DEADPOOL","FROZEN","MULAN","RATATOUILLE","TARZAN","TURBO","IT","JOKER"};
        char videoGames [10][30] = {"MINECRAFT","FORNITE","PUGB","ZELDA","ROBLOX","FIFA","RUST","HALO","FARCRY","SONIC"};
        char vegetables [10][30] = {"AGUACATE","ZANAHORIA","COLIFLOR","LECHUGA","PEPINO","CEBOLLA","TOMATE","APIO","CALABAZA","PIMENTON"};

        if (opcionCategory == 1){
            playGame (schoolSupplies,categorys[opcionCategory-1]);
        }else if (opcionCategory == 2){
            playGame (sports,categorys[opcionCategory-1]);
        }else if (opcionCategory == 3){
            playGame (films,categorys[opcionCategory-1]);
        }else if (opcionCategory == 4){
            playGame (videoGames,categorys[opcionCategory-1]);
        }else if (opcionCategory == 5){
            playGame (vegetables,categorys[opcionCategory-1]);
        }
    }
    void picturesGameAhorcado (int opportunities){
        if (opportunities == 6){
            printf("\t\t\t      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("\t\t\t      %c\n",186);
            printf("\t\t\t      %c\n",186); 
            printf("\t\t\t      %c\n",186);
            printf("\t\t\t      %c\n",186);        
            printf("\t\t\t      %c\n",186);
            printf("\t\t\t      %c\n",186);
            printf("\t\t\t    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 5){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188); 
            printf("      %c\n",186);
            printf("      %c\n",186);        
            printf("      %c\n",186);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 4){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188);
            printf("      %c         %c\n",186,206);
            printf("      %c         %c\n",186,186);
            printf("      %c         %c\n",186,202);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 3){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);            
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188);
            printf("      %c       %c%c%c%c\n",186,201,205,206,205);
            printf("      %c         %c\n",186,186);
            printf("      %c         %c\n",186,202);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 2){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188);
            printf("      %c       %c%c%c%c%c\n",186,201,205,206,205,187);
            printf("      %c         %c\n",186,186);
            printf("      %c         %c\n",186,202);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 1){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188);
            printf("      %c       %c%c%c%c%c\n",186,201,205,206,205,187);
            printf("      %c         %c\n",186,186);
            printf("      %c        %c%c\n",186,201,202);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 1){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188);
            printf("      %c       %c%c%c%c%c\n",186,201,205,206,205,187);
            printf("      %c         %c\n",186,186);
            printf("      %c        %c%c\n",186,201,202);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }else if (opportunities == 0){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c        %c%c%c\n",186,200,203,188);
            printf("      %c       %c%c%c%c%c\n",186,201,205,206,205,187);
            printf("      %c         %c\n",186,186);
            printf("      %c        %c%c%c\n",186,201,202,187);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
        }
    
    }
void gameTriki (){
    
}

void gameNim (){
    
}

int main(){

int Game,repeat;
system ("cls");
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
    system ("cls");
}while (repeat == 1);
return 0;
}
