#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
    Movie* arrptr[2]{
        new Movie("Avatar", 2.10, 2009, "Ronne", 28, "Horror"),
        new Movie("Bad boys", 2.40, 1998, "Ronne", 28, "Horror")
    };

    for (int i = 0; i < 2; i++)
    {
        arrptr[i]->Print();
    }

    for (int i = 0; i < 2; i++)
    {
        delete arrptr[i];
    }

    return 0;
}