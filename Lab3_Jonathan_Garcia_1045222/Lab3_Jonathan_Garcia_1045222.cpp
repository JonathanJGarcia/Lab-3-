

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

int sumas(int numerador, int cantidad) {
    if (numerador == 0 or cantidad == 0)
        return 0;
    else
    {
        return numerador  + sumas(numerador, cantidad - 1);
    }
    
}

void sumasdatos() {
    int numerador, cantidad;
    std::cout << "Ingrese el numero a multplicar";
    std::cin >> numerador;
    std::cout << "Ingrese cuantas veces lo quiere multiplicar";
    std::cin >> cantidad;
    int resultado = sumas(numerador, cantidad);
    std::cout << "El resultado es: " << resultado;
}

bool palindromas(string c) {
   
    
    return false;
}

void palindromasLeer() {
    ifstream archivo;
    string texto;
    archivo.open("archivoPalindromas.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, texto);
        cout << "Palabras en el .txt: " << endl;
        cout << texto << endl;
    }
    archivo.close();
}
void archivo() {
    fstream archivo;
    archivo.open("archivoPalindromas.txt", ios::in);
    string linea;
    char delimitador = ',';

    while (archivo.good())  //
    {
        getline(archivo, linea, delimitador); 

    }
    archivo.close();
}



int conversion(int numero, int baseDestino, int baseOriginal) {
    int multiplicado = 1, resultado = 0, residuo;
    while (numero > 0) {
        resultado = resultado + numero % 10 * multiplicado;
        multiplicado = multiplicado * baseOriginal;
        numero = numero / 10;
        return resultado;
    }
    if (resultado > 0) {
        resultado = numero % baseDestino;
        residuo = numero / baseDestino;
        return resultado + residuo;
    }
}

void conversionMenu() {
    std::cout << "A que base desea convetir?";
    std::cout << "Base binario = 2";
    std::cout << "Base hexadecimal = 16";
    std::cout << "Base decimal = 10 ";
    std::cout << "Base octal =8  ";
    int baseDestino, numero, baseOriginal;
    std::cin >> baseDestino;
    std::cout << "Ingrese el numero original";
    std::cin >> numero;
    std::cout << "Ingrese la base original original del numero";
    std::cin >> baseOriginal;
    std::cout << " El resultado en la base " << baseDestino << " es ";conversion(numero, baseDestino, baseOriginal);

}

int main()
{
    
    int opcion;
    std::cout << "Elija una opcion \n";
    std::cout << "Ejercicio 1: : Calcular la multiplicacion de dos numeros utilizando sumas\n";
    std::cout << "Ejercicio 2: Comprobacion de palabras palindromas \n";
    std::cout << "Ejercicio 3: Conversion de base m a base n \n";
    std::cout << "4. Salir";
    std::cin >> opcion;

    switch (opcion) {
    case 1:
        sumasdatos();
        break;
    case 2: 
        palindromasLeer();
        break;
    case3:
        conversionMenu();
        break;
    case 4:
        cout << "Adios";
        return 0;
        break;
    }

}


