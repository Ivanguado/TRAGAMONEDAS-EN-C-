#include<iostream>
#include<vector>
#include<random>

using namespace std;

char eleccion;
int a, b, c;
int num_ale_1 = 0, num_ale_2 = 0, num_ale_3 = 0;

void jugarPartida();
void limpiarConsola();
void logJuego();
void mostrarResultado();
int volJugar();

int main()
{
	while (true)
	{
		
		limpiarConsola();
		cout << "::::TRAGAMONEDAS:::" << endl;
		cout << "1) Jugar: " << endl;
		cout << "2) Salir: " << endl;
		cin >> eleccion;
		switch (eleccion)
		{
		case '1':
			jugarPartida();
			logJuego();
			mostrarResultado();
			volJugar();
			return 0;
		case '2':
			cout << "Gracias por participar!!!. Presione una tecla para salir" << endl;
			return 0;
		}
	}


	return 0;
}

void limpiarConsola()
{
	if (system("cls") == -1)
	{
		cout << "Hay un error en consola";
	}
}


void jugarPartida()
{
	limpiarConsola();
	while (true)
	{
		cout << "Ingrese la letra A para hacer girar los numeros: ";
		cin >> eleccion;
		if (eleccion == 'a' || eleccion == 'A')
		{
			break;
		}
		else {
			cout << "Ingresaste todo como el culo man " << endl;
			cout << "Intenta de nuevo " << endl;
			
		}
	}
	
}

void logJuego()
{
	// Generando un generador de numeros aletorios utilizando la semilla del tiempo actual.
	mt19937_64 generador(random_device{}());
	
	// Crea la distribucion uniforme entre el 0 y 10
	uniform_int_distribution<int>distribucion(0, 10);

	//Genera numeros 3 numeros aletorios
	num_ale_1 = distribucion(generador);
	num_ale_2 = distribucion(generador);
	num_ale_3 = distribucion(generador);

}

void mostrarResultado()
{
	if(num_ale_1 == num_ale_2 && num_ale_2 == num_ale_3)
	{
		cout << "[" << num_ale_1 << "|| " << "||" << num_ale_2 << "||" << num_ale_3 << "]" << endl;
		cout << "¡¡¡Felicidades!!!..¡¡¡....Usted ha ganado...!!!..::::" << endl;
	}
	else
	{
		cout << "[" << num_ale_1 << "|| " << "||" << num_ale_2 << "||" << num_ale_3 << "]" << endl;
		cout << "Intentelo de nuevo" << endl;
		
	}

}

int volJugar()
{
	do {
		cout << "Quiere volver a jugar? " << endl;
		cout << "Presione S para ingresar o N para salir";
		cin >> eleccion;


		if (eleccion == 's' || eleccion == 'S')
		{
			return main();
		}
		else if(eleccion == 'N' || eleccion == 'n')
		{
			cout << "Gracias por participar " << endl;
			return 0;
		}
		else
		{
			cout << "Ingresa la opción valida" << endl;
		}
	} while (true);
}
