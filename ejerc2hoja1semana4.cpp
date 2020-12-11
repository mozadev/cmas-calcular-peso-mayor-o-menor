/*
Si se tiene el peso de dos animales: dinosaurio y un elefante, escribir un programa en C++
que permita calcular cuál de los dos tiene el peso mayor en un determinado momento.
Ejemplo:
Ingrese el peso del dinosaurio: 120.50
Ingrese el peso del elefante: 255.50
El elefante pesa más que el dinos
*/


#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<math.h>

using namespace std;


	float main()
	{

	    float pesodino;
		float pesoelef;

		cout << "Ingrese peso dinosaurio: "; cin >> pesodino;
		cout << "Ingrese peso del elefante: "; cin >> pesoelef;
		
	
		if (pesoelef < 0 || pesodino < 0)
		{
			cout << "error al ingresar peso del animal!"; 
		}

		else
			if (pesoelef > pesodino)
				cout << "el peso del elefante es mayor ";
			else
				if (pesoelef < pesodino)
					cout << "el peso del dinosario es mayor";
				else cout << "los 2 pesan igual";
		
		_getch();
	}
