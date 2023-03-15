#include <iostream>

using namespace std;

const int RIGHE = 5;
const int COLONNE = 5;

void riempiMatrice(int matrice[][COLONNE])
{
    for (int i = 0; i < RIGHE; i++)
    {
        for (int j = 0; j < COLONNE; j++)
        {
            matrice[i][j] = rand() % 10;
        }
    }
}

void stampaMatrice(int matrice[][COLONNE])
{
    cout << "    ";
    for (int i = 1; i < RIGHE + 1; i++)
    {
        cout << i << "  ";
    }
    cout << endl;
    int trattini = RIGHE * 2 + 6;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    for (int i = 0; i < RIGHE; i++)
    {

        cout << endl;
        cout << i + 1 << "|  ";
        for (int j = 0; j < COLONNE; j++)
        {
            cout << matrice[i][j] << "  ";
        }
    }
}

int main()
{

    int matriceRandom[RIGHE][COLONNE];

    riempiMatrice(matriceRandom);
    stampaMatrice(matriceRandom);
    cout << endl;
    cout << "------------------" << endl;
    cout << "    ";
    for (int i = 1; i < RIGHE + 1; i++)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "------------------" << endl;
    // righe invertite 
    for (int i = RIGHE - 1; i >= 0; i--)
    {
        cout << endl;
        cout << i + 1 << "|  ";
        for (int j = 0; j < COLONNE; j++)
        {

            cout << matriceRandom[i][j] << "  ";
        }
    }
    cout << endl;
    cout << "------------------" << endl;
    cout << "    ";
    for (int i = 1; i < RIGHE + 1; i++)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "------------------" << endl;
    // colonne invertite 
    for (int i = 0; i < RIGHE; i++)
    {
        cout << endl;
        cout << i + 1 << "|  ";
        for (int j = COLONNE - 1; j >= 0; j--)
        {
            cout << matriceRandom[i][j] << "  ";
        }
    }
    cout << endl;
    cout << "------------------" << endl;
    cout << "    ";
    for (int i = 1; i < RIGHE + 1; i++)
    {
        cout << i << "  ";
    }
    cout << endl;
    cout << "------------------" << endl;

    // trasposta 
    for ( int i =0 ; i<RIGHE; i++ )
    {
        cout << endl;
        cout << i + 1 << "|  ";
        for ( int j =0; j< COLONNE; j++)
        {
            cout << matriceRandom[j][i] << "  ";
        }

    }

}
