#include "field.h"
#include <iostream>
#include <string>
using namespace std; 

Field::Field(int w, int h) : width(w), height(h) {
    grid = std::vector<std::vector<int>>(h, std::vector<int>(w, 0));

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                grid[i][j] = 1;
            }
            else {
                grid[i][j] = 0;
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
int& Field::at(int width, int height) {
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

