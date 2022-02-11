#include <iostream>
#include <cmath>
using namespace std;

struct Response {
    int tries, guess;
};

int tries = 0;

Response checkArray(int *arr, int target, int arraySize) {
    tries++;
    int min = 0;
    int max = arraySize -1;

    while(max >= min) {
        tries++;
        int guess = floor((max + min)/2);
      if (target == arr[guess]) {
          return Response {tries = tries, guess = guess};
      }
      else if (target > arr[guess]) {
          min = guess + 1;
      }
      else {
          max = guess - 1;
      }
    };
    return Response{tries, -1};
}

int main () {

    int list[] = {1,2,3,4,5,6,7};
    int size = sizeof list/sizeof list[0];
    Response res = checkArray(list, 9, size);
    cout << "tries: " << res.tries << "\n";
    cout << "location: " << "array[" << res.guess << "]" << endl;

}

