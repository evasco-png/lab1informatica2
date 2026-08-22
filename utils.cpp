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
    int sumahora=0;
    if (num1 and num2 != 0)
        cout <<"ingresaste un numero incorrecto"<< endl;
    else
        sumahora = (num1 + num2) /24;;



    cout << "La hora es "<<sumahora<<endl;

}
