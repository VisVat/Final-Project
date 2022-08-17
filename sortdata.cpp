#include <iostream>
#include <string>
using namespace std;

class sortDataClass {

private:

    int* data;
    int datasize;
    int maxN;

public:
    void randomize() {
        for (int i = 0; i < datasize; i++)
            data[i] = rand() % maxN;
    }

    sortDataClass(int a, string dataset, int b) {
        datasize = a;
        maxN = b;

        data = new int[datasize];
        if (dataset == "inorder")
            for (int i = 0; i < datasize; i++) data[i] = i;
        else if (dataset == "reverseorder")
            for (int i = 0; i < datasize; i++) data[i] = maxN - i - 1;
        else if (dataset == "random")
            randomize();
        else
            cout << "Error";
    }

    void printData() {
        for (int i = 0; i < datasize; i++)
            cout << data[i] << endl;
    }
};

int main() {
    int datasize = 100;
    int maxN = 1000;

    cout << "In order data set" << endl;
    sortDataClass inorder(datasize, "inorder", maxN);
    inorder.printData();
    cout << endl;

    cout << "Reverse order data set" << endl;
    sortDataClass reverse(datasize, "reverseorder", maxN);
    reverse.printData();
    cout << endl;

    cout << "Random order data set" << endl;
    sortDataClass random(datasize, "random", maxN);
    random.printData();
    return 0;
}