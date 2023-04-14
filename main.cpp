#include "includes.h"

int main() {

    Date* A = new Date(6,12,2022);
    cout << A << endl;
    A->~Date();
    cout << A << endl;


    return 0; // Complete
}
