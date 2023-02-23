/*
Autor :  Andres Felipe Gomez Parra
problema: se necesita capturar los datos mde los clientes para ser impreso en un
fichero.

1. crear la estructura de datos
2. hacer un menu para llenar los datos del cliente y para imprimir el fichero
3. se crea la funcion para llenar los datos.
4. se crea la funcion de imprimir fichero, se hace usando ofstream
5. se ponen las funciones en el menu.
*/

#include <fstream>
#include <iostream> 

using namespace std;

//Estructura para guardar variables

struct datos 
{ 
  string nombre[10];
  int edad[10];
  int cedula[10];
};

datos usuario;

//Parametros de las funciones

void llenar_dato(int n); 
void imprimir(int n);

int main() { 

  int opcion,n;
      
  //Menu
  do { 
    cout << "1. LLenar datos"<< endl;
    cout << "2. Imprimir clientes" << endl;
    cout << "3. Salir" << endl;
    cout << "Digite opcion: ";
    cin >> opcion;
    cout << endl;
    switch (opcion) { 
    case 1:
      cout << "Cuantos clientes va a ingresar";
      cin >> n;
      cout << endl;
      llenar_dato(n); 
      break;

    case 2:

      imprimir(n); 

      break;

    default:
      cout << "esta opcion no existe"
           << endl; 
      break;
    }

  } while (opcion != 3); 
  return 0;
}

//Funcion para llenar datos
void llenar_dato(int n) { 

  for (int i = 0; i < n;i++) { 

    //Datos necesarios
    cout << "digite nombre: ";
    cin >> usuario.nombre[i];
    cout << endl;
    cout << "digite edad: ";
    cin >> usuario.edad[i];
    cout << endl;
    cout << "digite cedula: ";
    cin >> usuario.cedula[i];
    cout << endl;
  }
}

//Funcion Imprimir
void imprimir(int n) { 
//Ficheros y Variables de la funcion
  
  int *puntero_edad, *puntero_cedula; 
  string *puntero_nombre;
//Parametro para crear el archivo\
  
  ofstream fichero; 
  for (int i = 0; i < n; i++) {
//Metemos los datos en el archivo
    puntero_edad = &usuario.edad[i];
    puntero_nombre = &usuario.nombre[i];
    puntero_cedula = &usuario.cedula[i];

    fichero.open("archivo_fichero.txt",ios::app); 
    fichero << "nombre: " << *puntero_nombre << endl;
    fichero << "edad: " << *puntero_edad << endl;
    fichero << "cedula: " << *puntero_cedula << endl;
    fichero<<endl;
  }
//Cerramos el archivo
  
  fichero.close(); 
}
