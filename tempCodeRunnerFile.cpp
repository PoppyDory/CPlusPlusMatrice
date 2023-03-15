    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != vuoto && (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]))
        {
            vincitore = -1;
        }
        else
        {
            vincitore = 0;
        }
    }