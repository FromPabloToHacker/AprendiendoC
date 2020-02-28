#include <stdio.h>

int main()
{
    /*Vamos a ver las diferentes sentencias condicionales, cómo funcionan y cuándo usar cada una.
    Empezaremos por la sentencia condicional "if".
    La sintaxis es: if(condicion). En este tipo de sentencias se pueden construir condiciones complejas
                    {

                    }
                    else
                    {
            
                    }
    Veremos un ejemplo haciendo un programita simple*/

    /*-----------Programa 1 sentencia if else-----------------------------------
    Pide al usuario que introduzca un número entero. Si el número es par imprime por pantalla "par", sino "impar"*/

    int num = 0; //Es buena práctica inicializar las variables con un valor, porque a veces el programa le da un valor basura

    printf("Por favor, introduzca un número entero: \n");
    scanf("%d", &num);

    if(num % 2 == 0) //Al usar el operador % este nos devuelve el resto de la división. Si el resto de divir un número entre 2 es 0, el número es par
    {
        printf("Par\n");
    }
    else //Comprenderá cualquier otro valor de num % 2 distinto de cero
    {
        printf("Impar\n");
    }

    /*Bien, vamos a ver la siguiente estructura condicional, que es una extensión de la que acabamos de ver
    Esta es "if-else if-else" */

    
    /*-----------------Programa 2 sentencia if-else if-else------------------------
    Pide al usuario que introduzca un número. Si vale 1 imprime por pantalla "más sólo que la 1" 
    si vale 2 imprime por pantalla "perfecto" y si son 3 o más imprime "multitud"
    Si vale menos que 1 debes imprimir "Entrada errónea"
    */

    int personas = 0;

    printf("Introduce un número de personas: \n");
    scanf("%d", &personas);

    if(personas < 1)
    {
        printf("Entrada errónea\n");
    }
    else if(personas == 1)
    {
        printf("Más sólo que la una\n");
    }
    else if(personas == 2)
    {
        printf("Perfecto\n");
    }
    else
    {
        printf("Multitud\n");
    }


    /*Ahora vamos a ver la última estructura condicional llamada "switch case".
      Esta estructura no admite condiciones complejas (el último programa que hagamos explicará qué significa eso)
      El switch case se basa en una implementación llamada "jump table" o "tabla de saltos".
      Básicamente la entrada es una dirección de una instrucción, por lo que, independientemente del número de 
      casos que tengamos, la velocidad siempre será la misma.
    */

    
    /*-------------------Programa 3 Switch case---------------------
    El mismo programa que antes, pero realizado con esta nueva estructura
    pero sin tener en cuenta el caso de la entrada errónea (reutilizaremos la varibale personas)
    */

    personas = 0; //La ponemos a 0 de nuevo para "limpiarla"

    printf("Introduzca otro número de personas: \n");
    scanf("%d", &personas);

    switch(personas) //En función del valor de la variable personas
    {
        case 1: //Si personas vale 1...
            printf("Más sólo que la una\n");
            break; //De esta forma saldremos ya de la sentencia, para que no pierda tiempo recorriendo los siguientes casos
        
        case 2:
            printf("Perfecto\n");
            break;
        
        default: //Para cualquier otro caso
            printf("Multitud\n");
            break; //Este último break no sería necesario
    }

    /*Como podemos ver, con este ejemplo tenemos problemas, porque con el switch solo podemos tener un default,
    que será el utilizado para números mayores o iguales de 3. No podemos, sin embargo, incluir el otro caso que nos interesa
    que es el de -infinito hasta 0 (menores que 1). Esto podríamos resolverlo de la siguiente forma:
    */

    /*----------------Programa 4 combiando lo aprendido--------------------------------
    Resuelve el problema que nos al usar la estructura anterior
    */

    personas = 0; //La ponemos a 0 de nuevo para "limpiarla"

    printf("Introduzca otro número de personas: \n");
    scanf("%d", &personas);

    if(personas >= 1) //Utilizamos una condición compleja en el if que sólo nos llevará al switch si tenemos valores de 1 en adelante
    {
        switch(personas) //En función del valor de la variable personas
        {
            case 1: //Si personas vale 1...
                printf("Más sólo que la una\n");
                break; //De esta forma saldremos ya de la sentencia, para que no pierda tiempo recorriendo los siguientes casos
            
            case 2:
                printf("Perfecto\n");
                break;
            
            default: //Para cualquier otro caso
                printf("Multitud\n");
                break; //Este último break no sería necesario
        }
    }
    else //Si es menor que 1, no entrará en el switch
    {
        printf("Entrada errónea\n");
    }

}