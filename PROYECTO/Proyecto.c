#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para la funcion exit
#include <conio.h>
void messageLose (){
    printf("\n %c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c%c  %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c",201,205,205,205,205,187,201,205,205,205,205,201,205,205,205,205,187,201,205,187,205,205,203,205,205,201,205,205,205,205,205,205,203,205,205,201,205,205,205,205);
    printf("\n %c    %c %c     %c    %c %c %c%c   %c   %c       %c   %c",186,186,186,186,186,186,200,187,186,186,186,186);
    printf("\n %c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c  %c   %c   %c%c%c%c%c   %c   %c%c%c%c%c",204,205,205,205,205,188,204,205,205,205,205,204,205,205,203,205,188,186,186,186,200,205,205,205,187,186,204,205,205,205,205);
    printf("\n %c      %c     %c  %c%c  %c %c%c   %c       %c   %c   %c",186,186,186,200,187,186,201,188,186,186,186,186);
    printf("\n %c      %c%c%c%c%c %c   %c%c %c%c%c  %c%c%c%c%c %c%c%c%c%c   %c   %c%c%c%c%c\n\n",186,200,205,205,205,205,186,200,187,200,205,188,205,205,202,205,205,205,205,205,205,188,186,200,205,205,205,205);

}
void messageWin (){
    printf("\n %c%c%c%c%c %c%c%c%c%c%c %c%c    %c %c%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c %c%c%c%c%c",201,205,205,205,205,201,205,205,205,205,187,201,187,186,201,205,205,205,205,187,201,205,205,205,205,205,205,203,205,205,201,205,205,205,205);
    printf("\n %c     %c    %c %c%c%c   %c %c    %c %c       %c   %c",186,186,186,186,200,187,186,186,186,186,186,186);
    printf("\n %c     %c    %c %c %c%c  %c %c    %c %c       %c   %c",186,186,186,186,200,187,186,186,186,186,186,186);
    printf("\n %c%c%c%c%c %c%c%c%c%c%c %c  %c%c %c %c%c%c%c%c%c %c%c%c%c%c   %c   %c%c%c%c%c",204,205,205,205,187,204,205,205,205,205,185,186,200,187,186,204,205,205,205,205,185,200,205,205,205,187,186,204,205,205,205,205);
    printf("\n %c   %c %c    %c %c   %c%c%c %c    %c     %c   %c   %c",186,186,186,186,186,200,187,186,186,186,186,186,186);
    printf("\n %c%c%c%c%c %c    %c %c    %c%c %c    %c %c%c%c%c%c   %c   %c%c%c%c%c\n\n",200,205,205,205,188,186,186,186,200,188,186,186,205,205,205,205,188,186,200,205,205,205,205);

}
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
        printf("\t\t\tAHORCADO\n1.Jugar\n2.Explicame de que se trata\n3.Salirme\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        fflush (stdin);
        
        if (beginning == 1){
            categoryWords();
        }else if(beginning == 2){
            instruccionsAhorcado();
        }else if (beginning == 3){

        }else{
            printf("Opcion incorrecta\n");
            system("pause");
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
    void playGameAhorcado (char words [][30],char category []){
        int i,h,numberRandom,numberOfCaracters,points = 600,opportunities = 6,hiddenCharacters;
        char userLetter;
        srand (time(NULL));
        numberRandom = rand ()%10;
        numberOfCaracters = strlen (words[numberRandom]);
        char sentence [numberOfCaracters]; //se esta definiendo un string a partir del numero de caracteres que se tiene en la palabra oculta

        for(i = 0; i < numberOfCaracters; i ++){
            sentence [i] = '_'; //se le esta definiendo a cada caracter de la cadena de caracteres que sea igual a _
        }


        do{
            int hits = 0;
            system ("cls");
            printf("\t\t\t************COMENZEMOS**************\nCATEGORIA: %s\t\t\t\t\t TE QUEDAN %d INTENTOS\n\n",category,opportunities);
            printf("TU PUNTUACION ES DE: %d\n",points);
            picturesGameAhorcado(opportunities);

            printf("\n\n\n");
            for(i = 0; i < numberOfCaracters; i ++){
            printf (" %c ",sentence[i]); //se esta imprimiendo el valor de cada una de la posicion de la palabra oculta que puede ser una _ si no la ha adivinado o la letra si ya la ha adivinado
            }

            if (opportunities != 0){ //se coloca este if para que cuando las oportunidades lleguen a 0, este mensaje no se vuelva a mostrar, ya que sino quedaria incoherente el programa
            printf ("\n\nIngrese una letra (EN MAYUSCULA) que crea que puede estar dentro de la palabra:");
            scanf ("%c",&userLetter);
            fflush (stdin); //limpia el buffer y generalmente se coloca para evitar errores al momento de correr el programa
            }
            
            for (h = 0; h < numberOfCaracters; h ++){
                if (userLetter == words[numberRandom][h]){ //me compara si la letra ingresada por el usuario es igual a cada una de la posiciones de las letras de la palabra que se elegio a partir del numero random
                    sentence[h] = userLetter; //si esto es verdadero la posicion del caracter que tenia al principo el valor de '_' pasa a ser la letra que ingreso el usuario
                    hits ++; //aumneta en uno los aciertos
                }
            }
 
            if (opportunities == 0){ 
                printf("\n\n");
                messageLose ();
                printf("\t\tLA PALABRA OCULTA ERA %s\n\n", words[numberRandom]);
                system("pause");
                
            }

            
            hiddenCharacters = 0; 
            for (i = 0; i < numberOfCaracters; i ++){ //el ciclo recorre la palabra letra por letra
                if (sentence[i] == '_'){ // comprueba si cada uno de los caracteres es igual a '_' si es verdadero aumenta en uno la variable de caracteres ocultos ya que esto indica que a el jugador le faltan letras por encontrar
                    hiddenCharacters ++;
                }
            }

            if (hiddenCharacters == 0){ // a partir de ciclo anterior, considera que ya no existe ningun caracter oculto representado por '_' significa que ele jugador a conseguido adivinar la palabra y se mostrara el mensaje ganador
                printf("\n\n");
                messageWin ();
                system("pause");
            
            }

            if (hits == 0){    // a partir de la linea de codigo 117 si considera que la persona no acerto ninguna letra, supondria que hits no va aumnetar su valor, por tanto estariamos hablando de un fallo y es por eso que la oportunidades decrementan en 1 al igual que el puntaje decrementa en 100
                opportunities --;
                points = points - 100;
            }
    
            
        }while (opportunities >= 0); //todo esto se va a repetir si las oportunidades son iguales o mayores a 0
    
    }
    void categoryWords (){
        int opcionCategory;
        system ("cls");
            printf("\t\t\t\tCATEGORIAS\nLas siguientes categorias te serviran como pistas para poder acertar la palabra oculta:\n1.Materiales de escuela\n2.Deportes\n3.Peliculas\n4.VideoJuegos\n5.Verduras\n");
            printf("Escoge una de las categorias para comenzar a jugar:");
            scanf("%d",&opcionCategory);
            fflush (stdin);
        
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
                categoryWords();
        }
        
    }
    void words (int opcionCategory){
        char categorys [5][30] = {"Materiales de escuela","Deportes","Peliculas","VideoJuegos","Comidas rapidas"};
        char schoolSupplies [10][30] = {"CUADERNO","LAPIZ","BORRADOR","ESFEROS","CALCULADORA","REGLA","LIBROS","CORRECTOR","TIJERAS","COMPAS"};
        char sports [10][30] = {"FUTBOL","TENIS","BALONCESTO","VOLEIBOL","NATACION","ATLETISMO","LUCHA","GOLF","TAEKWONDO","CICLISMO"};
        char films [10][30] = {"UP","SHREK","DEADPOOL","FROZEN","MULAN","RATATOUILLE","TARZAN","TURBO","IT","JOKER"};
        char videoGames [10][30] = {"MINECRAFT","FORNITE","PUGB","ZELDA","ROBLOX","FIFA","RUST","HALO","FARCRY","SONIC"};
        char vegetables [10][30] = {"AGUACATE","ZANAHORIA","COLIFLOR","LECHUGA","PEPINO","CEBOLLA","TOMATE","APIO","CALABAZA","PIMENTON"};


        if (opcionCategory == 1){
            playGameAhorcado (schoolSupplies,categorys[opcionCategory-1]);
        }else if (opcionCategory == 2){
            playGameAhorcado (sports,categorys[opcionCategory-1]);
        }else if (opcionCategory == 3){
            playGameAhorcado (films,categorys[opcionCategory-1]);
        }else if (opcionCategory == 4){
            playGameAhorcado (videoGames,categorys[opcionCategory-1]);
        }else if (opcionCategory == 5){
            playGameAhorcado (vegetables,categorys[opcionCategory-1]);
        }
    }
    void picturesGameAhorcado (int opportunities){
        if (opportunities == 6){
            printf("      %c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,187);
            printf("      %c\n",186);
            printf("      %c\n",186); 
            printf("      %c\n",186);
            printf("      %c\n",186);        
            printf("      %c\n",186);
            printf("      %c\n",186);
            printf("    %c%c%c%c%c\n",205,205,202,205,205);
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
do{
    system ("cls");
    printf("\t\t\t\tBIENVENIDO\n");
    printf("%cQue quieres jugar hoy?\n1.AHORCADO\n",168);
        pictureAhorcado();
    printf("2.TRES EN RAYA (TRIKI)\n");
        pictureTriki();
    printf("3.JUEGO DE NIM\n");
        pictureNim();
    printf("Selecione una opcion:");
    scanf("%d", &Game);
    fflush (stdin);

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
