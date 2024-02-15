#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override
    {
        return 3.14159 * radius * radius;
    }

    double calculatePerimeter() override
    {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override
    {
        return length * width;
    }

    double calculatePerimeter() override
    {
        return 2 * (length + width);
    }
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() override
    {
        return 0.5 * base * height;
    }

    double calculatePerimeter() override
    {
        // Assuming it's an equilateral triangle
        return 3 * base;
    }
};

int main()
{
    // Example usage
    Circle circle(5);
    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Circle Perimeter: " << circle.calculatePerimeter() << endl;

    Rectangle rectangle(4, 6);
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;

    Triangle triangle(3, 4);
    cout << "Triangle Area: " << triangle.calculateArea() << endl;
    cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}