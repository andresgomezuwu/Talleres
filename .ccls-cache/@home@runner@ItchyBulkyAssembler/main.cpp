/*
Autor:Andres Felipe Gomez Parra

1.- Crear un array con 10 elementos
2.- Crear una función para generar números aleatorios entre 0 y 25
3.- Llenar el array con 10 números aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero.
*/
  
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//parametro de las funciones
void numeros_aleatorios(int array[]);
void apuntador(int array[]);


//main
int main() {
  
  int array[10], opcion; 

  do { 
    
    //Menu
    cout << "escoga una opcion" << endl;
    cout << "1. numeros aleatorios y llenar el vector" << endl;
    cout << "2. mostrar numeros" << endl;
    cout << "3. salir " << endl << endl;
    cin >> opcion;

    switch (opcion) {
      
    case 1:
    
      numeros_aleatorios(array);
      cout << endl << endl;
      break;
    case 2:
       apuntador( array);
       cout << endl << endl;
      break;

    case 3:
      return 0;

      break;

    }
  } while (opcion != 3);
}


//Funcion para llenar el array
void numeros_aleatorios(int array[]) { 

  //Funcion para generar numeros aleatorios
  srand(time(NULL));  
  for (int i = 0; i < 10; i++) {
    array[i] = rand() % 10;  
  }
  for (int j = 0; j < 10; j++) {
    cout << "su numero [" << j + 1 << "] es " << array[j] << endl;
  }
}


//Funcion puntero
void apuntador(int array[]){ 

int *puntero; 
for(int i=0;i<10;i++){
  puntero = &array[i];  

//imprimir los datos que nos piden
cout<<"el numero es :"<<array[i]<<endl;
  cout<<"el puntero es : "<<puntero<<endl;
  cout<<"la dirrecion es :"<<*puntero<<endl<<endl;
}
  
}