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
			cout << "Error: movimiento fuera de los limites del tablero (1-8)." << endl;
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
			cout << "Error: movimiento invalido. La Torre solo se mueve en horizontal o vertical." << endl;
		}
	}
};

int main()
{
	return 0;
}
