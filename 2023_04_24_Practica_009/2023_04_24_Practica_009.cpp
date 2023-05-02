// 2023_04_24_Practica_009.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>

int main()
{
    int num1, num2, resultado;

    int opcion;

    std::cout << "Bienvenido a la calculadora" << std::endl;
    

    std::cout << "Selecciona una opcion:\n";
    std::cout << "5. Valor Absoluto\n";
    std::cout << "6. Mayor y Menor que\n";
    std::cout << "Opcion: ";
    std::cin >> opcion;
    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;
    
    

    switch (opcion) {
    case 5:
        std::cout << "El valor absoluto de " << num1;
        break;
    case 6:
        if (num1 > num2) {
            std::cout << num1 << " es mayor que " << num2 << " y " << num2 << " es menor que " << num1;
        }
        else if (num2 > num1) {
            std::cout << num2 << " es mayor que " << num1 << " y " << num1 << " es menor que " << num2;
        }
        else {
            std::cout << "Los numeros son iguales";
        }
        break;
    default:
        std::cout << "Opción inválida";
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
