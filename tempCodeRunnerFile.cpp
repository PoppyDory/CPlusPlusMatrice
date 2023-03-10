    int sommaRighe = 0;
    int sommaColonne = 0;
    cout << endl;
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            sommaColonne+=j;
        }
    }

    for (int i=0; i<righe; i++)
    {
        for (int j=0; j<colonne; j++)
        {   
            cout << matriceRandom[i][j] << " "<< sommaColonne;
        }
    }