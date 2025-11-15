#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class People
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "Eating" << endl;
    }
};
// Single Inheritance
class Asion : public People
{
};

class A
{
public:
    int physic;
    int chemistry;

    A()
    {
        chemistry = 1000;
    }
};

class B
{
public:
    int chemistry;
    int math;

    void M()
    {
        math = 324092;
    }

    B()
    {
        chemistry = 133;
    }
};

// Multiple Inheritance
class C : public A, public B
{
public:
    int english;
    int math;

    C()
    {
        math = 3489;
    }
};

class D
{
public:
    string name;
};

class E : public D
{
public:
    string type;
};

class F : public D
{
public:
    string property;
};

class Fruit
{
public:
    string name;
};

class Mango : public Fruit
{
public:
    int weight;
};

// Multilevel Inheritance
class Alphanso : public Mango
{
public:
    int sugarLevel;
};

class Polymorphism
{
public:
    int val;

    // operator overloading
    void operator+(Polymorphism &obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value1 - value2) << endl;
    }
    // Function Overloading
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
    int sum(int a, double b)
    {
        return a + b + 10;
    }
    int sum(int a, float b)
    {
        return a + b + 10;
    }
};
int main()
{
    // Asion asion;
    // asion.eat();
    // C c;

    // Alphanso al;
    // cout << al.name << al.weight << al.sugarLevel << endl;
    // cout << c.physic << c.chemistry << c.english;
    // :: -> Scope Resolution operator
    // cout << c.physic << " " << c.A::chemistry << " " << c.B::math;
    // F f;
    // cout << f.name << endl;

    // E e;
    // cout << e.name << endl;

    Polymorphism obj1, obj2;
    // cout << "Sum: " << obj.sum(45, 32) << endl;
    // cout << "Sum: " << obj.sum(45, 32, 45) << endl;
    // cout << "Sum: " << obj.sum(45, 45.63) << endl;
    // // when use float as a argument
    // cout << "Sum: " << obj.sum(45, 45.63f) << endl;

    obj1.val = 7;
    obj2.val = 5;

    // this should print the difference between them
    obj1 + obj2;
    return 0;
}