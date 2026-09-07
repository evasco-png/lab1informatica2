#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
//rand(): Genera un número entero
// pseudoaleatorio entre 0 y una constante llamada RAND_MAX.
// srand(): Establece la "semilla" (el punto de inicio) para el generador
// de números aleatorios.
//<ctime> (C Time Library): Proporciona funciones
// para obtener y manipular el tiempo del sistema.
// Principalmente se usa por:time(): Devuelve la hora actual del sistema
// como un sello de tiempo (los segundos transcurridos desde el
// 1 de enero de 1970).

void aleatorio (){
    char Arreglo[200];
    int contadorArray[26] = {0};
    srand(time(0));
    for (int i=0; i<200;i++ ){

    char Letra = 'A' +(rand()%26);
    Arreglo[i]=Letra;


    }
   //cclo para mostrar el arreglo
    for (int i=0; i<200; i++){
        cout << Arreglo[i];
    }

    //cilco para contar las letras

    for (int i = 0; i < 200 ; i++) {
        int posicion = Arreglo[i] - 'A';
        contadorArray[posicion]= contadorArray[posicion] + 1 ;
    }
    //imprimir la cuenta que se hico ateriormente

    for (int i = 0; i < 26; i++) {

    if (contadorArray[i] > 0) {
    cout << char('A' + i) << ": " << contadorArray[i] << endl;
    }
    }
}
    /*Ejercicio 4
     * Escriba un programa que reciba una cadena de caracteres
     numericos (arreglo de char), la convierta
    a un numero entero y retorne dicho numero.
    Por ejemplo, si recibe la cadena ”123”,
    debe retornar un int con valor 123.*/

int chartoint(char cadena[]){
    int numero = 0;
    /*los numeros del 1 al 9 en Accii van del 48 al 57 */
    for (int i = 0; i < cadena[i]; i++ ) {
        //a valor le doy ej 1 = 49 y 0=48 , 49-48=1
        int valor = cadena[i] - '0';
        numero =numero *10 +valor;
    }
    return numero;
}

/*Ejercicio 6
Escriba un programa que reciba una cadena de caracteres y cambie las
letras minusculas por mayusculas; los demas caracteres no deben ser
alterados. Por ejemplo, se recibe Man-zana debe mostrar MAN-ZANA. la salida
del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.
En Acci las minusculas estan separadas 32 espacios de las mayusculas
'a' - 'A'
97  - 65 = 32
'b' - 'B'
98  - 66 = 32
'c' - 'C'
99  - 67 = 32
*/

void mayusculas (char *palabra){
    cout << "la palabra es: " << palabra << endl;
    char *Puntero = palabra;

        while (*Puntero != '\0') {
            if (*Puntero >= 'a' && *Puntero <= 'z'){
                *Puntero -= 32;
            }

            Puntero++;
/*nota importante  con * voy al dato dentro del posicion de memoria
 sin * voy a la posicion de memoria del puntero
 */
    }
}

/*Ejercicio 8
Escriba un programa que reciba una cadena de caracteres y separe
los numeros del resto de caracteres, generando una cadena que no tiene
numeros y otra con los numeros que habıa en la cadena original.
Por ejemplo, si se recibe abc54rst, el programa debe imprimir las
cadenas: abcrst y 54. La salida del programa debe ser:
Original: abc54rst. Texto: abcrst. Numero: 54.
*/

void letras_numeros (char *cadena){
    char *letras= new char[50];
    char *numero= new char[50];
    int posicion_letra=0;
    int posicion_numero=0;
    for (int i = 0; cadena[i]!='\0'; i=i+1) {

        if (cadena[i]>=48 && cadena[i]<=57){
            numero[posicion_numero]=cadena[i];
            posicion_numero += 1;
        }
        if (cadena[i]>='a' && cadena[i]<='z'){
            letras[posicion_letra]=cadena[i];
            posicion_letra += 1;
        }
        if (cadena[i]>='A' && cadena[i]<='Z'){
                letras[posicion_letra]=cadena[i];
                posicion_letra += 1;
            }
    }
    letras[posicion_letra]='\0';
    numero[posicion_numero]='\0';
    cout << "texto: "<< cadena;
    cout << " texto: "<< numero;
    cout << " Numeros:  "<< letras ;


    delete[] letras;
    delete[] numero;
}

/*ejercicio 10
Escribir un programa que permita convertir un numero en el sistema
romano al sistema arabigo usado actualmente. A continuacion se encuentran
los caracteres usados en el sistema romano y su equivalente arabigo:
M: 1000, D: 500, C: 100, L: 50, X: 10, V: 5, I: 1
Los numeros romanos se forman usando estos caracteres con base en 3 reglas:
(a) Si un car´acter esta seguido por uno de igual o menor valor,
su valor se suma al total.
(b) Si un caracter esta seguido por uno de mayor valor, su valor
se resta del total.
(c) No puede haber mas de 3 caracteres repetidos seguidos.
Por ejemplo, los numeros romanos y su equivalente:
CC=200, CD=400, DC=600, DCLXVI=666,
CLXXIV=174. La salida del programa debe ser:
El numero ingresado fue: DCLXVI
Que corresponde a: 666.
*/
void num_romano (char *numero){
    char romanos[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int arabigo[7] = {1, 5, 10, 50, 100, 500, 1000};
    int resultado[100];
    int total = 0;

    //int M = 1000; int D= 500; int C= 100; int L= 50; int X= 10; int V= 5; int I= 1;

    for (int i = 0; i<7; i++) {
        for (char j=0; j<7; j++) {
            if (numero[i]==romanos[j]){
                resultado[i]=arabigo[j];
                if (resultado[i]< resultado [i+1]){
                    total = total + (resultado[i +1]-resultado[i]);
                }else {
                    total=total+(resultado[i +1]+resultado[i]);
                }
            }
        }


    }

}









