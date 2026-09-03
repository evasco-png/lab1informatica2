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
    double factorial = 1.0;

    for (int i = 1; i < euler; i++ ){

        factorial = factorial * i  ;
        diveuler = 1.0/factorial;
        resulteuler = resulteuler+diveuler;
    }

//
cout <<":el numero *e* es aproximadamente: "<< resulteuler <<endl;
};

void problema8 (int a, int b, int c){
    /*a c le resto 1 para darle el tamaño correcto a la lista a la lista
      a=3 b= 5 c= 10 , 10-1= 9, 9/3= 3 , hay 3 multiplos , 3-6-9 */
    int tamdea = (c-1)/a;
    int tamdeb=(c-1)/b;
    int multiplosa [tamdea];
    int multiplosb [tamdeb];
    int contadora = 0;
    int contadorb = 0;
    int sumatotal = 0;

/* ej i=3, 3 menor que c=10, i=3+3, i= 6 y repito ciclo */
    for (int i = a; i <c; i=i+a ){
        int suma = i;
        /*a la lista multiplosa le asigno en la posision
          de contadora el valor de i en ese punto */
        multiplosa [contadora]=suma;
        contadora = contadora + 1;//aumento contadora para avanzar en la posicion de la lista
        sumatotal = sumatotal + i;//voy aumentando la suma total con el valor de i

    }

    for (int i = b; i<c; i=i+b){
        int suma = i;
        /*adiciono la condicion para verificar que el multiplo ya exista en la lista de a
         si al dividir lo que hay en i%a meda 0 el residup significa que el multiplo ya esta
        y no agrego nada a la lista */
        if (i%a!=0){
        multiplosb [contadorb]=suma;
        contadorb = contadorb + 1;
        sumatotal = sumatotal + i;
        }
        else {
        multiplosb [contadorb]=0;//aca agrego 0 a la posicion de la lista para no dejar nada en la variable
        contadorb = contadorb + 1;//aumento contador para avanzar en la lista
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
        int salida = 21 + i;            //me piden que lo que se imprima debe
        cout <<"M" << salida <<" + "    //ser m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
       ;
    }
    cout <<"= " << sumatotal << endl;
}
/*Problema 10 imprimir el n numero primo */
void problema10 (int posision){
//primero el numero debe ser mayor a 0 aca verifico esa condicion
    if (posision <= 0){
        cout <<"El numero debe ser mayor a cero " << endl;
    }

    int contadorprimo = 0;
    int primo = 2;//
    int resultado = 0;

    while (contadorprimo < posision ) { //entramos al ciclo mientras el contador de
        bool validador = true;          //primo sea menor a la posicion dada

        for (int i = 2; i < primo; i++) { //este bloque valida si el numero tiene mas dividendos
            if (primo % i==0){              // si ocurre el numero no es primo
                validador =false;

                break;              // si la condicion se cumple pone false al validador
                                    // y break para salir del for
            }
        }

        if (validador==true){       //si salio de la validacion con  el brak
        resultado = primo;          //no me adiciona el nunmero al resultado y no cuenta los primos
                                    //si opcurre lo contrario a resultado me agrega el primo que estemos validando
        contadorprimo=contadorprimo + 1;//me aumenta los contadores para saber en que posicion vamos del conteo
        }


        primo = primo+1; //aca aumenta un numero al primo para seguiir verificando numeros hasta la cantidad solicitada

    }
    cout <<"el numero primo en esa posicion es el : " << resultado << endl;
}

/**/
void problema12 (int numfactprimo){
    int mayorprimo = 0;
    /*valido que sea mayor a cero*/
    if (numfactprimo<0 ){
        cout << "el numero debe ser mayor a 1"<<endl;
    }

    /*descarto los numeros pares , aca el 2 seria el primo de mayor factor*/

    while (numfactprimo%2==0){
        mayorprimo = 2;// en caso de ingresar el numero lo dividimos por 2 y validamos nuevamente
        numfactprimo=numfactprimo/2;// si continua al final queda 0 y el mayor primo es 2
    }

    /*Ahora verifico los divisores impares que dan 0*/
    for (int i=3;i<=numfactprimo;i=i+2){
        while (numfactprimo%i==0){
            mayorprimo = i;
            numfactprimo=numfactprimo/i;
        }
    }
cout <<"el MAximo factor primo es:   " << mayorprimo << endl;
}


/*Collatz*/
void problema16 (int k){
    int semillamax=0;  //inicializamos variable semillas y el conteo de los terminos que ejecuta
   int contaterminos=0;

/* en el siclo validamos desde 1 hasta un numero antes del dado por el usuario */
    for (int i = 1; i < k; ++i) {
       int semilla = i;
        int n = semilla;// inicialice con n la semilla  para visualizar mejor en las operaciones
        int terminos = 1;//inicializamos con 1 por que el primer numero ya es un termino


        while (n>1) { //mientras sea mayor a 1 cuando la serie Colatz llega a uno se termina
            if (n%2==0){  // mientras sea par solo se ejecuta esta parte hasta llegar a 1 y terminar el cilco
                n = n/2; //reduce a la mitad el numero para volver a validar en el wwwhile

            }
            /*en caso de se impar se viene por esta parte del if */
            else {
                n=3*n+1;// segunda parte del collatz cuando es impar multiplicxa n por 3 y le suma 1
            }
            terminos = terminos +1;//cada que ingrese a este cilo me va aumentar las veces que lo haga para verificar
        }                           // cuentas veces lo hace

        if  (terminos>contaterminos){ //se valida de terminos es mayor a contaterminos si lo es
            contaterminos = terminos; //adiciona a ontaterminos la cantidad ejecutada en el ciclo anterior
            semillamax = i; // y a semillas max le da el valor de i para guardar que esta
        }        //semilla ejecuto x veces "terminos"

    /*empezamos de nuevo el ciclo hasta llegar al numero k dadop por el usuario*/

    }
    /*cuando termine el for por llegar el valor de k me va imprimir el valor mayor de terminos
     junto con su valor de semilla en ese momento */
    cout << "La serie mas larga es: " << semillamax << "suma " << contaterminos << " terminos"<< endl;
}

















