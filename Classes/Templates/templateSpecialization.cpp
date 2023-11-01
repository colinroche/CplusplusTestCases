#include <iostream>
using namespace std;

// class template
template <class T>
class myContainer {
        T element;
    public:
        myContainer(T arg) { element = arg; }
        T increase() { return ++element; }
};

// template specialization
template<>
class myContainer <char> {
        char element;
    public:
        myContainer(char arg) { element = arg; }
        char uppercase() {
            if ((element >= 'a')&&(element <= 'z')) 
                element += 'A' - 'a';
            return element;
        }
};

int main() {
    myContainer<int> numObject(5);
    myContainer<char> charObject('k');

    cout << numObject.increase() << '\n';
    cout << charObject.uppercase() << '\n';

    return 0;
}