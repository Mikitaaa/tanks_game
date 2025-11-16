#pragma once
#include <vector>

class Field {
private:
    int width;
    int height;
    std::vector<std::vector<char>> grid;


public:
    Field(int w, int h);         

    char& at(int width, int height);
    int getWidth() const;       
    int getHeight() const;    
    void printField();  
};