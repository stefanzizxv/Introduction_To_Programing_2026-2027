#include <iostream>
#include <cmath>
using namespace std;

double getLength(double x1, double y1, double x2, double y2) {
    double length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return length;
}

double getPerimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = getLength(x1, y1, x2, y2);
    double b = getLength(x2, y2, x3, y3);
    double c = getLength(x1, y1, x3, y3);
    double perimeter = a + b + c;
    return perimeter;
}

double getArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = getLength(x1, y1, x2, y2);
    double b = getLength(x2, y2, x3, y3);
    double c = getLength(x1, y1, x3, y3);
    double s = getPerimeter(x1, y1, x2, y2, x3, y3)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

bool isInCircleWithRadius(double r, double x1, double y1, double x2, double y2, double x3, double y3) {
    if ((x1*x1 + y1*y1) <= r*r) {
        if ((x2*x2 + y2*y2) <= r*r) {
            if ((x3*x3 + y3*y3) <= r*r) {
                return true;
            }
        }
    }

    return false;

}

int main() {
    double x1, y1, x2, y2, x3, y3, r;
    cout << "Enter the coordinates of the points, and r of the circle: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;

    cout << "Perimeter: " << getPerimeter(x1, y1, x2, y2, x3, y3) << endl;
    cout << "Area: " << getArea(x1, y1, x2, y2, x3, y3) << endl;
    cout << boolalpha;
    cout << "Is in circle: " << isInCircleWithRadius(r, x1, y1, x2, y2, x3, y3) << endl;

}