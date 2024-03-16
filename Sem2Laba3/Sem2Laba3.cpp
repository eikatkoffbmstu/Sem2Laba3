#include <iostream>

using namespace std;

class Square {
protected:
    double side;

public:
    Square(double side) : side(side) {}

    double getPerimeter() const {
        return 4 * side;
    }

    virtual void print() const {
        cout << endl;
        cout << "Side length: " << side << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

class Rectangle : public Square {
protected:
    double width;

public:
    Rectangle(double side, double width) : Square(side), width(width) {}

    double getPerimeter() const {
        Square::getPerimeter();
        return 2 * (side + width);
    }

    void print() const{
        Square::print();
        cout << "Width: " << width << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Square square(5);
    Rectangle rectangle(3, 6);

    square.print();
    cout << endl;
    rectangle.print();
    cout << endl;

    Square* s_ptr = new Square(7);
    Rectangle* r_ptr = new Rectangle(4, 8);

    s_ptr->print();
    cout << endl;
    r_ptr->print();
    cout << endl;

    return 0;
}
