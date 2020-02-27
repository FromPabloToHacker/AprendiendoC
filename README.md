# AprendiendoC
Programa con lo básico de C explicado para mi hermano Pablin, que el pobre es un analfabeto tecnológico.
C es un lenguaje de programación de nivel medio, pues sus sentencias son comprensibles, al igual que en
lenguajes de alto nivel, pero a su vez permite control a bajo nivel, estando muy cerca del código máquina

Cuando compilamos C lo que estamos haciendo es "traducir" nuestras sentencias escritas en C al lenguaje 
que entiende el ordenador, llamado ensamablador. Esto en Linux lo haremos con el compilador gcc.
Podemos comprobar si tenemos gcc instalado en nuestra distro de Linux con el comando:
    gcc --version
En caso de no tenerlo instalado, pondremos este comando:
    sudo apt install gcc

Los archivos con código c tendran la extensión .c (ejemplo: primeraPrueba.c)

C es la base de casi cualquier otro lenguaje de programación (c++, c#, java, python...), por lo que 
aprender a programar en este primero es muy recomendable, pues nos permitirá aprender los demás 
lenguajes con mucha facilidad.

Para compilar el programa pondremos en nuestra consola de linux:
    gcc -o nombreDelPrograma nombreDelArchivo.c

Y para ejecutarlo haremos:
    ./nombreDelPrograma

La carpeta incluye un archivo .sh (ejecutar.sh) que servirá para automatizar la compilación y ejecución.
Para utilizarlo primero le cambiaremos los permisos:
    chmod +rwx ejecutar.sh
Y luego lo ejecutaremos
    ./ejecutar.sh
