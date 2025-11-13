

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

    void setWeight(int w)
    {
        weight = w;
    }
};
int main()
{
    // Object Creation

    // Static
    Animal dogy;
    dogy.age = 12;
    dogy.name = "Robin";
    cout << "Dogy name: " << dogy.name << endl;
    cout << "Dogy age: " << dogy.age << endl;
    cout << "Dogy : ";
    dogy.sleep();

    dogy.setWeight(101);
    cout << "Dogy weight: " << dogy.getWeight() << endl;
    // Dynamic

    // cout << "The Size of class: " << sizeof(Animal) << endl;
    return 0;
}