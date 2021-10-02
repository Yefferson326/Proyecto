

/////////////////////////FUNCIONES JUEGO DE NIM/////////////////////////  
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
        printf("\n");
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
