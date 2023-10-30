#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movie_t {
    string title;
    int year;
} mine, yours;

void printmovie(movie_t movie);

int main()
{
    string mystr;
    
    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    cout << "Enter Title: ";
    getline(cin, yours.title);

    cout << "Enter Year: ";
    getline(cin, mystr);
    stringstream(mystr) >> yours.year;

    cout << "\nMy favourite movie is: \n";
    printmovie(mine);

    cout << "Your favourite movie is: \n";
        printmovie(yours);

    return 0;
}

void printmovie(movie_t movie) {
    cout << movie.title;
    cout << " (" << movie.year << ")\n\n";
}