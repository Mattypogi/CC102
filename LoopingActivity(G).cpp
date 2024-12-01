#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        if (i % 2 == 0) {
            cout << " ";
        }
		
        for (int j = 1; j <= 10; j++) {
            cout << "^ ";
        }

        cout << endl;
    }

    return 0;
}