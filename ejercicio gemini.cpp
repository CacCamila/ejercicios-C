/*realice un programa que permita simular una ruleta que con 10 opciones pero que tambien permita
 al usuario con 5 opciones y 3 opciones las opcionespueden ser numeros nombres o simbolos 
 especiales tambien palabras que no tengam relacion entre si , debe validar las palabras
  por teclado no puede utilizar funciones estructurada arreglo clases y enums
  
  */
  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n_opciones;
    int ganador;
    int continuar = 1; // Variable de control: 1 para seguir jugando, 0 para salir
    
    // Variables individuales para almacenar las opciones (sin arreglos)
    char o1[50], o2[50], o3[50], o4[50], o5[50];
    char o6[50], o7[50], o8[50], o9[50], o10[50];

    // Inicializar la semilla para el generador de números aleatorios
    srand(time(NULL));

    printf("========================================\n");
    printf("     SIMULADOR DE RULETA - PROG 1      \n");
    printf("========================================\n\n");

    // Bucle externo que mantiene el programa activo mientras el usuario quiera
    while (continuar == 1) {
        
        // Validación por teclado de la cantidad de opciones permitidas (3, 5 o 10)
        do {
            printf("\nSeleccione la cantidad de opciones (3, 5 o 10): ");
            if (scanf("%d", &n_opciones) != 1) {
                printf("Error: Debe ingresar un numero entero valido.\n");
                while (getchar() != '\n'); // Limpiar el buffer de entrada
                n_opciones = 0; 
            } else if (n_opciones != 3 && n_opciones != 5 && n_opciones != 10) {
                printf("Opcion invalida. Solo se permiten 3, 5 o 10 opciones.\n");
            }
        } while (n_opciones != 3 && n_opciones != 5 && n_opciones != 10);

        printf("\n--- INGRESO DE DATOS ---\n");
        printf("Puede ingresar numeros, palabras, nombres o simbolos especiales.\n\n");

        // Captura de opciones según la cantidad seleccionada
        printf("Ingrese la opcion 1: ");
        scanf("%s", o1);
        
        printf("Ingrese la opcion 2: ");
        scanf("%s", o2);
        
        printf("Ingrese la opcion 3: ");
        scanf("%s", o3);

        if (n_opciones >= 5) {
            printf("Ingrese la opcion 4: ");
            scanf("%s", o4);
            
            printf("Ingrese la opcion 5: ");
            scanf("%s", o5);
        }

        if (n_opciones == 10) {
            printf("Ingrese la opcion 6: ");
            scanf("%s", o6);
            
            printf("Ingrese la opcion 7: ");
            scanf("%s", o7);
            
            printf("Ingrese la opcion 8: ");
            scanf("%s", o8);
            
            printf("Ingrese la opcion 9: ");
            scanf("%s", o9);
            
            printf("Ingrese la opcion 10: ");
            scanf("%s", o10);
        }

        printf("\nGirando la ruleta... Suerte!\n");

        // Generar un número aleatorio entre 1 y la cantidad de opciones elegidas
        ganador = (rand() % n_opciones) + 1;

        printf("\n========================================\n");
        printf(" ¡EL GANADOR DE LA RULETA ES: ");
        
        // Mostrar la opción ganadora utilizando un switch
        switch (ganador) {
            case 1:  printf("%s", o1); break;
            case 2:  printf("%s", o2); break;
            case 3:  printf("%s", o3); break;
            case 4:  printf("%s", o4); break;
            case 5:  printf("%s", o5); break;
            case 6:  printf("%s", o6); break;
            case 7:  printf("%s", o7); break;
            case 8:  printf("%s", o8); break;
            case 9:  printf("%s", o9); break;
            case 10: printf("%s", o10); break;
        }
        
        printf(" !\n");
        printf("========================================\n");

        // Preguntar al usuario si desea realizar otra ronda
        printf("\n¿Desea jugar otra ronda?\n");
        printf("1. Si\n");
        printf("2. No (Salir)\n");
        printf("Seleccione una opcion (1 o 2): ");
        
        // Validar la respuesta para evitar errores si ingresan letras
        int opcion_menu = 0;
        while (scanf("%d", &opcion_menu) != 1 || (opcion_menu != 1 && opcion_menu != 2)) {
            printf("Entrada invalida. Ingrese 1 para continuar o 2 para salir: ");
            while (getchar() != '\n'); // Limpiar el buffer
        }

        // Si elige 2, cambiamos continuar a 0 para que termine el bucle while principal
        if (opcion_menu == 2) {
            continuar = 0;
        }
    }

    printf("\n¡Gracias por usar el simulador de ruleta! ¡Mucho éxito en tu materia de Programacion 1!\n");
    return 0;
}