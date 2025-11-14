#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Animal
{
    // state or properties
private:
    int weight;

public:
    int age;
    string name;

    // Default constructor
    Animal()
    {
        this->age = 0;
        this->weight = 0;
        this->name = "";
        cout << "Constructor Called" << endl;
    }

    // parameterized constructor
    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parameterized Constructor Called" << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->name = obj.name;
        this->weight = obj.weight;
        cout << "I am copy constructor" << endl;
    }

    // behavior
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    int getWeight()
    {
        return weight;
    }

    // void setWeight(int w)
    // {
    //     weight = w;
    // }
    void setWeight(int weight)
    {
        this->weight = weight;
    }

    void print()
    {
        cout << "Name: " << this->name << " Age: " << this->age << " and weight: " << this->weight << endl;
    }

    // automaticaly call when use static memory
    ~Animal()
    {
        cout << "I am inside destructor" << endl;
    }
};
int main()
{
    // Object Creation

    // Static
    // Animal dogy;
    // dogy.age = 12;
    // dogy.name = "Robin";
    // cout << "Dogy name: " << dogy.name << endl;
    // cout << "Dogy age: " << dogy.age << endl;
    // cout << "Dogy : ";
    // dogy.sleep();

    // dogy.setWeight(101);
    // cout << "Dogy weight: " << dogy.getWeight() << endl;
    // Dynamic

    Animal *cat = new Animal;
    (*cat).age = 15;

    // delete manually dynamic memory
    delete cat;
    // (*cat).name = "Meow";
    // (*cat).eat();
    // Alternate - dynamic
    // cat->age = 15;
    // cat->name = "Meow";
    // cat->eat();

    // Animal *bird = new Animal(20, 10);

    // object copy - 1st way
    // Animal b = dogy;
    // object copy - 2nd way
    // Animal c(b);

    Animal a;
    a.age = 20;
    a.setWeight(23);
    a.name = "Cat";
    Animal b = a;
    cout << endl;
    cout << endl;
    cout << "Before modified" << endl;
    cout << "a-> ";
    a.print();
    cout << "b-> ";
    b.print();

    cout << endl;
    cout << endl;
    a.name[0] = 'R';
    cout << "After modified" << endl;
    cout << "a-> ";
    a.print();
    cout << "b-> ";
    b.print();
    // cout << "Dogy name: " << cat.name << endl;
    // cout << "Dogy age: " << cat.age << endl;
    // cout << "The Size of class: " << sizeof(Animal) << endl;
    return 0;
}