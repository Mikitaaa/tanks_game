#include "field.h"
#include <iostream>
#include <string>
using namespace std; 

Field::Field(int w, int h){
    width = w;
    height = h;
}

void Field::createField() {
    char** field = new char*[height];
    for (int i = 0; i < height; i++) {
        field[i] = new char[width];
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                field[i][j] = '*';
            else
                field[i][j] = ' ';
        }
    }

    for (int i = 0; i < height; i++) {
        cout.write(field[i], width);
        cout << endl;
    }

    for (int i = 0; i < height; i++) {
        delete[] field[i];
    }
    delete[] field;
}

int Field::getWidth() const {
    return width;
}
int Field::getHeight() const {
    return height;
}