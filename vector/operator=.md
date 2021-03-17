
/*
    Author :        JAM
    Date :   17/03/2021
    Time :        12:53
    Description : Modifica el contenido y el tamaño de los vectores
*/

#include <iostream>
#include <vector>
#include <set>

int main()
{
	std::vector<int> nvector = { 2,4,6,8 };                                  //Vector con cuatro elementos (dimension igual a 4)
	std::vector<int> vector(3, 0);                                           //vector={0, 0, 0} (dimension igual a 3)

	int* p  = vector.data();                                                 //Primero definir vectores y después definir punteros
                                                                                 //Es necesario definir un puntero para acceder a los
                                                                                 //elementos del vector
	std::cout << "Size of vector: " << (vector.size()) << '\n';

	for (unsigned int i = 0; i < vector.size(); i++) {                       //Se visualiza el tamaño y los elementos de "vector"
		  if (i == vector.size() - 1) std::cout << p[i] << std::endl;    //en su forma y estado inicial
		  else std::cout << p[i] << ", ";
	}
                                                                                 //"operator=" se encarga de "igualar" ambos vectores
	vector.operator= (nvector);                                              //Llamada explicita a operator=
                                                                                 //vector=nvector;   Llamada implicita a operator=
	int* p1 = vector.data();

	std::cout << "Size of vector: " << (vector.size()) << '\n';

	for (unsigned int i = 0; i < vector.size(); i++) {                       //Se visualiza el tamaño y los elementos de "vector"
		  if (i == vector.size() - 1) std::cout << p1[i] << std::endl;   //en su forma y estado final
		  else std::cout << p1[i]<<", ";
	}

	return 0;
}
