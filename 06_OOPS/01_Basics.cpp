#include <iostream>
using namespace std;

/*
=====================================================================
    📌 Classes and Objects in OOP (C++)
=====================================================================

👉 INTRODUCTION
Object-Oriented Programming (OOP) is a paradigm that organizes
software design around objects.

- Class  → Blueprint/Template
- Object → Instance of a class
*/

// ===================================================================
// Example 1: Basic Class and Object
// ===================================================================
class ClassName {
    int data;   // private by default
public:
    void setData(int value) { data = value; }
    void display() { cout << "Data: " << data << endl; }
};

// ===================================================================
// Example 2: Access Specifiers
// ===================================================================
class Student {
private:
    int rollNo;   // private member
public:
    string name;  // public member

    void setRoll(int r) { rollNo = r; }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

// ===================================================================
// Example 3: Constructors and Destructors
// ===================================================================
class Demo {
public:
    Demo() {  // constructor
        cout << "Constructor called!" << endl;
    }
    ~Demo() { // destructor
        cout << "Destructor called!" << endl;
    }
};

// ===================================================================
// Example 4: Objects as Function Arguments
// ===================================================================
class Box {
    int length;
public:
    Box(int l) { length = l; }
    int getLength() { return length; }
};

void printBox(Box b) {  // pass by value
    cout << "Length = " << b.getLength() << endl;
}

// ===================================================================
// Example 5: Array of Objects
// ===================================================================
class Person {
public:
    string name;
    int age;
    void display() {
        cout << name << " - " << age << endl;
    }
};

// ===================================================================
// Example 6: Dynamic Objects
// ===================================================================
class DynDemo {
public:
    int x;
    DynDemo(int a) { x = a; }
    void show() { cout << "Value = " << x << endl; }
};

// ===================================================================
// MAIN FUNCTION (Driver Code)
// ===================================================================
int main() {
    cout << "\n--- Example 1: Basic Class ---\n";
    ClassName obj;
    obj.setData(10);
    obj.display();

    cout << "\n--- Example 2: Access Specifiers ---\n";
    Student s1;
    s1.name = "John";
    s1.setRoll(101);
    s1.display();

    cout << "\n--- Example 3: Constructor & Destructor ---\n";
    Demo d1; // constructor called automatically

    cout << "\n--- Example 4: Object as Function Argument ---\n";
    Box b1(15);
    printBox(b1);

    cout << "\n--- Example 5: Array of Objects ---\n";
    Person p[3];
    p[0].name = "Alice"; p[0].age = 18;
    p[1].name = "Bob";   p[1].age = 20;
    p[2].name = "Cathy"; p[2].age = 22;
    for (int i = 0; i < 3; i++) {
        p[i].display();
    }

    cout << "\n--- Example 6: Dynamic Objects ---\n";
    DynDemo *ptr = new DynDemo(100);  // dynamic object
    ptr->show();
    delete ptr;  // free memory

    return 0;
}

/*
=====================================================================
    📌 KEY FEATURES OF CLASSES AND OBJECTS
=====================================================================
1. Encapsulation → Wrapping of data + functions
2. Abstraction   → Hiding implementation details
3. Code Reuse    → Classes reused in multiple projects
4. Scalability   → Divide large problem into objects
=====================================================================
*/
