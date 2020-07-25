#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    for(unsigned int counter{1}; counter <= 20; counter++) {
        /*
         * pick random number from 1 to 6 and output it
         *
         * To produce integers in the range 0 to 5, use remainder operator % with rand() as
         *
         *  rand() % 6, this is called scaling and the number 6 is called the scalling factor
         *
         *   The range of values produced is shifted by adding 1 to the result to get values 1 through 6
         */
        cout << setw(10) << (1 + rand() % 6);

        if(counter % 5 == 0) {
            cout << endl;
        }
    }
}
