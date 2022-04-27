# Proyecto: Scanner 💻

Este es un Analizador Léxico, escrito con C y Flex para el lenguaje C, la entrada del programa es un archivo de código 
C y la salida es un PDF con la información del análisis lexico del código. Se toman en cuenta rutinas de C como 
#include, que incluye archhivos externos y #define que sirve para reemplazar el valor dado en las apariciones (usos) 
del #define, para ello se realiza una fase de preprocesado de código y un postprocesado que genera la salida PDF de LaTeX.


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

### Pasos de ejecución del proyecto 🖱️

0. Clonar el proyecto desde GitHub
1. Abrir una terminal en la raíz del proyecto
2. Ejecutar el comando en terminal: make
3. Lanzar el ejecutable llamado svanner junto con la entrada: ./scanner entrada.c, dónde el archivo
   de entrada contiene código de lenguaje C

#### Ejemplo de ejecución

0. git clone https://github.com/EstebanIDV/Proyecto1_AnalizadorLexico.git
1. cd Proyecto1_AnalizadorLexico
2. make
3. ./scanner entrada.c

Contenido de entrada.c:
#define ab 0
#define ba (20 + ab) c
#define c 33 z
#define z ab
#define y 1

int a = 1;
char b ='ab';
int ba = bac + ab + ab - ba;

### Construido con ayuda de 🛠️

* C
* Flex
* Clion
* Linux
* LaTeX
* Discord
* Whatsapp (Llamadas)