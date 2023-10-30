#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movie_t {
    string title;
    int year;
};

int main()
{
    string mystr;

    movie_t movie;
    movie_t * pmovie;
    pmovie = &movie;

    cout << "Enter title: ";
    getline(cin, pmovie->title);

    cout << "Enter year: ";
    getline(cin, mystr);
    stringstream(mystr) >> pmovie->year;

    cout << "The movie you enterd is: \n" << movie.title << " " << movie.year << "\n\n";

    return 0;
}