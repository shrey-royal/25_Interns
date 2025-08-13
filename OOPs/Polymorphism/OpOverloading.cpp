#include <iostream>
#include <iomanip>
using namespace std;

class Point {
    int x, y;
    
public:
    Point() {
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Point operator+(const Point& p) {
        return Point(this->x + p.x, this->y + p.y);
    }

    bool operator==(const Point& p) {
        return (x == p.x && y == p.y);
    }

    void display() {
        // printf("(%02d, %02d)\n", x, y);
        cout << "(" << setfill('0') << setw(2) << x << ", " << setfill('0') << setw(2) << y << ")\n";
    }
};

int main() {
    Point p1(2, 3), p2(4, 5), p4(6, 8);
    Point p3 = p1 + p2;

    p1.display();
    p2.display();
    p3.display();
    p4.display();

    cout << ((p3 == p4) ? "True" : "False");

    return 0;
}