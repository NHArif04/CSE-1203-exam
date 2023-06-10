# <mark>CSE-1203-exam </mark>
- [x] [CT-Solution](##*__CT__*),
- [x] [Mid-Solution](##MID),
- [x] [Lab-Solution](##Lab),
<br><br><br><br>
## *__CT__*
___Question CT-1___

<img src="image/CT-1.jpg" alt="Image of CT-1">

<br>

<mark>***Solution:***
<br>
___Answer No. - 01____</mark>

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
<mark>___Answer No. - 02___</mark>
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
<mark>___Answer No. - 03(a)___</mark>

* **Namespace :**
> 

* **Constructor :**
> 

* **Scope Resolution Operator :**
> 

<br><br>
___Question CT-2___

<img src="image/CT-2.jpg" alt="Image of CT-2">

<br>

***Solution:***
>

<br><br>
___Question CT-3___

<img src="image/CT-3.jpg" alt="Image of CT-3">

<br>

<mark>***Solution:***
___Answer No. - 01___
</mark>

<br><br><br><br>
## *__MID__*

<br><br><br><br>
## Lab