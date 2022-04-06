#include<iostream>
#include<time.h>
#include"Header.h"
using namespace std;

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size];
    int max{};
    int min{};

   

   
    Foo(arr,size,max, min); 
    return 0;
}