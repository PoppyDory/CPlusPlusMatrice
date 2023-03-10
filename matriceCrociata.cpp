#include <iostream>
using namespace std;

int main()
{
    int righe = 15;
    int colonne = 15;
    char vuoto = ' ';
    string parole[] = {"hola", "apple", "casa","mamma", "cane","nonno","albero", "andrea"};
    int paroleLunghezza = sizeof(parole) / sizeof(parole[0]);
    char matrice[righe][colonne];
    int contatore=0;

    for (int i = 0; i < righe; i++) // riempimento matrice
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = vuoto; // rand()%10;
        }
    }
    // non toccare sopra
    for (int indice = 0; indice < paroleLunghezza; indice++) // controllo tutte le parole
    {
        if (indice % 7 == 0)
        {
            // orizzontale sinistra verso destra 
            if (parole[indice].length() > colonne) 
            {
                cout << "troppo lunga"; // se la lunghezza della aprola è più della lunghezza delle colonne non posso scrivere la colonna
                continue;
            }

            else
            {
                contatore++;
                int x = rand() % righe;
                int y = rand() % (colonne - parole[indice].length()); // mi dice il giusto numero random dove posso inserire la parola

                while (matrice[x][y] != vuoto ) // mi devo domandare se la posizione è vuota per inserire la parola
                {
                    x = rand() % righe;
                    y = rand() % (colonne - parole[indice].length()); // estrai due numeri finche non sono vuoti
                }

                for (int i = 0; i < parole[indice].length(); i++)
                {
                    if (matrice[x][y + i] != vuoto) // controllo se ho spazzi vuoti per tutta la parola
                    {
                        x = rand() % righe;
                        y = rand() % (colonne - parole[indice].length()); // cerco un altro posto se non ho abbastanza spazzi vuoti
                        i = 0;                                          // resetto il for
                    }
                }

                for (int i = 0; i < parole[indice].length(); i++) // leggo la parola e la scrivo nella matrice
                {
                    matrice[x][y + i] = parole[indice][i]; // inserisco qui
                }
            }
        }
        else if (indice % 7 == 1)
        {
            // verticale sopra verso sotto
            if (parole[indice].length() > righe)
            {
                
                cout << "troppo lunga"; // se la lunghezza della aprola è più della lunghezza delle colonne non posso scrivere la colonna
                continue;
            }

            else
            {
                contatore++;
                int x = rand() % (righe - parole[indice].length());
                int y = rand() % colonne; // mi dice il giusto numero random dove posso inserire la parola

                while (matrice[x][y] != vuoto) // mi devo domandare se la posizione è vuota per inserire la parola
                {
                    x = rand() % (righe - parole[indice].length());
                    y = rand() % colonne; // estrai due numeri finche non sono vuoti
                }

                for (int i = 0; i < parole[indice].length(); i++)
                {
                    if (matrice[x + i][y] != vuoto) // controllo se ho spazzi vuoti per tutta la parola
                    {
                        x = rand() % (righe - parole[indice].length());
                        y = rand() % colonne; // cerco un altro posto se non ho abbastanza spazzi vuoti
                        i = 0;                // resetto il for
                    }
                }

                for (int i = 0; i < parole[indice].length(); i++) // leggo la parola e la scrivo nella matrice
                {
                    matrice[x + i][y] = parole[indice][i]; // inserisco qui
                }
            }
        }
        else if ( indice % 7 == 2)
        {
            // diagonale
            if (parole[indice].length() > righe || parole[indice].length() > colonne) 
            {
                cout << "troppo lunga"; // se la lunghezza della aprola è più della lunghezza delle colonne non posso scrivere la colonna
                continue;
            }

            else
            {
                contatore++;
                int x = rand() % (righe- parole[indice].length());
                int y = rand() % (colonne- parole[indice].length()); // mi dice il giusto numero random dove posso inserire la parola
               
                    while (matrice[x][y] != vuoto && x == y) // mi devo domandare se la posizione è vuota per inserire la parola
                    {
                        x = rand() % (righe - parole[indice].length());
                        y = rand() % (colonne - parole[indice].length()); // estrai due numeri finche non sono vuoti
                    }

                    for (int i = 0; i < parole[indice].length(); i++)
                    {
                        if (matrice[x + i][y + i] != vuoto && parole[indice].length() > colonne) // controllo se ho spazzi vuoti per tutta la parola
                        {
                            x = rand() % (righe - parole[indice].length());
                            y = rand() % (colonne - parole[indice].length()); // cerco un altro posto se non ho abbastanza spazzi vuoti
                            i = 0;                                          // resetto il for
                        }
                    }

                    for (int i = 0; i < parole[indice].length(); i++) // leggo la parola e la scrivo nella matrice
                    {
                        matrice[x+i][y+i] = parole[indice][i]; // inserisco qui
                    }
                
            }
        }
        else if ( indice % 7 == 3)
        {
            //da destra verso sinistra
                        if (parole[indice].length() > colonne) 
            {
                cout << "troppo lunga"; // se la lunghezza della aprola è più della lunghezza delle colonne non posso scrivere la colonna
                continue;
            }

            else
            {
                contatore++;
                int x = rand() % righe;
                int y = rand() % (colonne - parole[indice].length()); // mi dice il giusto numero random dove posso inserire la parola

                while (matrice[x][y] != vuoto) // mi devo domandare se la posizione è vuota per inserire la parola
                {
                    x = rand() % righe;
                    y = rand() % (colonne - parole[indice].length()); // estrai due numeri finche non sono vuoti
                }

                for (int i =0 ; i < parole[indice].length() ; i--)
                {
                    if (matrice[x][y - i] != vuoto) // controllo se ho spazzi vuoti per tutta la parola
                    {
                        x = rand() % righe;
                        y = rand() % (colonne - parole[indice].length()); // cerco un altro posto se non ho abbastanza spazzi vuoti
                        i = 0;                                          // resetto il for
                    }
                }

                for (int i =parole[indice].length() ; i >=0 ; i--) // leggo la parola e la scrivo nella matrice
                {
                    matrice[x][y - i] = parole[indice][i]; // inserisco qui
                }
            }
        }
        else if( indice % 7 == 4 ) 
        {
            // da sotto a sopra 
                        if (parole[indice].length() > righe)
            {
                
                cout << "troppo lunga"; // se la lunghezza della aprola è più della lunghezza delle colonne non posso scrivere la colonna
                continue;
            }

            else 
            {
                contatore++;
                int x = rand() % (righe - parole[indice].length());
                int y = rand() % colonne; // mi dice il giusto numero random dove posso inserire la parola

                while (matrice[x][y] != vuoto) // mi devo domandare se la posizione è vuota per inserire la parola
                {
                    x = rand() % (righe - parole[indice].length());
                    y = rand() % colonne; // estrai due numeri finche non sono vuoti
                }

                for (int i = 0; i < parole[indice].length(); i++)
                {
                    if (matrice[x - i][y] != vuoto) // controllo se ho spazzi vuoti per tutta la parola
                    {
                        x = rand() % (righe - parole[indice].length());
                        y = rand() % colonne; // cerco un altro posto se non ho abbastanza spazzi vuoti
                        i = 0;                // resetto il for
                    }
                }

                for (int i = 0; i < parole[indice].length(); i++) // leggo la parola e la scrivo nella matrice
                {
                    matrice[x - i][y] = parole[indice][i]; // inserisco qui
                }
            }
        }
        else
        {

        }
    }

    // riempio la matrive con caratteri random
    // for (int i = 0; i < righe; i++)
    //{
    // for (int j = 0; j < colonne; j++)
    // {
    //     if (matrice[i][j] == vuoto)
    //     {
    //         matrice[i][j] = rand() % 25 + 97;
    //     }
    // }
    //}

   cout << "devi trovare " << contatore << " parole" << endl;
    // formatto e stampo
    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonne * 2 + 8;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < righe; i++)
    {

        if(i < 10){
            cout << "  " << i << " |";
        }
        else{
            cout << " " << i << " |";
        }
        
        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}
