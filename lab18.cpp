#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
private:
    int x, y;

public:

    // Конструктор за замовчуванням
    Vector()
    {
        x = 0;
        y = 0;
    }

    // Конструктор з параметрами
    Vector(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    // Метод виведення координат
    void show()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

    // Метод для обчислення довжини вектора
    double length()
    {
        return sqrt(x * x + y * y);
    }

    // Перевантаження оператора -
    Vector operator-(Vector op2)
    {
        Vector temp;

        temp.x = x - op2.x;
        temp.y = y - op2.y;

        return temp;
    }

    // Перевантаження оператора <
    bool operator<(Vector op2)
    {
        return length() < op2.length();
    }

    // Перевантаження оператора >
    bool operator>(Vector op2)
    {
        return length() > op2.length();
    }
};

int main()
{
    // Створення об'єктів
    Vector v1(10, 20);
    Vector v2(5, 7);
    Vector v3;

    // Виведення першого вектора
    cout << "Вектор v1:" << endl;
    v1.show();

    cout << endl;

    // Виведення другого вектора
    cout << "Вектор v2:" << endl;
    v2.show();

    cout << endl;

    // Віднімання векторів
    v3 = v1 - v2;

    cout << "Результат віднімання v1 - v2:" << endl;
    v3.show();

    cout << endl;

    // Порівняння векторів
    if (v1 > v2)
    {
        cout << "Вектор v1 більший за v2" << endl;
    }
    else if (v1 < v2)
    {
        cout << "Вектор v1 менший за v2" << endl;
    }
    else
    {
        cout << "Вектори рівні за довжиною" << endl;
    }

    return 0;
}
