
void picturesGameAhorcado (int opportunities);

void playGameAhorcado (char* words [],char categorys []){
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
void playGameAhorcadoTwoPlayers (char words [][50],char categorys [],int numberOfWords){
    int i,h,numberRandom,numberOfCaracters,points = 600,opportunities = 6,hiddenCharacters;
    char userLetter;
    srand (time(NULL));
    numberRandom = rand ()%numberOfWords;
    numberOfCaracters = strlen (words[numberRandom]);
    char sentence [numberOfCaracters]; //se esta definiendo un string a partir del numero de caracteres que se tiene en la palabra oculta
    
    
    for(i = 0; i < numberOfCaracters; i ++){
        sentence [i] = '_'; //se le esta definiendo a cada caracter de la cadena de caracteres que sea igual a _
        
        if(words[numberRandom][i] == '-'){
            sentence [i] = '-';
        }
    }


    do{
        int hits = 0;
        system ("cls");
        printf("\t\t\t\t******COMENZEMOS******\nLA PALABRA CLAVE SEGUN TU COMPA%cERO/A ES: %s\t\t\t\t\t TE QUEDAN %d INTENTOS\n\n",165,categorys,opportunities);
        printf("TU PUNTUACION ES DE: %d\n",points);
        picturesGameAhorcado(opportunities);

        printf("\n\n\n");
        for(i = 0; i < numberOfCaracters; i ++){
            if (sentence [i] != '-'){
                printf (" %c ",sentence[i]); //se esta imprimiendo el valor de cada una de la posicion de la palabra oculta que puede ser una _ si no la ha adivinado o la letra si ya la ha adivinado
            }else{
                printf(" - "); //se verifica si hay un guion para no contarlo como letra oculta
            }        
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
void createNewList (){
    int numberOfWords,i;
        char myCategory [30];
        typedef char String [50]; //typedef se utiliza para crear un tipo de dato personalizado y en este caso lo usamos para definir una cadena de caracteres de 50 espacios
        system("cls");
        printf ("\t\t!!!!CREA TU PROPIA LISTA Y RETA A UN AMIGO%c%c%c%c\nDigita el numero de palabras que deseas anexar a tu lista:",173,173,173,173);
        scanf("%d",&numberOfWords);
        fflush(stdin);

        String myList[numberOfWords];

        for (i = 0; i < numberOfWords; i ++){
            printf("\nIngrese la palabra numero %d (Si lleva espacio intercambielo por un guion '-')\n-->", i+1);
            scanf("%s",&myList[i]);
            fflush(stdin);
            for (int j = 0; myList[i][j] != '\0'; ++j){
                myList[i][j] = toupper(myList[i][j]);
            }
            printf("%s",myList[i]);
            system("pause");
        }
        printf("\n\nAhora, escribe un nombre que defina el conjunto de las palabras que elegistes:");
        fgets(myCategory,30,stdin); //escanea un string permitiendo que se guarden los espacios
        fflush(stdin);
        if ((strlen(myCategory) > 0) && (myCategory[strlen(myCategory) - 1] == '\n')){ //borra el salto de linea y strlen retorna la longitud de la cadena
            myCategory[strlen(myCategory) - 1] = '\0';
        }
        printf("\n\n!!!!AHORA ES EL TURNO DE TU AMIGO%c%c%c%c\n\n",173,173,173,173);
        system("pause");
        playGameAhorcadoTwoPlayers(myList,myCategory,numberOfWords);

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
    }else if(opcionCategory == 6){
        createNewList();
}
}
void categoryWords (){
        int opcionCategory;
        system ("cls");
            printf("\t\t\t\tCATEGORIAS\nPuedes selecionar una de las categorias, que te serviran como pistas para poder acertar la palabra oculta o crear tu propia lista y retar a tu amigo:\n1.Materiales de escuela\n2.Deportes\n3.Peliculas\n4.VideoJuegos\n5.Verduras\n6.Crear mi propia lista de palabras\n\n");
            printf("Escoge una opcion para comenzar a jugar:");
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
            }else if (opcionCategory == 6){
                words(opcionCategory);
            }else{
                printf("\t\t\tValor incorrecto\n\t\t\tNo se encuentra esa seleccion\n");
                categoryWords();
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
void instruccionesAhorcado (){
    system ("cls");
    printf("\t\tINSTRUCCIONES\n\t\t<<<AHORCADO>>>\n\nEste juego es de uno de los clasicos\nSe trata de adivinar la palabra incognita sin llegar al numero maximo de intentos(6) para evitar asi ahorcar al personaje\nEs decir si consigues evitar llegar a este punto\n\n");
    pictureAhorcado();
    printf("Despues de haber encontrado la palabra oculta\n\t***********GANAS***********\n\nPDT: Lo puedes jugar con un amigo =)\n\n");
    system("pause");    
}
void gameAhorcado (){
    int beginning;
    do{
        
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
    
    