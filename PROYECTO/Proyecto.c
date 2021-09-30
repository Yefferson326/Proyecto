#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para la funcion exit
#include <conio.h>
#include <ctype.h> // para Toupper

////////FUNCIONES GENERALES//////////
void messageWelcome (){
    printf("\t _____                                                     _\n");
    printf("\t|  _  %c  _                                         _      | |\n",92);
    printf("\t| |_| | |_|                                       |_|     | |\n"); 
    printf("\t|     /  _    ____  _     __    __  ____   _       _   ___| |  _____\n");
    printf("\t|  _  %c | |  / _  %c| |___ %c %c  / / / _  %c | |___  | | /  _  | |  _  |\n",92,92,92,92,92);
    printf("\t| |_| | | | |  ___/|  _  | %c %c/ / |  ___/ |  _  | | | | |_| | | |_| |\n",92,92);
    printf("\t|_____/ |_| %c_____||_| |_|  %c__/  %c_____| |_| |_| |_| %c_____| |_____|\n",92,92,92,92);
}
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

void pictureBuscaminas (){
    printf("            _\n");
    printf("         __|_|__\n");
    printf("        /       %c\n",92);
    printf("       /         %c\n",92);
    printf("     _|     _     |_\n");
    printf("    |_|    |_|    |_|\n");
    printf("      |           |\n");
    printf("       %c         /\n",92);
    printf("        %c_______/\n",92);
    printf("           |_|\n");
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
/////////////////FUNCIONES JUEGO AHORCADO//////////////////
void gameAhorcado (){
    int beginning;
    do{
        system ("cls");
        printf("\tAHORCADO\n\n");
        pictureAhorcado();
        printf("\n\n");
        printf("1.Jugar\n2.Explicame de que se trata\n3.Salirme\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        fflush (stdin);
        
        if (beginning == 1){
            categoryWords();
        }else if(beginning == 2){
            instruccionesAhorcado();
        }else if (beginning == 3){

        }else{
            printf("Opcion incorrecta\n");
            system("pause");
        }
    }while(beginning != 3);
}   
    void instruccionesAhorcado (){
        system ("cls");
        printf("\t\tINSTRUCCIONES\n\t\t<<<AHORCADO>>>\n\nEste juego es de uno de los clasicos\nSe trata de adivinar la palabra incognita sin llegar al numero maximo de intentos(6) para evitar asi ahorcar al personaje\nEs decir si consigues evitar llegar a este punto\n\n");
        pictureAhorcado();
        printf("Despues de haber encontrado la palabra oculta\n\t***********GANAS***********\n");
        system("pause");    
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
        char* categorys [5];
        categorys [0]  = "Materiales de escuela";
        categorys [1]  = "Deportes";
        categorys [2]  = "Peliculas";
        categorys [3]  = "VideoJuegos";
        categorys [4] = "Verduras";
                                
        char* schoolSupplies [10];
        schoolSupplies [0] = "CUADERNO";
        schoolSupplies [1] = "LAPIZ";
        schoolSupplies [2] = "BORRADOR";
        schoolSupplies [3] = "ESFEROS";
        schoolSupplies [4] = "CALCULADORA";
        schoolSupplies [5] = "REGLA";
        schoolSupplies [6] = "LIBROS";
        schoolSupplies [7] = "TIJERAS";
        schoolSupplies [8] = "COMPAS";
        schoolSupplies [9] = "CORRECTOR";

        char* sports [10];
        sports [0] = "FUTBOL";
        sports [1] = "TENIS";
        sports [2] = "BALONCESTO";
        sports [3] = "VOLEIBOL";
        sports [4] = "NATACION";
        sports [5] = "ATLETISMO";
        sports [6] = "GOLF";
        sports [7] = "TAEKWONDO";
        sports [8] = "CICLISMO";
        sports [9] = "LUCHA";

        char* films [10];
        films [0] = "UP"; 
        films [1] = "SHREK"; 
        films [2] = "DEADPOOL"; 
        films [3] = "FROZEN"; 
        films [4] = "MULAN"; 
        films [5] = "RATATOUILLE"; 
        films [6] = "TARZAN"; 
        films [7] = "TURBO"; 
        films [8] = "IT"; 
        films [9] = "JOKER"; 

        char* videoGames [10];
        videoGames [0] = "MINECRAFT";
        videoGames [1] = "FORNITE";
        videoGames [2] = "PUGB";
        videoGames [3] = "ZELDA";
        videoGames [4] = "ROBLOX";
        videoGames [5] = "FIFA";
        videoGames [6] = "RUST";
        videoGames [7] = "HALO";
        videoGames [8] = "FARCRY";
        videoGames [9] = "SONIC";

        char* vegetables [10];
        vegetables [0] = "AGUACATE";
        vegetables [1] = "ZANAHORIA";
        vegetables [2] = "COLIFLOR";
        vegetables [3] = "LECHUGA";
        vegetables [4] = "PEPINO";
        vegetables [5] = "CEBOLLA";
        vegetables [6] = "TOMATE";
        vegetables [7] = "APIO";
        vegetables [8] = "CALABAZA";
        vegetables [9] = "PIMENTON";


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

    void playGameAhorcado (char* words [],char* categorys []){
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
            printf("\t\t\t************COMENZEMOS**************\nCATEGORIA: %s\t\t\t\t\t TE QUEDAN %d INTENTOS\n\n",categorys,opportunities);
            printf("TU PUNTUACION ES DE: %d\n",points);
            picturesGameAhorcado(opportunities);

            printf("\n\n\n");
            for(i = 0; i < numberOfCaracters; i ++){
            printf (" %c ",sentence[i]); //se esta imprimiendo el valor de cada una de la posicion de la palabra oculta que puede ser una _ si no la ha adivinado o la letra si ya la ha adivinado
            }

            if (opportunities != 0){ //se coloca este if para que cuando las oportunidades lleguen a 0, este mensaje no se vuelva a mostrar, ya que sino quedaria incoherente el programa
            printf ("\n\nIngrese una letra que crea que puede estar dentro de la palabra:");
            scanf ("%c",&userLetter);
            fflush (stdin); //limpia el buffer y generalmente se coloca para evitar errores al momento de correr el programa
            userLetter = toupper (userLetter); //convierte en mayuscula la letra ingresada por el usuario
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
                printf("\t\tLA PALABRA OCULTA ERA %s\n\n", words[numberRandom]);
                system("pause");
                opportunities = -1;
            
            }

            if (hits == 0){    // a partir de la linea de codigo 117 si considera que la persona no acerto ninguna letra, supondria que hits no va aumnetar su valor, por tanto estariamos hablando de un fallo y es por eso que la oportunidades decrementan en 1 al igual que el puntaje decrementa en 100
                opportunities --;
                points = points - 100;
            }
    
            
        }while (opportunities >= 0); //todo esto se va a repetir si las oportunidades son iguales o mayores a 0
    
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
/////////////////////////FUNCIONES JUEGO BUSCAMINAS/////////////////////////    
void gameBuscaminas (){
    int beginning;
    do{
        system ("cls");
        printf("\tBUSCAMINAS\n\n");
        pictureBuscaminas();
        printf("\n\n");
        printf("1.Jugar\n2.Explicame de que se trata\n3.Salirme\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        fflush (stdin);
        
        if (beginning == 1){
            categoryWords();
        }else if(beginning == 2){
            instruccionsBuscaminas ();
        }else if (beginning == 3){

        }else{
            printf("Opcion incorrecta\n");
            system("pause");
        }
    }while(beginning != 3);
}

void instruccionsBuscaminas(){
    system ("cls");
    printf("\n\t\t\t  INSTRUCCIONES\n\t\t\t<<<BUSCAMINAS>>>\n\n");
    printf("\t\t\t        _\n");
    printf("\t\t\t     __|_|__\n");
    printf("\t\t\t    /       %c\n",92);
    printf("\t\t\t   /         %c\n",92);
    printf("\t\t\t _|     _     |_\n");
    printf("\t\t\t|_|    |_|    |_|\n");
    printf("\t\t\t  |           |\n");
    printf("\t\t\t   %c         /\n",92);
    printf("\t\t\t    %c_______/\n",92);
    printf("\t\t\t       |_|\n");
    printf("\nLa logica de este juego sigue la misma del original, se trata de intentar no tocar ninguna mina(%c) a partir\nde los numeros que salen en la pantalla, y que te indican cuantas minas existen desde ese cuadro a la redonda.\nEn esta version para poder selecionar una recuadro tendras que elegir la fila y la columna en la que coincida\nel recuadro que quieras elegir. Dicho recuadro es de la siguiente forma:\n\n",207);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,187);
    printf("\t%c   %c 1 %c 2 %c 3 %c 4 %c 5 %c\n",186,186,186,186,186,186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t%c A %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t%c B %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t%c C %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t%c D %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t%c E %c   %c   %c   %c   %c   %c\n",186,186,186,186,186,186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\t\t%c%c%cSUERTE!!!\n\n",200,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,188,173,173,173);
    system("pause");
 }

/////////////////////////FUNCIONES JUEGO DE NIM///////////////////
void gameNim (){
    int beginning;
    do{
        system ("cls");
        printf("\tJUEGO DE NIM\n\n");
        pictureNim();
        printf("\n");
        printf("1.Jugar\n2.Explicame de que se trata\n3.Salirme\nSelecciona una opcion:");
        scanf("%d",&beginning); 
        fflush (stdin);
        
        if (beginning == 1){
            playGameNim ();
        }else if(beginning == 2){
            instruccionesJuegoDeNim();
        }else if (beginning == 3){

        }else{
            printf("Opcion incorrecta\n");
            system("pause");
        }
    }while(beginning != 3);
}

void playGameNim (){
    int minChopsticks = 5;
    int numChopsticks, userPlay, maxPlay;

    printf ("\n\tEL JUEGO DE NIM\n\n");
    do{
        system("cls");
        printf ("Para comenzar el juego\n %cDigite el numero de palillos que desea ingresar en el contenedor vacio\n\n",175);
        pictureNimVoid();
        printf("%cEl numero minimo de palillos puede ser de %d!\n",173,minChopsticks);
        printf ("-->");
        scanf ("%d", &numChopsticks);
        fflush(stdin);
        if (numChopsticks < minChopsticks){
            printf("\n%cCantidad incorrecta!\nEs un numero muy peque%co y no sera divertido\n\n",173,164);
            system("pause");
        }
    }while (numChopsticks < minChopsticks);

    do{
        system("cls");
        printf("Ahora digite el numero maximo de palillos que puede sacar del contenedor en cada ronda\n(debe ser mayor 1 y menor a %d):",numChopsticks);
        scanf("%d",&maxPlay);
        fflush(stdin);
        if (maxPlay <= 1 || maxPlay >= numChopsticks ){
            printf("\n%cValor incorrecto!\nTenga en cuenta el rango del numero maximo de juagadas\n",173);
            system("pause");
        }
    }while(maxPlay <= 1 || maxPlay >= numChopsticks);

    system("cls");
    printf("\n\t\tRECUERDA QUE TIENES\n\n");
    printf("%c%c%c%c %c %c%c%c\n",201,188,92,47,47,92,200,187);
    printf("%c%c %c  %c %c%c    El numero maximo de palillos que puedes sacar\n",186,47,92,47,92,186);
    printf("%c%c %c%d%c %c%c     en cada ronda es de %c%d%c\n",186,92,173,numChopsticks,33,47,186,173,maxPlay,33);
    printf("%cPalillos%c\n",186,186);
    printf("%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,205,188);
    printf("\t%c%cASI QUE COMENZEMOS!!\n\n",173,173);
    system("pause");


    while (numChopsticks > 1) {
        do{
        system("cls");
        printf("De los %d palillos en el recipiente %cCuantos palillos desea retirar del contenedor (Entre 1 a %d palillos)?\n->",numChopsticks,168,maxPlay);
        scanf("%d", &userPlay);
        fflush(stdin);
            if (userPlay<=0 || userPlay>maxPlay){
                printf("\n%cValor incorrecto!\nTenga en cuenta el rango del numero maximo de juagadas\n\n",173);
                system("pause");
            }
        }while (userPlay<=0 || userPlay>maxPlay);

        numChopsticks = numChopsticks - userPlay;

        if (numChopsticks < 1){
        messageLose ();
        printf("\n\n%c%cMALA JUGADA!!\nINTENTA DE NUEVO\n",173,173);
        system ("pause");
        }else if (numChopsticks == 1){
        messageWin ();
        printf("\n\nLA MAQUINA TUVO QUE SACAR EL ULTIMO PALILLO\n");
        system ("pause");
        }else {
            userPlay = numChopsticks%(maxPlay+1); 
            printf ("%d",userPlay);
            system("pause");
            
            if (!userPlay){
                userPlay = maxPlay;
            }else if(userPlay > 1){
                userPlay --;
            }

            printf("Quedan %d palillos en el recipiente\n\n",numChopsticks);
            system("pause");
            system("cls");
            printf("AHORA ES TURNO DE LA MAQUINA\n",numChopsticks);

            if (userPlay>1){
                printf("->Yo retiro %d palillos.\n",userPlay);
            }else {
                printf("->Yo retiro 1 palillo.\n");
            }
            numChopsticks = numChopsticks - userPlay;
            if (numChopsticks == 1){
                messageLose();
                printf("\n\n%c%cMALA JUGADA!!\nINTENTA DE NUEVO\n",173,173);
                system("pause");
            }else{
                printf("Asi que quedan %d palillos en el recipiente.\n\n", numChopsticks);
                system("pause");
            }
        }
    }
    
}
void instruccionesJuegoDeNim (){
    system ("cls");
    printf("\n   INSTRUCCIONES\n <<<JUEGO DE NIM>>>\n\n");
    pictureNim();
    printf("Es un juego muy simple, consiste en ir retirando palillos de un mont%cn,\ny pierde el jugador que se ve obligado a retirar el %cltimo palillo.\nEn este caso el jugador al que te enfrenteras sera la misma maquina\n\t\tSUERTE =)\n\n",162,163);
    system("pause");  
}
void pictureNimVoid (){
    printf("       %c%c    %c%c\n",201,188,200,187);
    printf("       %c      %c\n",186,186);
    printf("       %c      %c\n",186,186);
    printf("       %c      %c\n",186,186);
    printf("       %c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,188);

}

int main(){

int game,repeat;
do{
    messageWelcome();
    printf("\n%cQue quieres jugar hoy?\n\n1.AHORCADO\n",168);
    pictureAhorcado();
    printf("\n");
    printf("2.BUSCAMINAS\n");
    pictureBuscaminas();
    printf("\n");
    printf("3.JUEGO DE NIM\n\n");
    pictureNim();
    printf("\n");
    printf("Selecione una opcion:");
    scanf("%d", &game);
    fflush (stdin);

    if (game == 1){
        gameAhorcado();
        repeat = checkOutputGame(); 
    }else if (game == 2){ 
        gameBuscaminas ();
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
