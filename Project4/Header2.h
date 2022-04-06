const int SIZE = 20;

void Set(int array[SIZE])
{
    for (int i = 0; i < SIZE; i++)
        array[i] = rand() % 101 - 100;
}

void PRINT(int array[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}

int prostie_chisla(int array[SIZE])
{
    int counter = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 2; j <= SIZE / 2; j++)
        {
            if (array[i] % j == 0 && array[i] != j)
            {
                array[i] = 0;
                counter++;
                break;
            }
        }
        if (array[i] != 0)
        {
            cout << " " << array[i];
        }
    }
    return 0;
}
