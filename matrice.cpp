#include <iostream>
#include <random>
using namespace std;

int main()
{

    // int matrice1[5][5]; //te la crea vuota
    // //te la riempi con il for
    // int matrice[][] = { {1,2}, {3,4} };
    // int array1[2]={1,2};
    // int array2[2]={3,4};
    // int arraySpeciale[2]={array1,array2};

    int righe = 9;
    int colonne = 9;

    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = 1; // rand()%10;
        }
    }

    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {

            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // esercizio
    //  input matrice, righe, colonne
    // output 0 sulle diagonali

    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {
            if (i == j)
            {
                matrice[i][j] = 0;
            }
            else if (j + i == colonne - 1)
            {
                matrice[i][j] = 0;
            }
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    // stampa risultato
    cout << endl;
    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
    // output non ci devono essere i <5
    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {
            if (matrice[i][j] > 5)
            {
                cout << matrice[i][j] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << endl;
    // stampa la somma di tutta la matrice

    int somma = 0;
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {

            somma += matrice[i][j];
        }
    }
    cout << "somma = " << somma << endl;
}
