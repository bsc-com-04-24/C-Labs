#include <iostream>
#include <string>
using namespace std;

int main() {

    string arry[] = {"B123", "C234", "A345","C15","B117","G3003","C235","B179"};

    //int b = 4;

    for(int i = 0; i < 8; i++) {
        if (arry[i][0] == 'B') {
            cout << arry[i] << endl;
        }
    }

    return 0;
}
