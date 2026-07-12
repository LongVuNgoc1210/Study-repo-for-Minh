#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int[9]{4, 6, 7, 3, 8, 2, 1, 9, 5};

    if (ptr == nullptr)
    {
        cout << "fail";
    }
    else{


    for (int i = 0; i < 9; i++)
    {
        cout << *(ptr + i) << " ";
    }
    }
    delete[] ptr;
    

    return 0;
}