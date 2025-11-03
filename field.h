#ifndef FIELD_H
#define FIELD_H

class Field {
private:
    int width;
    int height;

public:
    Field(int w, int h);         

    void printField() const;  
    int getWidth() const;       
    int getHeight() const;       
};

#endif