# <mark>CSE-1203-exam </mark>
- [x] [CT-Solution](##*__CT__*),
- [x] [Mid-Solution](##MID),
- [x] [Lab-Solution](##Lab),
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
>The purpose of exception handling is to help programs deal with unexpected situations or errors that may occur during runtime. By using structured techniques to detect and respond to these exceptional conditions, developers can prevent their programs from crashing and ensure that they continue to run smoothly even when unexpected events occur.

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
>

* __Friend Function:__
>

### <mark>___Answer No. - 03(a)___</mark>
### <mark>___Answer No. - 03(b)___</mark>
### <mark>___Answer No. - 04(a)___</mark>
<br><br><br><br>

## Lab