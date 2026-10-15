
/*realice un programa que permita realizar converciones de unidades de masa longitud y tiempo 
que incluya todas las unidades mas conocidas valide laentrada por teclado explique las 
funcionalidades cruzadas y cosidere las limitaciones del ejercicio anterior 
*/



#include <stdio.h>

int main() {
    // Declaración de variables principales
    int categoria;                  // Guarda la categoría elegida (1: Longitud, 2: Masa, 3: Tiempo, 4: Temperatura)
    int origen, destino;            // Guardan las opciones de la unidad inicial y final
    double valor, valor_base = 0.0, resultado = 0.0; // valor ingresado, valor intermedio estándar y resultado final
    int continuar = 1;              // Controla el bucle principal (1 = seguir jugando/convirtiendo, 2 = salir)

    printf("==================================================\n");
    printf("   CONVERSOR AVANZADO (SI + Temperatura)          \n");
    printf("==================================================\n");

    // Bucle principal para que el programa no termine en la primera ejecución
    while (continuar == 1) {
        
        // --- SECCIÓN 1: MENÚ DE CATEGORÍAS CON VALIDACIÓN ---
        // Usamos do-while para asegurar que el usuario ingrese un número válido (1 al 4)
        do {
            printf("\nSeleccione la categoria de conversion:\n");
            printf("1. Longitud (Sistema Internacional e Imperiales)\n");
            printf("2. Masa (Sistema Internacional y Comunes)\n");
            printf("3. Tiempo (Sistema Internacional)\n");
            printf("4. Temperatura (Celsius, Fahrenheit, Kelvin)\n");
            printf("Ingrese su opcion (1, 2, 3 o 4): ");
            
            // Verificamos si la entrada es un número entero válido
            if (scanf("%d", &categoria) != 1) {
                printf("Error: Debe ingresar un numero valido.\n");
                while (getchar() != '\n'); // Limpia el búfer para evitar bucles infinitos si escriben letras
                categoria = 0;
            } else if (categoria < 1 || categoria > 4) {
                printf("Opcion invalida. Seleccione entre 1 y 4.\n");
            }
        } while (categoria < 1 || categoria > 4);

        // --- SECCIÓN 2: CATEGORÍA 1 - LONGITUD (Unidad Base: Metros) ---
        if (categoria == 1) {
            // Validación de la unidad de origen
            do {
                printf("\n--- UNIDADES DE LONGITUD ---\n");
                printf("1. Kilometro (km)\n");
                printf("2. Metro (m) [Base SI]\n");
                printf("3. Decimetro (dm)\n");
                printf("4. Centimetro (cm)\n");
                printf("5. Milimetro (mm)\n");
                printf("6. Micrometro (um)\n");
                printf("7. Nanometro (nm)\n");
                printf("8. Milla (mi)\n");
                printf("9. Yarda (yd)\n");
                printf("10. Pie (ft)\n");
                printf("11. Pulgada (in)\n");
                printf("Elija la unidad de ORIGEN (1-11): ");
                
                if (scanf("%d", &origen) != 1 || origen < 1 || origen > 11) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    origen = 0;
                }
            } while (origen < 1 || origen > 11);

            // Validación de la unidad de destino
            do {
                printf("Elija la unidad de DESTINO (1-11): ");
                if (scanf("%d", &destino) != 1 || destino < 1 || destino > 11) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    destino = 0;
                }
            } while (destino < 1 || destino > 11);

            // Captura segura del valor numérico con decimales
            printf("Ingrese el valor a convertir: ");
            while (scanf("%lf", &valor) != 1) {
                printf("Error: Ingrese un valor numerico valido: ");
                while (getchar() != '\n');
            }

            // PASO A: Convertir la unidad de origen a la UNIDAD BASE (Metros)
            switch (origen) {
                case 1:  valor_base = valor * 1000.0; break;     // km a metros
                case 2:  valor_base = valor; break;              // metros (ya es base)
                case 3:  valor_base = valor / 10.0; break;     // dm a metros
                case 4:  valor_base = valor / 100.0; break;    // cm a metros
                case 5:  valor_base = valor / 1000.0; break;   // mm a metros
                case 6:  valor_base = valor / 1000000.0; break;// um a metros
                case 7:  valor_base = valor / 1000000000.0; break;// nm a metros
                case 8:  valor_base = valor * 1609.34; break;  // millas a metros
                case 9:  valor_base = valor * 0.9144; break;   // yardas a metros
                case 10: valor_base = valor * 0.3048; break;   // pies a metros
                case 11: valor_base = valor * 0.0254; break;   // pulgadas a metros
            }

            // PASO B: Convertir desde la UNIDAD BASE (Metros) hacia la unidad de destino final
            switch (destino) {
                case 1:  resultado = valor_base / 1000.0; break;
                case 2:  resultado = valor_base; break;
                case 3:  resultado = valor_base * 10.0; break;
                case 4:  resultado = valor_base * 100.0; break;
                case 5:  resultado = valor_base * 1000.0; break;
                case 6:  resultado = valor_base * 1000000.0; break;
                case 7:  resultado = valor_base * 1000000000.0; break;
                case 8:  resultado = valor_base / 1609.34; break;
                case 9:  resultado = valor_base / 0.9144; break;
                case 10: resultado = valor_base / 0.3048; break;
                case 11: resultado = valor_base / 0.0254; break;
            }
        }
        // --- SECCIÓN 3: CATEGORÍA 2 - MASA (Unidad Base: Kilogramos) ---
        else if (categoria == 2) {
            do {
                printf("\n--- UNIDADES DE MASA ---\n");
                printf("1. Tonelada metrica (t)\n");
                printf("2. Kilogramo (kg) [Base SI]\n");
                printf("3. Hectogramo (hg)\n");
                printf("4. Decagramo (dag)\n");
                printf("5. Gramo (g)\n");
                printf("6. Decigramo (dg)\n");
                printf("7. Centigramo (cg)\n");
                printf("8. Miligramo (mg)\n");
                printf("9. Microgramo (ug)\n");
                printf("10. Libra (lb)\n");
                printf("11. Onza (oz)\n");
                printf("Elija la unidad de ORIGEN (1-11): ");
                
                if (scanf("%d", &origen) != 1 || origen < 1 || origen > 11) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    origen = 0;
                }
            } while (origen < 1 || origen > 11);

            do {
                printf("Elija la unidad de DESTINO (1-11): ");
                if (scanf("%d", &destino) != 1 || destino < 1 || destino > 11) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    destino = 0;
                }
            } while (destino < 1 || destino > 11);

            printf("Ingrese el valor a convertir: ");
            while (scanf("%lf", &valor) != 1) {
                printf("Error: Ingrese un valor numerico valido: ");
                while (getchar() != '\n');
            }

            // Conversión de origen a Kilogramos (Base)
            switch (origen) {
                case 1:  valor_base = valor * 1000.0; break;     // t a kg
                case 2:  valor_base = valor; break;              // kg
                case 3:  valor_base = valor / 10.0; break;     // hg a kg
                case 4:  valor_base = valor / 100.0; break;    // dag a kg
                case 5:  valor_base = valor / 1000.0; break;   // g a kg
                case 6:  valor_base = valor / 10000.0; break;  // dg a kg
                case 7:  valor_base = valor / 100000.0; break; // cg a kg
                case 8:  valor_base = valor / 1000000.0; break;// mg a kg
                case 9:  valor_base = valor / 1000000000.0; break;// ug a kg
                case 10: valor_base = valor * 0.453592; break; // lb a kg
                case 11: valor_base = valor * 0.0283495; break;// oz a kg
            }

            // Conversión desde Kilogramos (Base) al destino
            switch (destino) {
                case 1:  resultado = valor_base / 1000.0; break;
                case 2:  resultado = valor_base; break;
                case 3:  resultado = valor_base * 10.0; break;
                case 4:  resultado = valor_base * 100.0; break;
                case 5:  resultado = valor_base * 1000.0; break;
                case 6:  resultado = valor_base * 10000.0; break;
                case 7:  resultado = valor_base * 100000.0; break;
                case 8:  resultado = valor_base * 1000000.0; break;
                case 9:  resultado = valor_base * 1000000000.0; break;
                case 10: resultado = valor_base / 0.453592; break;
                case 11: resultado = valor_base / 0.0283495; break;
            }
        }
        // --- SECCIÓN 4: CATEGORÍA 3 - TIEMPO (Unidad Base: Segundos) ---
        else if (categoria == 3) {
            do {
                printf("\n--- UNIDADES DE TIEMPO ---\n");
                printf("1. Dia (d)\n");
                printf("2. Hora (h)\n");
                printf("3. Minuto (min)\n");
                printf("4. Segundo (s) [Base SI]\n");
                printf("5. Milisegundo (ms)\n");
                printf("Elija la unidad de ORIGEN (1-5): ");
                
                if (scanf("%d", &origen) != 1 || origen < 1 || origen > 5) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    origen = 0;
                }
            } while (origen < 1 || origen > 5);

            do {
                printf("Elija la unidad de DESTINO (1-5): ");
                if (scanf("%d", &destino) != 1 || destino < 1 || destino > 5) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    destino = 0;
                }
            } while (destino < 1 || destino > 5);

            printf("Ingrese el valor a convertir: ");
            while (scanf("%lf", &valor) != 1) {
                printf("Error: Ingrese un valor numerico valido: ");
                while (getchar() != '\n');
            }

            // Conversión de origen a Segundos (Base)
            switch (origen) {
                case 1: valor_base = valor * 86400.0; break; // días a s
                case 2: valor_base = valor * 3600.0; break;  // horas a s
                case 3: valor_base = valor * 60.0; break;    // minutos a s
                case 4: valor_base = valor; break;           // segundos
                case 5: valor_base = valor / 1000.0; break;  // ms a s
            }

            // Conversión desde Segundos (Base) al destino
            switch (destino) {
                case 1: resultado = valor_base / 86400.0; break;
                case 2: resultado = valor_base / 3600.0; break;
                case 3: resultado = valor_base / 60.0; break;
                case 4: resultado = valor_base; break;
                case 5: resultado = valor_base * 1000.0; break;
            }
        }
        // --- SECCIÓN 5: CATEGORÍA 4 - TEMPERATURA (Celsius, Fahrenheit, Kelvin) ---
        else if (categoria == 4) {
            do {
                printf("\n--- UNIDADES DE TEMPERATURA ---\n");
                printf("1. Celsius (C)\n");
                printf("2. Fahrenheit (F)\n");
                printf("3. Kelvin (K)\n");
                printf("Elija la unidad de ORIGEN (1-3): ");
                
                if (scanf("%d", &origen) != 1 || origen < 1 || origen > 3) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    origen = 0;
                }
            } while (origen < 1 || origen > 3);

            do {
                printf("Elija la unidad de DESTINO (1-3): ");
                if (scanf("%d", &destino) != 1 || destino < 1 || destino > 3) {
                    printf("Opcion invalida.\n");
                    while (getchar() != '\n');
                    destino = 0;
                }
            } while (destino < 1 || destino > 3);

            printf("Ingrese el valor a convertir: ");
            while (scanf("%lf", &valor) != 1) {
                printf("Error: Ingrese un valor numerico valido: ");
                while (getchar() != '\n');
            }

            // La temperatura requiere fórmulas especiales (no simples multiplicaciones).
            // Paso A: Convertimos cualquier unidad de origen primero a Grados Celsius como base intermedia.
            double celsius_base = 0.0;
            switch (origen) {
                case 1: celsius_base = valor; break;                      // C a C
                case 2: celsius_base = (valor - 32.0) * 5.0 / 9.0; break; // F a C
                case 3: celsius_base = valor - 273.15; break;             // K a C
            }

            // Paso B: Convertimos desde Grados Celsius hacia la unidad de destino final.
            switch (destino) {
                case 1: resultado = celsius_base; break;                     // C a C
                case 2: resultado = (celsius_base * 9.0 / 5.0) + 32.0; break;// C a F
                case 3: resultado = celsius_base + 273.15; break;            // C a K
            }
        }

        // --- SECCIÓN 6: IMPRESIÓN DEL RESULTADO FORMATEADO (2 Decimales y Etiquetado) ---
        printf("\n==================================================\n");
        printf(" RESULTADO: %.2f ", valor);

        // Imprime la etiqueta textual de la unidad de origen usando if-else por cada categoría
        if (categoria == 1) {
            if (origen == 1) printf("km"); else if (origen == 2) printf("m");
            else if (origen == 3) printf("dm"); else if (origen == 4) printf("cm");
            else if (origen == 5) printf("mm"); else if (origen == 6) printf("um");
            else if (origen == 7) printf("nm"); else if (origen == 8) printf("mi");
            else if (origen == 9) printf("yd"); else if (origen == 10) printf("ft");
            else if (origen == 11) printf("in");
        } else if (categoria == 2) {
            if (origen == 1) printf("t"); else if (origen == 2) printf("kg");
            else if (origen == 3) printf("hg"); else if (origen == 4) printf("dag");
            else if (origen == 5) printf("g"); else if (origen == 6) printf("dg");
            else if (origen == 7) printf("cg"); else if (origen == 8) printf("mg");
            else if (origen == 9) printf("ug"); else if (origen == 10) printf("lb");
            else if (origen == 11) printf("oz");
        } else if (categoria == 3) {
            if (origen == 1) printf("dias"); else if (origen == 2) printf("h");
            else if (origen == 3) printf("min"); else if (origen == 4) printf("s");
            else if (origen == 5) printf("ms");
        } else if (categoria == 4) {
            if (origen == 1) printf("°C"); else if (origen == 2) printf("°F");
            else if (origen == 3) printf("K");
        }

        printf(" = %.2f ", resultado);

        // Imprime la etiqueta textual de la unidad de destino
        if (categoria == 1) {
            if (destino == 1) printf("km"); else if (destino == 2) printf("m");
            else if (destino == 3) printf("dm"); else if (destino == 4) printf("cm");
            else if (destino == 5) printf("mm"); else if (destino == 6) printf("um");
            else if (destino == 7) printf("nm"); else if (destino == 8) printf("mi");
            else if (destino == 9) printf("yd"); else if (destino == 10) printf("ft");
            else if (destino == 11) printf("in");
        } else if (categoria == 2) {
            if (destino == 1) printf("t"); else if (destino == 2) printf("kg");
            else if (destino == 3) printf("hg"); else if (destino == 4) printf("dag");
            else if (destino == 5) printf("g"); else if (destino == 6) printf("dg");
            else if (destino == 7) printf("cg"); else if (destino == 8) printf("mg");
            else if (destino == 9) printf("ug"); else if (destino == 10) printf("lb");
            else if (destino == 11) printf("oz");
        } else if (destino == 3) { // (Nota: Aseguramos la condición correcta para cada categoría de tiempo)
            // ... control de tiempo de destino ...
        }
        // Corrección limpia para el bloque de destino de tiempo y temperatura:
        if (categoria == 3) {
            if (destino == 1) printf("dias"); else if (destino == 2) printf("h");
            else if (destino == 3) printf("min"); else if (destino == 4) printf("s");
            else if (destino == 5) printf("ms");
        } else if (categoria == 4) {
            if (destino == 1) printf("°C"); else if (destino == 2) printf("°F");
            else if (destino == 3) printf("K");
        }

        printf("\n==================================================\n");

        // --- SECCIÓN 7: CONTROL DE REPETICIÓN DEL PROGRAMA ---
        printf("\n¿Desea realizar otra conversion?\n");
        printf("1. Si\n");
        printf("2. No (Salir)\n");
        printf("Seleccione una opcion (1 o 2): ");
        
        int opcion_menu = 0;
        while (scanf("%d", &opcion_menu) != 1 || (opcion_menu != 1 && opcion_menu != 2)) {
            printf("Entrada invalida. Ingrese 1 para continuar o 2 para salir: ");
            while (getchar() != '\n');
        }

        // Si el usuario elige 2, cambiamos la variable a 0 para romper el bucle while principal
        if (opcion_menu == 2) {
            continuar = 0;
        }
    }

    printf("\n¡Gracias por usar el conversor! ¡Mucho exito en tu materia de Programacion 1!\n");
    return 0;
}