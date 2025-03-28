#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double distanceFromOrigin(const Point &p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

int main() {
    Point p = {3, 4};
    cout << "Distance from Origin: " << distanceFromOrigin(p) << endl;
    return 0;
}
