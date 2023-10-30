#include <iostream>
#include <cmath>

class Wektor2D {
private:
    double x;
    double y;
    static int num_wek;

public:

    Wektor2D() : x(0.0), y(0.0)
    {
        num_wek++;
    }

    Wektor2D(double x, double y) : x(x), y(y) 
    {
        num_wek++;
    }

    ~Wektor2D()
    {
        num_wek--;
    }

    double norm()
    {
        return std::sqrt(x * x + y * y);
    }

    void setX(double newX)
    {
        x = newX;
    }

    double getX() const
    {
        return x;
    }

    void setY(double newY)
    {
        y = newY;
    }

    double getY() const
    {
        return y;
    }

    Wektor2D operator+(const Wektor2D& other)
    {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other)
    {
        return x * other.x + y * other.y;
    }

    friend std::ostream& operator<<(std::ostream& os, const Wektor2D& wektor)
    {
        return os;
    }

    static int populacja()
    {
        return num_wek;
    }

    static Wektor2D kart(double x, double y)
    {
        return Wektor2D(x, y);
    }

    static Wektor2D bieg(double r, double theta)
    {
        double x = r * std::cos(theta);
        double y = r * std::sin(theta);
        return Wektor2D(x, y);
    }

};
int Wektor2D::num_wek = 0;
