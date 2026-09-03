using namespace std;
#include <ctime>
#include <cstdlib>

void aleatorio (){
    char Arreglo[200];
    int *contadorArray = new int[1];
    srand(time(0));
    for (int i=0; i<200;i++ ){

    char Letra = 'A' +(rand()%26);
    Arreglo[i]=Letra;


    }
}