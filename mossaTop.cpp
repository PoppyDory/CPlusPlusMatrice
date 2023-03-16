#include <iostream>

using namespace std;

void stampa(char *tab)
{
    for (int i = 0; i < 9; i++)
    {
        cout << tab[i] << " ";
        if (i == 2 || i == 5 || i == 8) // alla fine di ogni riga (3x3) vai a capo
        {
            cout << endl;
        }
    }

    cout << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    int risultato = -1;
    char vuoto = '_';

    // inizializzo la tab
    char tab[9];
    for (int i = 0; i < 9; i++)
    {
        tab[i] = vuoto;
    }
    stampa(tab);

    /*
        X _ X       O _ _       O _ X       _ X _       X _ _       _ X X       O O _
        _ O _       _ X _       _ X _       _ _ O       _ _ _       _ O _       X _ _        TENTATIVI  
        _ _ _       X _ _       _ _ _       _ X _       X _ O       _ _ _       X _ _  
    */

    tab[0] = 'O';
    tab[1] = 'O';
    tab[3] = 'X';
    tab[6] = 'X';

    stampa(tab);

    // QUI LAVORO

    int combinazioni[8][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}};

    for (int i = 0; i < 8; i++)
    {

        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == b && c == vuoto && a == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][2];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = c == b && a == vuoto && c == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][0];
        }
    }
    
    for (int i = 0; i < 8; i++) // risultato atteso: 1
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == c && b== vuoto && c == 'X';

        if (condizione)
        {
            risultato = combinazioni[i][1];
        }
    }
    
    // ora controllo se il computer può vincere
    // se ci sono due O metto il terzo
    
    for (int i = 0; i < 8; i++)
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == b && c == vuoto && a == 'O';

        if (condizione)
        {
            risultato = combinazioni[i][2];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = c == b && a == vuoto && c == 'O';

        if (condizione)
        {
            risultato = combinazioni[i][0];
        }
    }
    
    for (int i = 0; i < 8; i++) // risultato atteso: 1
    {
        char a = tab[combinazioni[i][0]];
        char b = tab[combinazioni[i][1]];
        char c = tab[combinazioni[i][2]];

        bool condizione = a == c && b== vuoto && c == 'O';

        if (condizione)
        {
            risultato = combinazioni[i][1];
        }
    } 
    
    cout << "risultato ottenuto: " << risultato << " | risultato atteso: 2" << endl;
}