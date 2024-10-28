#pragma once
class Movie
{
    char* name;
    double time;
    int year;
    char* director;
    int ageRating;
    char* genre;

public:
    Movie();
    Movie(const char* n, double t, int y, const char* d, int a, const char* g); // Конструктор с параметрами
    Movie(const Movie& obj);
    ~Movie();
    void Print() const;
};

