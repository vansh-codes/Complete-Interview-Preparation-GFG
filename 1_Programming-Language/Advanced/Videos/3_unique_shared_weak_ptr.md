## Transcript: Smart Pointers in C++ - `unique_ptr`, `shared_ptr`, and `weak_ptr`

**1. `unique_ptr`:**

Let's start with `unique_ptr`. As the name suggests, it represents a unique ownership of a dynamically allocated object. This means that once a `unique_ptr` owns an object, no other `unique_ptr` or smart pointer can own it. When the `unique_ptr` goes out of scope, the memory is automatically deallocated. Let's see how it works with an example: <br>
**Example 1:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

class Test{
    int x;
    public:
        Test(int a=0){
            x=a;
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called"<<endl;
        }
        fun(){
            cout<<x<<endl;
        }
}

int main(){
    cout<<"Main begins"<<endl;
    {
        unique_ptr<Test> ptr = make_unique<Test>(10);
        // unique_ptr<Test> ptr(new Test(10)); both type of initialization works
        // unique_ptr<Test> ptr2 = ptr; now allowed 
        // unique_ptr<Test> ptr2 = move(ptr); this is alternative approach which can be used 

        ptr->fun();
    }
    cout<<"Main ends"<<endl;
    return 0;
}
```
**Output:**
```cpp
Main begins
Constructor called
10
Destructor called
Main ends
```
**Example 2:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> up(new int(42));
    cout << *up << endl; // Prints: 42
    return 0;
}
```

In this example, `up` owns an integer with value `42`. When `up` goes out of scope, the memory is automatically deallocated, avoiding memory leaks.

**2. `shared_ptr`:**

Now, let's talk about `shared_ptr`. Unlike `unique_ptr`, `shared_ptr` allows multiple pointers to share ownership of the same dynamically allocated object. It keeps track of how many `shared_ptr` objects are pointing to the same memory and deallocates the memory only when the last `shared_ptr` pointing to it goes out of scope. Here's an example: <br>

**Example 1:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

class Test{
    int x;
    public:
        Test(int a=0){
            x=a;
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called"<<endl;
        }
        fun(){
            cout<<x<<endl;
        }
}

int main(){
    shared_ptr<Test> ptr = make_shared<Test>(10);
    // shared_ptr<Test> ptr1(new Test(10)); both works
    shared_ptr<Test> ptr2 = ptr;    // allowed
    cout<<ptr.use_count()<<endl;    // to access the reference coutn
    cout<<ptr2.use_count()<<endl;
    return 0;
}
```
**Output:**
```cpp
Constructor called
2
2
Destructor called
```

**Example 2:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

class Test{
    int x;
    public:
        Test(int a=0){
            x=a;
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called"<<endl;
        }
        fun(){
            cout<<x<<endl;
        }
}

int main(){
    shared_ptr<Test> ptr1;
    {
        shared_ptr<Test> ptr2 = make_shared<Test>(10);
        p1 = p2;
    }
    cout<<"Main ends"<<endl;
    return 0;
}
```
**Output:**
```cpp
Constructor called
Main ends
Destructor called
```

**Example 3:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> sp1(new int(42));
    shared_ptr<int> sp2 = sp1;
    cout << *sp1 << ", " << *sp2 << endl; // Prints: 42, 42
    return 0;
}
```

In this example, `sp1` and `sp2` both point to the same integer with value `42`. When they go out of scope, the memory is deallocated only once both `sp1` and `sp2` are out of scope.

**3. `weak_ptr`:**

Lastly, let's discuss `weak_ptr`. `weak_ptr` is a special type of smart pointer that doesn't participate in ownership management. It is used in conjunction with `shared_ptr` to break cyclic dependencies between objects. Unlike `shared_ptr`, it doesn't increment the reference count and doesn't keep the object alive. Instead, it provides a non-owning "weak" reference to an object managed by a `shared_ptr`. Here's an example: <br>
**Example 1:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

class Test{
    int x;
    public:
        Test(int a=0){
            x=a;
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called"<<endl;
        }
        fun(){
            cout<<x<<endl;
        }
}

int main(){
    weak_ptr<Test> ptr1;
    {
        shared_ptr<Test> ptr2 = make_shared<Test>(10);
        ptr1 = ptr2;
        cout<<ptr2.use_count()<<endl;
    }
    cout<<"Main ends"<<endl;
    return 0;
}
```
**Output:**
```cpp
Constructor called
1
Destructor called
Main ends
```

**Example2:**
```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> sp = make_shared<int>(42);
    weak_ptr<int> wp = sp;
    
    cout << *wp.lock() << endl; // Prints: 42 (lock upgrades weak pointer to a shared pointer)
    
    sp.reset(); // Release the shared ownership
    if (wp.expired()) {
        cout << "The shared pointer has been released." << endl;
    }
    return 0;
}
```

In this example, `wp` is a weak reference to the integer managed by `sp`. We can use `lock()` to obtain a `shared_ptr` from `wp` temporarily, but we need to check if the `shared_ptr` is still valid before using it.

**Summary:**

- `unique_ptr` provides exclusive ownership and automatically deallocates memory when it goes out of scope.
- `shared_ptr` allows multiple pointers to share ownership of the same object and deallocates memory when the last pointer referencing it goes out of scope.
- `weak_ptr` provides a non-owning weak reference to an object managed by a `shared_ptr`, allowing to break cyclic dependencies.

---