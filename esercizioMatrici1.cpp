/* si vuole memorizzare i voti di un gruppo di studenti in un esame.
Per ogni studente si vogliono memorizzare i voti delle
diverse prove (ad esempio, scritto, orale, ecc.). Si
supponga inoltre che il numero di studenti e il numero di
prove sia noto a priori */
#include <iostream>

using namespace std;

int main()
{
    int numeroProve = 4; //colonne 
    int numeroStudenti = 3; //righe 

    int matriceVoti[numeroStudenti][numeroProve];
    string nomiStudenti[numeroStudenti]; // creo cun array per inserire anch i nomi 
    for (int i = 0; i < numeroStudenti; i++)
    {   
        cout<< "iserisci il nome dello studente "<< i+1<< ": ";
        cin>> nomiStudenti[i];
        for (int j = 0; j < numeroProve; j++)
        {
            cout << "inserisci il voto dello studente studente " << i+1 <<" alla prova " << j+1 << endl;
            cin >> matriceVoti[i][j];

        }
    }

    cout << "     ";
    for (int i = 1; i < numeroProve + 1; i++)
    {
        cout << i << "  ";
    }
    cout << endl;
    int trattini = numeroProve * 2 + 6;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < numeroStudenti; i++)
    {
        cout <<nomiStudenti[i]<< " ";
        cout << i << "|  ";

        for (int j = 0; j < numeroProve; j++)
        {

            cout << matriceVoti[i][j] << " ";
        }
        cout << endl;
    }
}
