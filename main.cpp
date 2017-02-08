// This program shows how to pass an entire array to a function.
#include <iostream>
using namespace std;

void showValues(int intArray[], int size);  // Function prototype

int main()
{
    const int ARRAY_SIZE = 8;
    int collection [ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 40};

    cout << "The array contains the values\n";
    showValues(collection, ARRAY_SIZE);

    return 0;

}