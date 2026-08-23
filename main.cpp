#include <iostream>
#include "utils.h"

using namespace std;

int main(){
/* */

    int valor = 0;
    cout << "Escrbe un valor en pesos y te digo cuando billetes y monedas necesitas " << endl;
    cin >> valor;
    problema2(valor);

/*Se ingresan dos datos una hora y una duracion la funcion le suma a la hora el tiempo */
    int num1 = 0;
    int num2 = 0;
    cout << "Escrbe una hora, no pongas los dos puntos ej 1245 es 12:45 " << endl;
    cin >> num1;
    cout << "Escrbe una duracion, no pongas los dos puntos ej 345 es 3:45 min " << endl;
    cin >> num2;
    problema4(num1,num2);

/* Le damos el numero del consecutivo de Euler que va a sumar */
    double euler = 0;
    cout << "ingresa el número de elementos aproximados para Euler" << endl;
    cin >> euler;
    problema6(euler);

/*  Ingreso 3 vcalores y calculo la suma de de los multiplos de los dos primeroes y deben ser menores al tercero   */
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
/*aca me quede medio dia -.-*/
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


    return 0;

}
