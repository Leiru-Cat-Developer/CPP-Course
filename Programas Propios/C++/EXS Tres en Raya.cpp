/*
 * Crea una función que analice una matriz 3x3 compuesta por "X" y "O"
 * y retorne lo siguiente:
 * - "X" si han ganado las "X"
 * - "O" si han ganado los "O"
 * - "Empate" si ha habido un empate
 * - "Nulo" si la proporción de "X", de "O", o de la matriz no es correcta.
 *   O si han ganado los 2.
 * Nota: La matriz puede no estar totalmente cubierta.
 * Se podría representar con un vacío "", por ejemplo.
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototipo de funciones
char gato(char[][3]);

int main()
{
    // Matriz para jugar gato
    char juego[3][3] =
        {
            {'X', 'X', 'O'},
            {'O', 'O', 'X'},
            {'X', 'O', 'X'}};

    cout << endl
         << endl;

    switch (gato(juego))
    {
    case 'X':
        cout << "HAN GANADO LAS X" << endl;
        break;
    case 'O':
        cout << "HAN GANADO LAS O" << endl;
        break;
    case 'E':
        cout << "HAN SIDO EMPATE" << endl;
        break;
    case 'N':
        cout << "ANULADO" << endl;
        break;

    default:
        cout << "E R R O R" << endl;
        break;
    }

    system("pause");
    return 0;
}

// Definicion de funciones
char gato(char juego[3][3])
{
    // Contadores para proporcion de X y O
    int contador_X = 0;
    int contador_O = 0;

    char ganador;
    int multiples_ganadores = 0;

    // Recorremos toda la matriz, la mostramos en pantalla y definimos si esta bien proporcionada
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (juego[i][j] == 'X')
            {
                contador_X++;
            }
            if (juego[i][j] == 'O')
            {
                contador_O++;
            }
            cout << juego[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    // Si la matriz esta proporcionada seguimos con el programa
    if (contador_X < contador_O || contador_X > contador_O + 1)
    {
        return 'N';
    }
    else
    {
        // Comprobamos si hay ganadores horizontales
        for (int i = 0; i < 3; i++)
        {
            if ((juego[i][0] == juego[i][1]) && (juego[i][0] == juego[i][2]))
            {
                multiples_ganadores++;
                ganador = juego[i][0];
            }
        }

        // Comprobamos si hay ganadores en diagonales
        if ((juego[0][0] == juego[1][1]) && (juego[0][0] == juego[2][2]))
        {
            multiples_ganadores++;
            ganador = juego[0][0];
        }
        if ((juego[2][0] == juego[1][1]) && (juego[2][0] == juego[0][2]))
        {
            multiples_ganadores++;
            ganador = juego[2][0];
        }

        // Comprobamos si hay ganadores verticales
        for (int i = 0; i < 3; i++)
        {
            if ((juego[0][i] == juego[1][i]) && (juego[0][i] == juego[2][i]))
            {
                multiples_ganadores++;
                ganador = juego[0][i];
            }
        }
    }

    if (multiples_ganadores == 0)
    {
        // Si no se encontro algun ganador
        return 'E';
    }
    else if (multiples_ganadores == 1)
    {
        // Si se encontro algun ganador
        return ganador;
    }
    else
    {
        // Si hay multiples ganadores
        return 'N';
    }
}