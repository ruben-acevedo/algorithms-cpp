#include <iostream>
using namespace std;


int maxPair (int *arr, int size) {
    int product = 0;
    for (int i  = 0; i < size; ++i) {
            for (int j = i+1; j < size; j++) {
                product = max(product, arr[i] * arr[j]);
            }
        }
        return product;
}


int main () {
    int list[] = {100,2,2,4,6,2,20};
    int len = sizeof list / sizeof list[0];
    cout << maxPair(list, len) << endl;
}