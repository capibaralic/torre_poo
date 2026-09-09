#include <iostream>
using namespace std;
class torre
{
private:
	int fila;
	int columna;
	bool isblack;
public:
	torre(int f, int c, bool b)
	{
		fila = f;
		columna = c;
		isblack = b;
	}
	bool Validacion(int f, int c)
	{
			if (f == fila && c == columna)
			{
				return false;
			}

			if (f == fila)
			{
				return true;
			}

			if (c == columna)
			{
				return true;
			}
			return false;

	}
	void movimiento(int f, int c)
	{
		if (f < 1 || f > 8 || c < 1 || c > 8)
		{
			cout << "movimiento fuera de los limites del tablero (1-8)." << endl;
			return;
		}

		if (Validacion(f, c))
		{
			fila = f;
			columna = c;
			cout << "Movimiento realizado con exito." << endl;
		}
		else
		{
			cout << "movimiento invalido. La Torre solo se mueve en horizontal o vertical." << endl;
		}
	}
	string draw()
	{
		if(isblack == true)
		{
			return "[##]";
		}
		else
		{
			return "[TT]";
		}
	}
	void printState()
	{
		string color;
		if (isblack == true)
		{
			color = "Negro";
		}
		else
		{
			color = "Blanco";
		}
		cout<< draw()<< " - " << color << " en la fila " << fila << ", columna " << columna << endl;
	}
};

int main()
{
	torre torreBlanca(1, 1, false);
	torre torreNegra(8, 8, true);

	cout << "inicio" << endl;
	torreBlanca.printState();
	torreNegra.printState();

	int f, c;
	cout << "Mover torre blanca" << endl;
	cout << "Ingrese fila (1-8): ";
	cin >> f;
	cout << "Ingrese columna (1-8): " << endl;
	cin >> c;
	torreBlanca.movimiento(f, c);
	torreBlanca.printState();

	cout << "Mover torre Negra" << endl;
	cout << "Ingrese fila (1-8): ";
	cin >> f;
	cout << "Ingrese columna (1-8): " << endl;
	cin >> c;
	torreNegra.movimiento(f, c);
	torreNegra.printState();

	cout << "Movimiento diagonal ilegal" << endl;
	torreBlanca.movimiento(f + 2, c + 2);
	torreBlanca.printState();

	return 0;
}
