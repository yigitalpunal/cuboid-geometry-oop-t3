#include <iostream>
using namespace std;

class Cuboid {
private:
    int a, b, c; // Edges: length, width, height

public:
    // Default constructor
    Cuboid() {
        a = 0;
        b = 0;
        c = 0;
    }

    // Parameterized constructor
    Cuboid(int aVal, int bVal, int cVal) {
        a = aVal;
        b = bVal;
        c = cVal;
    }

    // Set functions
    void setA(int val) { a = val; }
    void setB(int val) { b = val; }
    void setC(int val) { c = val; }

    // Get functions
    int getA() const { return a; }
    int getB() const { return b; }
    int getC() const { return c; }

    // Function to calculate surface area
    int surfaceArea() const {
        return 2 * (a * b + a * c + b * c);
    }

    // Function to calculate volume
    int volume() const {
        return a * b * c;
    }

    // Friend function to input cuboid
    friend istream& operator>>(istream& in, Cuboid& cub);

    // Friend function to output cuboid
    friend ostream& operator<<(ostream& out, const Cuboid& cub);
};

// Input operator
istream& operator>>(istream& in, Cuboid& cub) {
    cout << "Enter length (a): ";
    in >> cub.a;
    cout << "Enter width (b): ";
    in >> cub.b;
    cout << "Enter height (c): ";
    in >> cub.c;
    return in;
}

// Output operator
ostream& operator<<(ostream& out, const Cuboid& cub) {
    out << "[" << cub.a << ", " << cub.b << ", " << cub.c << "]";
    return out;
}

// Main function
int main() {
    Cuboid box1, box2(2, 3, 4);

    cout << "Enter dimensions for box1:\n";
    cin >> box1;

    cout << "\nBox 1: " << box1 << endl;
    cout << "Box 2: " << box2 << endl;

    cout << "Surface area of box1: " << box1.surfaceArea() << endl;
    cout << "Volume of box1: " << box1.volume() << endl;

    return 0;
}
