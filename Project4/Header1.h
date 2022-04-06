const int ArrSize = 10;
void Revers(int massive[])
{
    for (int i = 0; i < ArrSize; i++)
    {
        std::cout << massive[i] << std::endl;
    }
    std::cout << "REVERSED:" << std::endl;
    for (int i = ArrSize; i > 0; i--)
    {
        std::cout << massive[i - 1] << std::endl;
    }

}
