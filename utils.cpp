#include <iostream>
using namespace std;

void problema2 (int dinero) {
    const int valores [10] = {50000, 20000, 10000, 5000, 2000, 1000,500,200,100,50};
    int resultados [11]{};

    for (int i = 0; i <10; i++ ){
        resultados[i] = dinero / valores[i];
        dinero = dinero % valores[i];
    };
    resultados [10]=dinero;

    for (int i = 0; i <10; i++ ){
        if (resultados[i]>0){
            cout << "Los billetes/monedas de: "<< valores[i] << "son: " << resultados[i]<< endl;
            cout << "el sobrante es "<< resultados[10]<< endl;
        }

    };
    /*
        if (dinero / valores[0] > 0){
            resultados[0] = dinero / valores[0];
            dinero = dinero % valores[0];
        }
        if (dinero / valores[1] > 0){
            resultados[1] = dinero / valores[1];
            dinero = dinero % valores[1];
        }
        if (dinero / valores[2] > 0){
            resultados[2] = dinero / valores[2];
            dinero = dinero % valores[2];
        }
        if (dinero / valores[3] > 0){
            resultados[3] = dinero / valores[3];
            dinero = dinero % valores[3];
        }
        if (dinero / valores[4] > 0){
            resultados[4] = dinero / valores[4];
            dinero = dinero % valores[4];
        }
        if (dinero / valores[5] > 0){
            resultados[5] = dinero / valores[5];
            dinero = dinero % valores[5];
        }
        if (dinero / valores[6] > 0){
            resultados[6] = dinero / valores[6];
            dinero = dinero % valores[6];
        }
        if (dinero / valores[7] > 0){
            resultados[7] = dinero / valores[7];
            dinero = dinero % valores[7];
        }
        if (dinero / valores[8] > 0){
            resultados[8] = dinero / valores[8];
            dinero = dinero % valores[8];
        }
        if (dinero / valores[9] > 0){
            resultados[9] = dinero / valores[9];
            dinero = dinero % valores[9];
        }
        resultados[10] = dinero;

    return resultados;*/
};
void problema4 (int num1, int num2){
    int hora1 = 0;
    int hora2=0;
    int min1=0;
    int min2=0;

    hora1=num1/100;
    hora2=num2/100;
    min1=num1%100;
    min2=num2 % 100;
    /*cout << hora1<<hora2<<min1<<min2<<endl;*/

    if  (hora1 && hora2 > 24){
        cout << "Hora incorrecta "<<endl;
    }
    else if (min1 && min2>60){
        cout << "Hora incorrecta "<<endl;
    }
    else {
        int sumahora = hora1+hora2;
        int sumamin = min1+min2;
        if (sumamin>60){
            sumahora = sumahora+1;
            sumamin = sumamin - 60;
            cout <<"La hora es : "<< sumahora<<sumamin<<endl;
        }
        else {
           cout <<"La hora es : "<< sumahora<<sumamin<<endl;
        }
    }
}

void problema6 (int euler){
    double resulteuler = 1.0;
    double diveuler = 0.0;

    for (int i = 1; i < euler; i++ ){
        diveuler = 1.0/i;
        resulteuler = resulteuler+diveuler;
    }


cout <<":el numero *e* es aproximadamente: "<< resulteuler <<endl;
};

void problema8 (int a, int b, int c){
    int tamdea = (c-1)/a;
    int tamdeb=(c-1)/b;
    int multiplosa [tamdea];
    int multiplosb [tamdeb];
    int contadora = 0;
    int contadorb = 0;
    int sumatotal = 0;


    for (int i = a; i <c; i=i+a ){
        int suma = i;
        multiplosa [contadora]=suma;
        contadora = contadora + 1;
        sumatotal = sumatotal + i;

    }

    for (int i = b; i<c; i=i+b){
        int suma = i;
        if (i%a!=0){
        multiplosb [contadorb]=suma;
        contadorb = contadorb + 1;
        sumatotal = sumatotal + i;
        }
        else {
        multiplosb [contadorb]=0;
        contadorb = contadorb + 1;
        }
    }
    /*
    for (int i = 0; i < tamdea ; i++ ){
        sumatotal= sumatotal + multiplosa[i];
    }
    for (int i = 0; i < tamdeb ; i++ ){
        sumatotal= sumatotal + multiplosb[i];
    }*/
    for (int i = 0; i < tamdea ; i++ ){
        int salida = 11 + i;
        cout <<"M" << salida<<" + "  ;
    }
    for (int i = 0; i < tamdeb ; i++ ){
        int salida = 21 + i;
        cout <<"M" << salida <<" + " ;
    }
    cout <<"= " << sumatotal << endl;
}