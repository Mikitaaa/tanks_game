#include "field.h"
#include <iostream>
using namespace std;

int main() {
    int w, h;

    cout << "Enter width and height of the field: ";
    cin >> w >> h;

    Field myField(w, h);
    myField.printField();

    cout << "Field width: " << myField.getWidth() << endl;
    cout << "Field height: " << myField.getHeight() << endl;

}