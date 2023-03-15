/* crea una matrice random da 0-9
stampa accanto la somma della riga e sotto la somma della colonna  */

#include <iostream>

using namespace std;

int main()
{
    int righe = 5;
    int colonne = 5;
    int matriceRandom[righe][colonne]; // creo la matrice 

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matriceRandom[i][j] = rand() % 10; // inserisco numeri casuali 
        }
    }
    // stampa
    // creo un array per la somma delle righe e uno per le colonne 
    int sommaRighe[righe];
    int sommaColonne[colonne];

    for (int i=0; i<righe; i++)
    {
        sommaRighe[i]=0;
        for( int j=0; j<colonne; j++)
        {
            sommaRighe[i]+= matriceRandom[i][j]; //riempio l'array sommaRighe
            sommaColonne[j]+= matriceRandom[i][j]; // riempio l'array sommaColonne 
        }
    }
    //stampo

    for (int i=0; i<righe; i++)
    {
        for (int j=0; j<colonne; j++)
        {
            cout<< " "<< matriceRandom[i][j]<< " ";
        }
        cout << "| "<< sommaRighe[i]<< " ";
    }
