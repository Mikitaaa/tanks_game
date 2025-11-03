#include "field.h"
#include <iostream>
#include <string>
using namespace std; 


Field::Field(int w, int h){
    width = w;
    height = h;
}

void Field::printField() const {
    cout << string(width, '*') << endl;
    for (int i = 0; i < height-2; i++){
        cout <<  "*" << string(width - 2, ' ') << "*" << endl;
    }
    cout << string(width, '*') << endl;
}
int Field::getWidth() const {
    return width;
}
int Field::getHeight() const {
    return height;
}