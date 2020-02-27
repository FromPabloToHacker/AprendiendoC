/*------------------------------------------------------------------------------------------------------------------
(C) Alejandro Abad (aabadp02) Todos los derechos reservados.
27-02-2020  
Para el curso  "FromPabloToHacker" disponible en github: "https://github.com/FromPabloToHacker/AprendiendoC"
------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h> //Esto es una libreria. Permite hacer uso de ciertas funciones de entrada y salida, como el printf o el scanf.

/*Función main. Aquí empieza el programa siempre. Una funcion se reconoce porque al final de su nombre lleva "()"
por ejemplo: calculaNumeros().
Una función es como una máquina que contiene instrucciones de código entre sus { }. 
*/
int main() 
{
    // 1) Imprimir información por pantalla.
    printf("Hola, mundo");
    
    // 1.1) Podemos poner un salto de línea a lo que imprimimos por pantalla mediante "\n"
    printf("\nEsto funciona asi\nEsta parte saldrá debajo\n");

    /* 1.2) La barra invertida "\ lo que hace es eliminar la utilidad principal de aquello que tiene dentrás"
            Es decir, la utilidad principal de la n es ser una letra más. Al ponerle el slash delandte /n
            estamos quitándole esa utilidad y dándole otra, que es la del salto de línea.
            Si por ejemplo quisiértamos imprimir por pantalla un slash invertido tendríamos que hacerlo así: */
    printf("Voy a imprimir un slash invertido: \\");


    /* 2) Declaracion de variables. Una variable es una caja que contiene un valor. Dependiendo del tipo de dato
          que queramos que guarde nuestra caja, esta será declarada de una forma u otra. Declarar una variable es
          crearla, para que nuestro programa la conozca. Si por ejemplo queremos que nuestra varibale contenga un
          un número entero pondríamos lo siguiente: */
    int variable;

    // 2.1) Ahora que ya la hemos declarado, tenemos que inicializarla. Esto es darle un valor. (No debe confundirse con declararla)
    variable = 3;

    // 2.2) Si queremos guardar un número decimal utilizaremos float o double y si queremos guardar una letar utilizaremos char
    float numeroDecimal = 3.4;
    double otroNumeroDecimal = 9.4;
    char letra = 'a';

    //AVISO: dos variables NO pueden tener el mismo nombre


    // 3) Operaciones con variables: Vamos a empezar con una suma
    /*    Debemos empezar a desarrollar el pensamiento lógico que requiere la programación. Queremos sumar dos números
          La suma de dos números dará como resultado otro número. Esto en programación sería así: */
    
    int resultado = 5 + 7;
    float resultadoDecimal = 4.0 + 6.7;

    // 3.1) Ahora haremos lo mismo pero los números que sumaremos estarán contenidos en variables
    int numero1 = 5;
    int numero2 = 9;

    resultado = numero1 + numero2; //Estamos sobreescribiendo el anterior valor de la variable resultado. Reutilizamos variables.

    // 3.2) Ahora que ya sabemos hacer operaciones, vamos a sacar los resultados de estas por pantalla:
    printf("\nEl resultado de la suma es %d\n", resultado); //Utilizamos %d para indicar el valor que luego referenciaremos

    //3.3) Vamos a explorar esto de imprimir variables por pantalla:
    printf("El resultado de sumar %d + %d es: %d\n", numero1, numero2, resultado);


    /*4) Ahora vamos a hacer nuestro primer programa con cierto sentido, que tenga utilidad. Vamos a hacer un programa
         que le permita al usuario sumar los dos números que él quiera y mostrar el resultado de la suma por pantalla.
         Nosotros NO sabemos qué números escogerá el usuario, por lo que tendremos que escribir un programa que nos permita
         operar sin valores predeterminados. Es más fácil de lo que parece: */
    
    // 4.1) Empezaremos solicitando dos número enteros cualesquiera
    printf("Bienvenido al sumatrón 5000, el programa se está iniciando: \n");
    printf("Por favor: introduza un primer número entero: \n");

    // 4.2) Ahora haremos uso de una función que nos permite leer lo que el usuario pone por pantalla y lo guardaremos en la variable "numero1"
    scanf("%d", &numero1); //Ahora tenemos guardado en numero1 el valor que el usuario ha introducido por pantalla

    printf("Por favor: introduza un segundo número entero: \n");
    scanf("%d", &numero2);

    // 4.3) Ahora operaremos como ya aprendimos e imprimiremos el valor por pantalla:
    resultado = numero1 + numero2;

    printf("Sumatrón 5000 ha determinado que el resultado de su suma es: %d\n", resultado);
    printf("Gracias por usar sumatrón 5000, vuelva pronto!\n");
}