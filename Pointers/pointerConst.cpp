// pointers as parameters

#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

void increment_all(int* start, int* stop)
{
    int * current = start;

    cout << *start << "\n\n";

    while (current != stop)
    {
        ++(*current);
        ++current;
    }
}

void print_all(const int* start, const int* stop)
{
    const int * current = start;

    while (current != stop)
    {
        cout << *current << ", ";
        ++current;
    }
}

int main () {
    int numbers[]{10, 20, 30, 40, 50, 60};

    increment_all(numbers, numbers + 6);
    print_all(numbers, numbers+6);
    cout << END;
    return 0;
}