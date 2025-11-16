#pragma once
#include <vector>

class Field {
private:
    int width;
    int height;
    std::vector<std::vector<int>> grid;


public:
    Field(int w, int h);         

    int& at(int width, int height);
    int getWidth() const;       
    int getHeight() const;    
    void printField();  
};