#include <iostream>
using namespace std;

#define TASK_NUMBER 2

#if TASK_NUMBER == 1

class Square {
protected:
    double side;

public:
    Square() {
        side = 0;
    }

    Square(double s) : side(s) {}

    double GetSide() const {

        return side;
    }

    double GetArea() const {

           return side * side;
    }

    double GetPerimeter() const {

           return 4 * side;
    }
};

class Circle {
protected:
    double radius;

public:
    Circle()
    {
        radius = 0;
    }

    Circle(double r) : radius(r) {}

    double GetRadius() const {

        return radius;
    }

    double GetDiameter() const {

          return 2 * radius;
    }

    double GetArea() const {

          return 3.14159 * radius * radius;
    }

    double GetPerimeter() const {

          return 2 * 3.14159 * radius;
    }
};

class InscribedCircleInSquare : public Square, public Circle {
public:
    InscribedCircleInSquare(double side) : Square(side), Circle(side / 2) {}

    void characteristic() {

        cout << "Square area: " << Square::GetArea() << endl;
        cout << "Square perimeter: " << Square::GetPerimeter() << endl;
        cout << "Inscribed circle radius: " << GetRadius() << endl;
        cout << "Inscribed circle diameter: " << GetDiameter() << endl;
        cout << "Inscribed circle area: " << Circle::GetArea() << endl;
        cout << "Inscribed circle perimeter: " << Circle::GetPerimeter() << endl;
    }
};

int main() {
    double side;
    cout << "Enter the side of the square: ";
    cin >> side;

    InscribedCircleInSquare figure(side);
    figure.characteristic();

    return 0;
}
#endif

#if TASK_NUMBER == 2


class Wheels {
protected:
    int numberOfWheels;

public:
    Wheels(int wheels) : numberOfWheels(wheels) {}

    int GetWheels() const {

        return numberOfWheels;
    }

    void rotate() {

        cout << "Wheels are rotating\n";
    }
};


class Engine {
protected:
    double fuelConsumption;

public:
    Engine(double fuel) : fuelConsumption(fuel) {}

    double GetFuelConsumption() const {
        return fuelConsumption;
    }

    void work() {
        cout << "Engine is working\n";
    }

};

class Doors {
protected:
    int numberOfDoors;

public:
    Doors(int doors) : numberOfDoors(doors) {}

    int GetNumberOfDoors() const {
        return numberOfDoors;
    }

    void open() {
        cout << "Number is open\n";
    }

};

class Car : public Wheels, public Engine, public Doors {
public:
    Car(int wheels, int fuel, int doors) : Wheels(wheels), Engine(fuel), Doors(doors) {}

    void drive() {
        cout << "The car is moving\n";
    }
};

int main() {

    Car car(4, 30, 4);

    cout << "Number of wheels: " << car.GetWheels() << endl;
    cout << "Engine fuel consumption: " << car.GetFuelConsumption() << endl;
    cout << "Number of doors: " << car.GetNumberOfDoors() << endl;
    cout << endl;
    car.open();
    car.work();
    car.drive();
    car.rotate();

    return 0;
}
#endif