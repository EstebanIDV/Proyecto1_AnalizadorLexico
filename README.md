# Proyecto: Parser 💻

Este es un Analizador Léxico y sintáctico, escrito con C, Bison y Flex para el lenguaje C, la entrada del programa es un archivo de código 
C e imprime los resultados del análisis sintáctico en consola. Se toman en cuenta rutinas de C como 
#include, que incluye archhivos externos y librerías de c y #define que sirve para reemplazar el valor dado en las apariciones (usos) 
del #define, para ello se realiza una fase de preprocesado de código y un proceso de parsing que revisa que efectivamente siga la sintáxis de C.
La principalidad funcionalidad de esta etapa del proyecto es la de mostrar todos los errores posibles y su ubicación,
esto gracias a la tabla de símbolos, cada vez que finaliza un scope, la tabla de símbolos de dicho scope es impresa.

## Instituto Tecnológico de Costa Rica - Escuela de Ing. en Computación

## Miembros ☕️

* Diego Gerardo Méndez Valverde - ✉️: diegomvalverde@outlook.com - 2016078675
* Esteban Ignacio Durán Vargas - ✉️: eiduran@estudiantec.cr - 2020388144
* David Francisco Hernández Calvo - ✉️: dahercal29@estudiantec.cr - 2020041924


### Datos del curso

* Profesor: Dr. francisco J. Torres-Rojas
* Nombre del curso: Compiladores e Intérpretes

### Dependencias de instalación para ejecución 🛠️

0. Linux de preferencia
1. gcc
2. gcc-multilib
3. git
4. LaTex
5. Flex
6. Bison 3.8

### Pasos de ejecución del proyecto 🖱️

0. Clonar el proyecto desde GitHub
1. Abrir una terminal en la raíz del proyecto
2. Ejecutar el comando en terminal: make
3. Lanzar el ejecutable llamado scanner junto con la entrada: ./scanner entrada.c, dónde el archivo
   de entrada contiene código de lenguaje C

#### Ejemplo de ejecución

0. git clone https://github.com/EstebanIDV/Proyecto1_AnalizadorLexico.git
1. cd Proyecto1_AnalizadorLexico
2. make
3. ./scanner entrada.c

Se incluyen archivos de prueba "archpruebaX.c" que incluyen ejemplos de c que debería compilar tanto en gcc como en este programa


### Construido con ayuda de 🛠️

* C
* Flex
* Bison
* Clion
* Linux
* LaTeX
* Discord
* Whatsapp (Llamadas)