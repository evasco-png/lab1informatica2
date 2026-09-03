#include <iostream>
#include "utils.h"

using namespace std;

int main(){


// /*ejercicio 2 */

//    int valor = 0;
//     cout << "Escrbe un valor en pesos y te digo cuando billetes y monedas necesitas " << endl;
//     cin >> valor;
//     problema2(valor);

//  /* Ejercicio 4*/

//     /* Se ingresan dos datos una hora y una duracion la funcion le suma a la hora el tiempo */
//      int num1 = 0;
//      int num2 = 0;
//      cout << "Escrbe una hora, no pongas los dos puntos ej 1245 es 12:45 " << endl;
//      cin >> num1;
//      cout << "Escrbe una duracion, no pongas los dos puntos ej 345 es 3:45 min " << endl;
//      cin >> num2;
//      problema4(num1,num2);

 /* Ejercicio 6
  *
  * Le damos el numero del consecutivo de Euler que va a sumar */

     double euler = 0;
     cout << "ingresa el número de elementos aproximados para Euler" << endl;
     cin >> euler;
     problema6(euler);

 /* ejercicio 8

  *  Ingreso 3 vcalores y calculo la suma de de los multiplos de los dos primeroes y deben ser menores al tercero   */
     int a = 0;
     int b = 0;
     int c = 0;
     bool valida=true;

     cout << "Escrbe el primer numero: " << endl;
     cin >> a;

     while (valida==true){
     cout << "Escrbe el segundo numero mayor al primero: " << endl;
     cin >> b;
     if (a>b){
         valida=true;
         cout << "el numero no es mayor al primero " << endl;
     }        else {
         valida=false;
     }
     }
 /*aca me quede medio dia -.-! */
     valida=true;

    while (valida==true){
        cout << "Escrbe el tercer numero mayor al segundo: " << endl;
        cin >> c;
        if (b>c){
            cout << "el numero no es mayor al primero " << endl;
            valida=true;
        }
        else {
            valida=false;
        }
    }
    problema8(a,b,c);


/* ejercicio 10
 *
 *  N-esimo numero primo*/

    int posisionprimo = 0;

    cout << "Escribe un numero y te doy el numero primo en esa posicion " << endl;
    cin >> posisionprimo;
    problema10(posisionprimo);



/*  ejercicio 12,
     *
     *  El máximo factor primo de un número es el número primo más grande que lo divide exactamente
     *  sin dejar residuo.Para encontrarlo, se descompone el número en sus factores primos y
     *  se selecciona el mayor de ellos.*/


    int numfactprimo = 0;

    cout << "Escrbe un numero positivo mayor a 1 y te dijo el maximo factor primo " << endl;
    cin >>numfactprimo;
    problema12(numfactprimo);


    /*Ejercicio 14*/

    int palindromo = 0;
    int primernumero=0;
    int segundonumero=0;

    for (int i=999; i>=100;i--){
        for (int j = i; j >=100; j--) {
            int multiplicacion = i*j;
            int numero = multiplicacion;
            int numeroinvertido = 0;

            while (numero>0) {
                numeroinvertido = (numeroinvertido*10)+(numero%10);
                numero=numero/10;
            }
            if (multiplicacion==numeroinvertido && multiplicacion>palindromo){
                palindromo=multiplicacion;
                primernumero=i;
                segundonumero=j;
            }
        }
    }
    cout << primernumero << " * " << segundonumero << " = "<<palindromo<< endl;

    /*EJERCICIO 16

*/
    int k=0;

    cout << "Escrbe un numero k para la serie Colatz " << endl;
    cin >>k;

    problema16(k);

   return 0;

}






