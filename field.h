#pragma once

class Field {
private:
    int width;
    int height;

public:
    Field(int w, int h);         

    void createField();  
    int getWidth() const;       
    int getHeight() const;       
};