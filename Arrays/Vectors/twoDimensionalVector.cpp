#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row = 5;
    int column[] {1,2,3,4,5};

    vector<vector<int>> example(row);

    for (int i = 0; i < row; i++) {
        int col = column[i];

        example[i] = vector<int>(col);
        for (int j = 0; j < col; j++){
            example[i][j] = j + 1;
        }
    }

    // print
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < example[i].size(); j++) {
            cout << example[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}