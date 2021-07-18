#include <iostream>
#include <ctime>


int main() {
    using namespace std;

    srand(time(NULL));

    short counter(0);
    char letletletmezxc[63] = "1234567890qwertyuiooasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm";
    char* code;
    short arrayLen;

    cout << "code size: ";
    cin >> arrayLen;

    code = new char[arrayLen];

    for (int i(0); i != arrayLen; i++) {
        code[i] = letletletmezxc[rand() % 62];
    }
    cout << "your code: ";
    for (int i(0); i != arrayLen; i++) {
        if (counter == 4) {
            cout << " - ";
            counter = 0;
        }
        cout << code[i];
        counter++;
    }
    delete[] code;
    cout << endl;

    system("pause");
    return 0;
};