/*
15/02/2023
tema: arrays, clase vectores, aleatoridad, funciones

problema:
-crear una forma para general un conjunto de numeros aleatorios, tal que se pueda contar la frecuencia y poder graficar tipo histograma
-se recomienda usar funciones, arrays y clase de vectores de STL.
-para general el conjunto de aleatorios se deberia preguntar la cantidad de elementos al usuario
se recomienda tambien hacer un menu

*/
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

//Prototipo de funciones
void menu();
void aleatorios ();
void histograma ();

int vec[5];
int n = 0;

int main()
{
 menu();
}




void menu()
{
  int opcion;
  do{
    
  cout<<"1.Generar numeros aleatorios y llenar el vector\n";
  cout<<"2.Mostrar el histogrma\n";
  cout<<"3.Salir\n";
  cout<<"Digite la opcion\n";
  cin>>opcion;
  switch(opcion)
  {

    case 1:
      aleatorios();
    break;

    case 2:
      histograma();
    break;

    case 3:
    cout<<"Usted ha salido"<<endl;

    default:
      cout<<"Opcion invalida\n";
    break;
  }
  }
    while(opcion != 3);
}
  
  
void aleatorios(){
  cout<<"Digite cuantos numeros quiere\n";
  cin>>n;
  srand(time(NULL));
  for(int i = 0 ; i < n  ; i++){
    int num=rand()%10;
    vec[i] = num;
  }
   for(int i = 0 ; i < n  ; i++){
    cout<<"Su numero"<<i+1<<"es :"<<vec[i]<<endl;
  }

}

void histograma(){
  int *puntero;
  for(int i = 0 ; i < n ; i++){
    for(int j = i+1 ; n < 10 ; j++){
      vec[j]=*puntero;
      if(vec[i]==*puntero){
        cout<<"*"<<endl;
        
      }
    }
  }
}