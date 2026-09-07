#include <iostream>
#include "funciones.h"

using namespace std;

int main(){
int ejercicio = 1;

while (ejercicio !=0) {


    cout << endl << "Que ejercicio ejecutamos? ejercicio par del 2 al 18 " << endl;
    cout << "o 0 para salir" << endl;
    cin >>ejercicio;

    if (ejercicio==2){
        aleatorio();
        }

    if (ejercicio == 4){
        char cadena[50];
        cout << "Ingrese un numero: ";
        cin >> cadena;

        int conversion = chartoint(cadena);
        cout << "el numero entero es: " << conversion << endl;
        }


if (ejercicio == 6){

    char palabra[50];
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    mayusculas(palabra);
    cout << "La palabra en mayuscula es "<< palabra << endl;

    }
if (ejercicio == 8){
    char cadena_caracteres [50];
    cout << "Ingrese una cadena de caracteres ej Ju4n3s: ";
    cin >> cadena_caracteres;
    letras_numeros(cadena_caracteres);


}
if (ejercicio == 10){
    char numero[6];
    cout << "Ingrese un numero romano te doy el equibalente arabigo : ";
    cin >> *numero;
    //debo verificar que todas la letras si sean los numeros romanos
    //adicional verificar el tamaño del array
    num_romano(*numero);

}
if (ejercicio == 12){

}
if (ejercicio == 14){

}
if (ejercicio == 16){

}
if (ejercicio == 18){

}
}

}
