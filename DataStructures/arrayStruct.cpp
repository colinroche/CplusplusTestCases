#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct movie_t {
    string title;
    int year;
} films[3];

void print_movie(movie_t movie) {
    cout << movie.title << " (" << movie.year << ")\n";
}

int main() {
    string mystr;
    int num_films = end(films) - begin(films);

    cout << "Enter " << num_films << " films:\n";

    for (int i = 0; i < num_films; i++)
    {
        cout << "Enter Title: ";
        getline(cin, films[i].title);

        cout << "Enter Year: ";
        getline(cin, mystr);
        stringstream(mystr) >> films[i].year;
    }

    cout << "The films entered where: \n";

    for (int i = 0; i < num_films; i++) {
        print_movie(films[i]);
    }

    return 0;
}
