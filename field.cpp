#include "field.h"
#include <iostream>
#include <string>
using namespace std; 

Field::Field(int w, int h) : width(w), height(h) {
    grid = std::vector<std::vector<char>>(h, std::vector<char>(w, 0));

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                grid[i][j] = '*';
            }
            else {
                grid[i][j] = ' ';
            }
        cout << endl;
        }

    }
}

int Field::getWidth() const {
    return width;
}
int Field::getHeight() const {
    return height;
}
char& Field::at(int width, int height) {
    return grid[width][height];
}
void Field::printField(){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

