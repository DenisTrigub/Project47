
void Foo(int arr[],const int size = 10, int max = 0, int min = 0)
{
    arr[0] = rand() % 100;
    min = arr[0];
    for (int i = 1; i < size; i++)
    {
       
        arr[i] = rand() % 100;
     
        std::cout << " " << arr[i] << std::endl;
        if (max < arr[i])
        {
            max = arr[i];
           
        }

        if (min > arr[i])
        {
            min = arr[i];
            
        }
       
    }
    std::cout << max << std::endl;
    std::cout << min;
}