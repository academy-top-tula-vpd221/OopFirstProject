#include <iostream>

class User
{
    const int max = 100;
    int age;
    float height;
public:

    User(int a, float f) : age{ a }, height{ f } {}

    //User() : age{ 0 }, height{ 0 } {}
    User() : User(0, 0) {}
    //User(int a) : age{ a }, height{ 0 } {}
    User(int a) : User(a, 0) {}
    //User(float f) : age{ 0 }, height{ f } {}
    User(float f) : User(0, f) {}

    int GetAge()
    {
        return age;
    }
    void SetAge(int a)
    {
        if(a >= 0 && a <= 100)
            age = a;
    }
};

class Point
{
    int x;
    int y;
public:
    //Point() : x{ 0 }, y{ 0 } {}
    Point(int x = 0, int y = 0) : x{ x }, y{ y } {}
    int GetX() { return x; }
    int GetY() { return y; }
    void SetX(int x) { this->x = x; }
    void SetY(int y) { this->y = y; }
};

class Line
{
    Point point;
    int dx, dy;
public:
    Line(Point point, int dx, int dy) : point{ point }, dx{ dx }, dy{ dy } {};
    Line(int x, int y, int dx, int dy) : point{ Point(x, y) }, dx{dx}, dy{dy} {};
};

class DArray
{
    int* items;
    int size;
public:
    DArray(int size = 0) : size{ size }
    {
        items = new int[size];
    }
    ~DArray()
    {
        delete[]items;
    }
};

int main()
{
   
    User user(35);
    std::cout << "User age: " << user.GetAge() << "\n";


    //user.SetAge(45);

    //std::cout << "User age: " << user.GetAge();

    {
        DArray array(10);
    }
    
}
