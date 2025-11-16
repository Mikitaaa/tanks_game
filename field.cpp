#include "field.h"
#include <iostream>
#include <string>
using namespace std; 

Field::Field(int w, int h) : width(w), height(h) {
    grid = std::vector<std::vector<int>>(h, std::vector<int>(w, 0));
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
    cout << string(width, '*') << endl;
    for (int i = 0; i < height - 2; i++){
        for (int j = 0; j < width; j++){
            if (j == 0 or j == width - 1)
                cout << "*";
            else {
                cout << grid[i][j];
            }
        }
        cout << endl;
    }
     cout << string(width, '*') << endl;
}