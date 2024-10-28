#include "Movie.h"
#include <iostream>
#include <cstring>
using namespace std;

Movie::Movie() : name(nullptr), time(0), year(0), director(nullptr), ageRating(0), genre(nullptr) {}
Movie::Movie(const char* n, double t, int y, const char* d, int a, const char* g)
    : time(t), year(y), ageRating(a)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    director = new char[strlen(d) + 1];
    strcpy(director, d);
    genre = new char[strlen(g) + 1];
    strcpy(genre, g);
}
Movie::Movie(const Movie& obj)
    : time(obj.time), year(obj.year), ageRating(obj.ageRating)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    director = new char[strlen(obj.director) + 1];
    strcpy(director, obj.director);
    genre = new char[strlen(obj.genre) + 1];
    strcpy(genre, obj.genre);
}
Movie::~Movie()
{
    delete[] name;
    delete[] director;
    delete[] genre;
}2
void Movie::Print() const
{
    cout << "Name: " << name << "\nDuration: " << time << " hours\nYear: " << year
        << "\nDirector: " << director << "\nAge Rating: " << ageRating
        << "\nGenre: " << genre << "\n" << endl;
}
