// Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int i, num[10],mayores;
float sum= 0;
float medi = 0;
float numeros = 0;
for (i = 0; i  < 10; i++)
{
	cout << "ingrsar numeros" << endl;
	cin >> num [i];
}
for (i = 0; i < 10; i++)
{ 
	sum = sum + num [i];
	medi = sum / 10;
cout << "la media es" <<medi<< endl;

		for (i = 0; i < 10; i++);
	if (num [i] > medi)
		if (num[i]>medi)
		cout << "estos son numeros mayores a media " << num[i] << endl;
   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
