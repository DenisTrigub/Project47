using namespace std;

const int ArSize = 10;
void func(int massive[])
{
    for (int i = 0; i < ArSize; i++)
    {
        cout << massive[i] << endl;
    }
    cout << "REVERSED:" << endl;
    for (int i = ArSize; i > 0; i--)
    {
        cout << massive[i - 1] << endl;
    }

}

int main()
{
    int numbers[ArSize] = { -5, -4, -3, -2, -1, 1, 2, 3, 4, 5 };
    func(numbers);
    return 0;
}