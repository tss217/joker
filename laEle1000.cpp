#include <iostream>
#include <fstream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        ofstream laEle;
        laEle.open("arquivo.txt"); // Abrindo o arquivo corretamente

        if (laEle.is_open()) {
            laEle << "la ELe\n";
            laEle.close();

            cout << "hahahahhahahaha" << i << endl;

        }
        else {
            cout << "0000x01" << endl;
        }
    }
}
