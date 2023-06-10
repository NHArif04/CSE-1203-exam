# <mark>CSE-1203-exam </mark>
- [x] [CT-Solution](#ct),
- [x] [Mid-Solution](#mid),
- [x] [Final-Solution]
- [ ] [Lab-Solution](#lab),
- [x] [All-Topic](#class-all-topic)

<br><br><br><br>
## *__CT__*
### ___Question CT-1___

<img src="image/CT-1.jpg" alt="Image of CT-1">

<br>

***Solution:***
<br>
### <mark>___Answer No. - 01___</mark>

**Class:** A user defined data type which holds its own data members and member functions which can be accessed and used by creating an instance of that class.

**Object:** Any class type variable or  an instance of a class is called an object.

Here is an simple code example:
```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}
    void print() {
      cout << x << endl;
    }
};

int main() {
  MyClass obj(5);
  obj.print();
  return 0;
}
```

<br><br>
### <mark>___Answer No. - 02___</mark>
```CPP
#include<iostream>
using namespace std;

class ABCD{
private:
    int x,y;

public:
    void set(int a, int b){
        x=a;
        y=b;
    }

    void show(){
        cout<<x<<" "<<y;
    }
};

int main(){
    ABCD obj;
    obj.set(7,5);
    obj.show();
    return 0;
}
```
<br><br>
### <mark>___Answer No. - 03(a)___</mark>

* **Namespace :**
> A namespace is a container for identifiers that helps organize code by grouping related classes, functions, and variables under a unique name. It defines a scope or context in which identifiers are used and prevents naming conflicts by allowing for the use of the same identifier name in different parts of a program without causing conflicts.

* **Constructor :**
> A special type of function that is used to initialize the object. It is called at the time of object creation.

* **Scope Resolution Operator :**
> The scope resolution operator :: is used in C++ to specify the context of an identifier and to access hidden or out-of-scope elements. It helps prevent naming conflicts.

<br><br>
### ___Question CT-2___

<img src="image/CT-2.jpg" alt="Image of CT-2">

<br>

***Solution:***
### <mark>___Answer No. - 01___</mark>
>

<br><br>
### ___Question CT-3___

<img src="image/CT-3.jpg" alt="Image of CT-3">

<br>

<mark>***Solution:***
### ___Answer No. - 01___
</mark>

> Purpose of exception handling is to help programs deal with unexpected situations or errors that may occur during runtime. By using structured techniques to detect and respond to these exceptional conditions, developers can prevent their programs from crashing and ensure that they continue to run smoothly even when unexpected events occur.

>In C++, exception handling is implemented using try, catch, and throw blocks. The try block contains code that may throw an exception, and the catch block handles the exception. If an exception is thrown, the program jumps to the catch block.:
```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        // code that may throw an exception
        throw "An error occurred";
    } catch (const char* msg) {
        // code to handle the exception
        cerr << msg << endl;
    }
    return 0;
}
```
or
```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin>>num1>>num2;
    try {
        if(num2==0)
            throw "An error occurred";
        double result = (double)num1/num2;
        cout<<"result : "<<result<<endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}
```
<br><br>
### <mark>___Answer No. - 02___</mark>
>A generic template is a tool in C++ that lets programmer to write code that works with many data types. It helps to avoid writing the same code for each data type, making your code more flexible and easier to maintain. 

```cpp
#include <iostream>
using namespace std;

template <typename T>
T max(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << max(3, 7) << endl; // 7
    cout << max(3.0, 7.0) << endl; // 7
    cout << max('a', 'b') << endl; // b
    return 0;
}
```

<br><br><br><br>
## *__MID__*
### ___Question Mid___
<img src="image/midd.jpg" alt="Image of Mid">
<img src="image/mid.jpg" alt="Image of Mid">

### <mark>___Answer No. - 01(a)___</mark>
```cpp
#include<iostream>
using namespace std; 
class Number{
        int number1, number2;
    public:
        void set(int a, float b)
        {
            number1 = a;
            number2 = b;
        }
        
        void show()
        {
            cout<<number1<<" "<<number2<<endl;
        }
};
int main(){
    Number n;
    n.set(7, 5.00);
    n.show();  //7 5
    return 0;
}
```
<br><br>
### <mark>___Answer No. - 01(b)___</mark>
```cpp
#include<iostream>
using namespace std;

class Number{
        int number1,  number2;
    public:
        Number(){number1 = 0; number2 = 0;}
        Number(int a, float b)
        {
            number1 = a;
            number2 = b;
        }

        void show()
        {
            cout<<number1<<" "<<number2<<endl;
        }
};

int main()
{
    Number obj, obj1(7, 5.00);
    obj.show(); //0 0 
    obj1.show(); //7 5
    return 0;
}
```
### <mark>___Answer No. - 02(a)___</mark>
```cpp
#include <iostream>
using namespace std;

class AB
{
    int n1, n2;

public:
    AB(int a, int b = 0)
    {
        n1 = a;
        n2 = b;
        cout << n1 << " " << n2 << endl;
    }
    ~AB()
    {
        cout << "destructing AB" << endl;
    }
};

class CD : public AB
{
    int n1, n2;

public:
    CD(int a, int b) : AB(b)
    {
        n1 = a;
        n2 = b;
        cout << n1 << " " << n2 << endl;
    }
    ~CD()
    {
        cout << "destructing CD" << endl;
    }
};

int main() // class object niye kaj korle obosshoi c++ a return type int hobe
{
    CD d(10, 20);
    return 0;
}

```
**Output:**
```out
20 0
10 20
destructing CD
destructing AB
```
>Here parent class constructor are being call at first and then the child class constructor but in the case of destructor is opposite.

### <mark>___Answer No. - 02(b)___</mark>
* __Access modifier:__
> In C++, access modifiers are keywords that control the accessibility of member variables and member functions of a class. They are used to implement data hiding, which is an important concept in object-oriented programming. Data hiding means that some data and functions in a class are hidden from the outside world, so they can only be accessed by certain functions. Access modifiers are used to implement the principle of encapsulation in Object-Oriented Programming (OOP).

> There are three types of access modifiers in C++: public, private, and protected. When a member variable or member function is declared as public, it can be accessed from anywhere in the program. When a member variable or member function is declared as private, it can only be accessed from within the class. When a member variable or member function is declared as protected, it can only be accessed from within the class and its derived classes.

* __Friend Function:__
> A friend function in C++ is a special type of function that is not part of the class but can still access the private and protected data in the class.

<br><br>
### <mark>___Answer No. - 03(a)___</mark>
```cpp
#include<iostream>
using namespace std;

class BAUST{
public:
    string cse;
    void show(){cout<<"Nahid"<<endl;}
private:
    string eee;
protected:
    string me;
};

class MIT: private BAUST{
    //all private but private will not inherit
};

class IIT: protected BAUST{
    //all members are protected but private will not inherit
};

int main()
{
    BAUST ob;
    MIT obj;
    IIT object;
    ob.show();
    //obj.show(); //inaccessible private properties
    //object.show(); //same here
    return 0;
}
```
<br><br>
### <mark>___Answer No. - 03(b)___</mark>
```cpp
#include<iostream>
using namespace std;

class A{
public:
    int x;
    A()
    {
        cout<<"A called"<<endl;
    }
protected:
    int y;
private:
    int z;
};

class B: public A{      //multi level
public:
    B()
    {
        cout<<"B called"<<endl;
    }
};

class C: protected A{   //multi level
public:
    C(){
        cout<<"C called"<<endl;
    }
};

class D: public B, private C{   //multiple inheritance
};

int main()
{
    A a;
    cout<<endl;
    B b;
    cout<<endl;
    C c;
    cout<<endl;
    D d;
    return 0;
}

```
<br><br>
### <mark>___Answer No. - 04(a)___</mark>
```cpp
#include<iostream>
#include<cstring>
using namespace std;

class car;
class bike{
        char model[20];
        float speed;
        int passengers;
    public:
        bike(const char m[], float s, int p)
        {
            strcpy(model, m);
            speed = s;
            passengers = p;
        }

        friend void compareSpeed(car car1, bike bike1);
};

class car{
        char model[20];
        float speed;
        int passengers;
    public:
        car(const char m[], float s, int p)
        {
            strcpy(model, m);
            speed = s;
            passengers = p;
        }

        friend void compareSpeed(car car1, bike bike1);
};

void compareSpeed(car car1, bike bike1)
{
    if (car1.speed > bike1.speed){
        cout << "Car is faster than bike" << endl;
    } else if (bike1.speed > car1.speed){
        cout<<"Bike is faster than Car"<<endl;
    } else {
        cout<<"Car and Bike are at same speed"<<endl;
    }
}

int main()
{
    car car1("Toyota", 120.4,4);
    bike bike1("Yamaha", 80.0,2);
    compareSpeed(car1, bike1);
    return 0;
}
```
<br><br><br><br>

# ***Final Solution***
## <u>***Winter 22 Solution***</u>
### <mark>___Answer No. - 01(a)___</mark>
> a) Object-oriented programming (OOP) is a programming method that uses objects and their interactions to design applications and computer programs. The philosophy behind OOP is to break down a problem into smaller, manageable parts by creating objects that interact with each other. The basic principles of OOP are Abstraction, Encapsulation, Inheritance, and Polymorphism

<br><br>

### <mark>___Answer No. - 01(b)___</mark>
 Here is a C++ program that represents the scenario you described:
```cpp
#include <iostream>
using namespace std;

class Number {
private:
    int n;
public:
    Number(int num) {
        n = num;
    }
    void showNumber() {
        cout << n << endl;
    }
};

int main() {
    Number obj(10);
    obj.showNumber();
    return 0;
}
```


<br><br>

### <mark>___Answer No. - 01(c)___</mark>
Here are some advantages of using constructors and destructors in C++:
- Constructors are special functions that are called when an object is created. They allow you to set initial values for the object’s member variables.
- Destructors are special functions that are called when an object is destroyed. They allow you to clean up any resources that the object may have acquired during its lifetime.
- Both constructors and destructors help to manage the lifecycle of objects in a safe and controlled manner.

<br><br>

### <mark>___Answer No. - 02(a)___</mark>
Here is a corrected and complete version of the code segment:

```cpp
#include <iostream>
using namespace std;

class Coordinate {
    int x;
    int y;
public:
    Coordinate(int n1, int n2) : x(n1), y(n2) {}

    void displayCoordinate() {
        cout << x << " " << y << endl;
    }

    Coordinate operator+(const Coordinate& other) {
        return Coordinate(x + other.x, y + other.y);
    }

    bool operator>(const Coordinate& other) {
        return (x > other.x) && (y > other.y);
    }
};

int main() {
    Coordinate coord1(30, 40), coord2(10, 50);
    Coordinate coord3 = coord1 + coord2;

    if (coord1 > coord2)
        cout << "coord1 is greater" << endl;

    coord3.displayCoordinate();

    return 0;
}
```

<br><br>

### <mark>___Answer No. - 02(b)___</mark>
Namespaces in C++ are used to organize code and prevent naming conflicts. Here is an example that demonstrates the use of namespaces:

```cpp
#include <iostream>
using namespace std;

namespace First {
    int x = 5;
    int y = 10;
}

namespace Second {
    double x = 3.1416;
    double y = 2.7183;
}

int main() {
    // Accessing variables from the First namespace
    cout << First::x << endl;
    cout << First::y << endl;

    // Accessing variables from the Second namespace
    cout << Second::x << endl;
    cout << Second::y << endl;

    return 0;
}
```

In this example, we have two namespaces: `First` and `Second`. Each namespace contains two variables: `x` and `y`. By using the scope resolution operator (`::`), we can access the variables from each namespace without any naming conflicts.

<br><br>

### <mark>___Answer No. - 03(a)___</mark>
> The protected access modifier is used to specify that members of a class can be accessed within the class itself and within its derived classes. This is different from the private access modifier, which specifies that members can only be accessed within the class itself. Using protected instead of private allows derived classes to access and use the members of the base class.

<br><br>

### <mark>___Answer No. - 03(b)___</mark>
> When inheriting from the BAUST class as private in the MIT class, all public and protected members of BAUST become private in MIT(-cse -me). When inheriting from the BAUST class as protected in the BIT class, all public and protected members of BAUST become protected in BIT(#cse #me). 

<br><br>

### <mark>___Answer No. - 03(c)___</mark>
>  Ambiguity in function overloading occurs when the compiler cannot determine which overloaded function to call based on the arguments provided. This can happen when two overloaded functions have the same number of parameters but different types, or when the arguments provided can be implicitly converted to match the parameter types of multiple overloaded functions.

}}}}Nicher eigula shudhu bujhanor jonno{{{{

Two overloaded functions have the same number of parameters but different types:

```cpp
#include <iostream>
using namespace std;

void print(int x, int y) {
    cout << "int version: " << x << " " << y << endl;
}

void print(double x, double y) {
    cout << "double version: " << x << " " << y << endl;
}

int main() {
    print(3, 4); // Ambiguity: which version of print should be called?
    return 0;
}
```
In this example, both versions of the `print` function have two parameters, but one takes `int` arguments and the other takes `double` arguments. When calling `print(3, 4)`, the compiler cannot determine which version of `print` to call because both `int` and `double` versions are equally good matches for the provided arguments.

The arguments provided can be implicitly converted to match the parameter types of multiple overloaded functions:

```cpp
#include <iostream>
using namespace std;

void print(int x) {
    cout << "int version: " << x << endl;
}

void print(double x) {
    cout << "double version: " << x << endl;
}

int main() {
    print(3.14); // Ambiguity: which version of print should be called?
    return 0;
}
```

In this example, both versions of the `print` function take a single argument, but one takes an `int` argument and the other takes a `double` argument. When calling `print(3.14)`, the compiler cannot determine which version of `print` to call because the provided argument can be implicitly converted to both `int` and `double`.

<br><br>

### <mark>___Answer No. - 04(a)___</mark>
Here is a C++ code that reflects the scenario described in the class diagram:

```cpp
#include <iostream>
#include <cstring>
using namespace std;

class Bike;

class Car {
    char model[20];
    float speed;
    char brand[20];
public:
    Car(const char* m, float s, const char* b) {
        strcpy(model, m);
        speed = s;
        strcpy(brand, b);
    }
    friend void findFastest(Car c, Bike b);
};

class Bike {
    char model[20];
    float speed;
    char brand[20];
public:
    Bike(const char* m, float s, const char* b) {
        strcpy(model, m);
        speed = s;
        strcpy(brand, b);
    }
    friend void findFastest(Car c, Bike b);
};

void findFastest(Car c, Bike b) {
    if (c.speed > b.speed)
        cout << "The car is faster" << endl;
    else
        cout << "The bike is faster" << endl;
}

int main() {
    Car c1("Model S", 250.0f, "Tesla");
    Bike b1("Ninja", 300.0f, "Kawasaki");

    findFastest(c1, b1);

    return 0;
}
```

In this example, we have two classes: `Car` and `Bike`. Both classes have a constructor that takes three arguments and initializes the values of the member variables. We also have a friend function `findFastest` that takes a `Car` object and a `Bike` object as arguments and prints which vehicle has a higher speed.
<br><br>
### <mark>___Answer No. - 04(b)___</mark>
Here is a complete C++ program that uses the `Person` class to find the oldest person out of 5 people:

```cpp
#include <iostream>
#include <cstring>
using namespace std;

class Person {
    string name;
    int age;
    double salary;
public:
    Person(string n, int a, double s) : name(n), age(a), salary(s) {}

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }
};

int main() {
    Person p1("Alice", 30, 5000.0);
    Person p2("Bob", 40, 6000.0);
    Person p3("Charlie", 50, 7000.0);
    Person p4("Dave", 60, 8000.0);
    Person p5("Eve", 70, 9000.0);

    Person people[] = {p1, p2, p3, p4, p5};
    int oldestAge = people[0].getAge();
    string oldestName = people[0].getName();

    for (int i = 1; i < 5; i++) {
        if (people[i].getAge() > oldestAge) {
            oldestAge = people[i].getAge();
            oldestName = people[i].getName();
        }
    }

    cout << "The oldest person is " << oldestName << " with an age of " << oldestAge << endl;

    return 0;
}
```

In this example, we create five `Person` objects with different names, ages and salaries. We then use a loop to iterate over the array of `Person` objects and find the person with the highest age. Finally, we print the name and age of the oldest person.

<br><br>

### <mark>___Answer No. - 05(a)___</mark>
5. a) Here is a short and simple C++ code that uses the STL to solve the problem described:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {111, 12, 15, 100, 40, 55};

    numbers.erase(remove(numbers.begin(), numbers.end(), 100), numbers.end());
    auto it = find(numbers.begin(), numbers.end(), 12);
    if (it != numbers.end()) {
        numbers.insert(it + 1, 200);
    }

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

In this example, we use a `vector` to represent the series of numbers. We then use the `erase` and `remove` functions to delete the number `100` from the series and the `find` and `insert` functions to add the number `200` after the number `12`. Finally, we use the `sort` function to sort the series in ascending order and a range-based for loop to print the updated series.

<br><br>

### <mark>___Answer No. - 05(b)___</mark>
> The program supports an object-oriented approach by using a Series class to represent a series of numbers and providing member functions to manipulate the series in various ways. The program achieves productivity by using efficient algorithms and data structures from the C++ Standard Library to implement the member functions. For example, we use the remove and erase functions to delete a number from the series in linear time, and we use the sort function to sort the series in ascending order in O(n log n) time. This allows us to achieve the expected output within the shortest possible time without compromising the quality of the algorithm or task.

<br><br>

### <mark>___Answer No. - 06(a)___</mark>

```cpp
Here is a simple and easy-to-understand C++ program that calculates and shows the area of each shape through a common interface (`Shape`):

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double dimension1;
    double dimension2;
public:
    Shape(double d1 = 0, double d2 = 0) : dimension1(d1), dimension2(d2) {}
    virtual double calculateArea() = 0;
};

class Triangle : public Shape {
public:
    Triangle(double base = 0, double height = 0) : Shape(base, height) {}
    double calculateArea() {
        return (dimension1 * dimension2) / 2;
    }
};

class Square : public Shape {
public:
    Square(double side = 0) : Shape(side, side) {}
    double calculateArea() {
        return dimension1 * dimension2;
    }
};

class Circle : public Shape {
public:
    Circle(double radius = 0) : Shape(radius, radius) {}
    double calculateArea() {
        return M_PI * pow(dimension1, 2);
    }
};

int main() {
    Shape *shapes[3];
    shapes[0] = new Triangle(3, 4);
    shapes[1] = new Square(5);
    shapes[2] = new Circle(6);

    for (int i = 0; i < 3; i++) {
        cout << "Shape " << i + 1 << " area: " << shapes[i]->calculateArea() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}
```
This program defines an abstract base class `Shape` with a pure virtual function `calculateArea()` that must be overridden by derived classes. The `Triangle`, `Square`, and `Circle` classes are derived from the `Shape` class and each provides its own implementation of the `calculateArea()` method to calculate the area of the respective shape.

In the `main()` function, an array of `Shape` pointers is created and initialized with instances of the derived classes. The program then iterates over the array and calls the `calculateArea()` method on each shape to calculate and display its area. Since the `calculateArea()` method is virtual and overridden by each derived class, the appropriate implementation is called for each shape.

This program demonstrates how a common interface (`Shape`) can be used to calculate the area of different shapes using polymorphism.

<br><br>

### <mark>___Answer No. - 06(b)___</mark>
Here is a complete C++ program that demonstrates exception handling:

```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int x = 10;
        int y = 0;
        if (y == 0)
            throw "Division by zero!";
        int z = x / y;
        cout << z << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
```

In this program, we have a `try` block that contains code that might throw an exception. In this case, we are trying to divide a number by zero, which is not allowed and will cause an error. When the error occurs, we `throw` an exception with a message that describes the error. The `throw` statement transfers control to the nearest `catch` block that can handle the exception. In this case, we have a `catch` block that takes a `const char*` argument and can handle exceptions of that type. When the exception is caught, the code inside the `catch` block is executed and we print an error message to the standard error stream.


<br><br>

### <mark>___Answer No. - 07(a)___</mark>
STL stands for Standard Template Library in C++. It is a library of generic classes and functions that provides common data structures and algorithms for C++ programs. The basic components of STL include containers, algorithms, and iterators
Here is a complete C++ program that demonstrates the basic components of STL:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {3, 1, 4, 1, 5, 9}; // Container
    sort(numbers.begin(), numbers.end()); // Algorithm

    for (int num : numbers) { // Iterator
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

In this program, we use a `vector` container to store a series of numbers. We then use the `sort` algorithm to sort the numbers in ascending order. Finally, we use a range-based for loop to iterate over the elements of the `vector` and print them to the standard output stream.

<br><br>

### <mark>___Answer No. - 07(b)___</mark>


<br><br>

### <mark>___Answer No. - 08(a)___</mark>


<br><br>

### <mark>___Answer No. - 08(b)___</mark>
<br><br><br><br>

## ***Lab***
<br><br><br><br><br><br>
# __Class All Topic:__

> _OOP is an approach or programming pattern where the programs are structured around objects rather than function and logic. It makes the data partioned into two memory ares i.e. data and functions make the code flexible and modular._

## **_Class:_**

> _Class is a user defined data type which holds its own data members and member functions which can be accessed and used by creating an instance of that class._

## **_Object:_**

> _Any class type variable is called an object_

**_Basic Syntax of class and object:_**

```Cpp
class className{
    Access_specifier:
      //(public/private/protected)
        Data Members;
          //(variables to be used)
        Member Functions(){ }
          //(to access data members)
};

className objectName;
```

#### **_Difference between POP(Procedural Oriented Programming) and OOP(Object Oriented Programming)._**

<br>

|                   Procedural Oriented Programming                    |                      Object Oriented Programming                      |
| :------------------------------------------------------------------: | :-------------------------------------------------------------------: |
| In POP, the programs are divided into small parts called functions.  |             In OOP, the programs are divided into objects             |
|                   POP follows a top-down approach                    |                   OOP follows a bottom-up approach                    |
|                  There is no access modifier in POP                  |    OOP has access specifiers, like - (public, private, protected)     |
|               Adding new data or function is not easy                |                  Adding new data or function is easy                  |
| POP does not have any proper way of hiding data so it is less secure |            OOP provides data hiding, so it is more secure             |
|                     POP is based on unreal world                     |                      OOP is based on real world                       |
|               Emphasis is on doing things (algorithms)               |            Emphasis is on the data rather than procedures             |
|              Functions can be reused in other programs               |                Objects can be reused in other programs                |
|             Data moves openly from function to function              |          Objects communicate with each other through methods          |
|                    No data hiding, so less secure                    |                      Data hiding, so more secure                      |
|               Does not model real-world problems well                |            Better suited for modeling real-world problems             |
|                 Programs are divided into functions                  |                   Programs are divided into objects                   |
|         Data is global and can be accessed by all functions          | Data is specific to objects and can only be accessed by their methods |
|       Does not have features like inheritance and polymorphism       |            Has features like inheritance and polymorphism             |
|            Not well suited for large and complex programs            |             Better suited for large and complex programs              |
|                     Examples: C, Pascal, Fortran                     |                      Examples: C++, Java, Python                      |

### Sample code of class and object:

```cpp
#include <iostream>
using namespace std;

class Student{
public:
  int id;
  void setNumber(int x)
  {
    id = x;
  }
  void showNumber()
  {
    cout<<id<<endl;
  }
};
int main()
{
  Student object;
  obj.setNumber(75);
  obj.showNumber();
  return 0;
}
```

## Constructor and Destructor :

**Constructor Function:**

> Constructor is a special type of function that is used to initialized the object and being called at the time of a object creation. A class can contain one or more constructor.

**Destructor :**

> Destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to delete.

**Copy Constructor:**
> 

### ___Sample code of constructor and destructor :___


```cpp
#include <iostream>
using namespace std;

class Number{
private:
    int n;
public:
    Number(int x)
    {
        n=x;
    }
    void showNumber()
    {
        cout<<n<<endl;
    }
    ~Number()
    {
      cout<<"Destructor called"<<endl;
    }
  }
};

int main()
{
    Number obj(10);
    obj.showNumber();    
}
```

### Task
* create object and copy of the class for its own,
* call it's constructor function(if any).

## OOP principles:
- Encapsulation,
- Inheritance,
- Polymorphism,
- Abstraction.

### ***Encapsulation:***
> Encapsulation is a process of combining variables and functions in a single unit(class).

**Example:**
```cpp
class Student{
public:
    int id;
    void setNumber(int x)
    {
        id = x;
    }
    void showNumber()
    {
        cout<<id<<endl;
    }
};
```
### ***Inheritance:***
> The process of obtaining the data members and function from one class to another class is know as inheritance.

**Example:**
```cpp
#include<iostream>
using namespace std;

class person{
public:
    int age;
    string name;
    person(int x, string b="")
    {
        age = x;
        name = b;
    }
    void display1()
    {
        cout<<age<<" "<<name<<endl;
    }
};

class student: public person{
public:
    int id;
    student(int a):person(10,"Adiba")
    {
        id =a;
    }
    void display2()
    {
        cout<<id<<endl;
        display1();
    }
};
int main()
{
    person p(20, "Hasan");
    student s(10);
    s.display2();
    return 0;
}
```

**Polymorphism :**
> The word polymorphism means one thing many form.

<br>

**Namespace :**
> A namespace is a container for identifiers that helps organize code by grouping related classes, functions, and variables under a unique name. It defines a scope or context in which identifiers are used and prevents naming conflicts by allowing for the use of the same identifier name in different parts of a program without causing conflicts.

<br>

**Scope Resolution Operator :**
> The scope resolution operator :: is used in C++ to specify the context of an identifier and to access hidden or out-of-scope elements. It helps prevent naming conflicts.


### ___Function Overloading:___
### ___Virtual Functions:___
### ___Pure Virtual Functions:___
### ___Abstract Class:___
### ___Interface:___
### ___Generic Template:___
### ___STL___
### ___Exception Handling :___


