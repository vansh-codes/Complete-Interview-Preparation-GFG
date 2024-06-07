//Quiz 5
/* #include <iostream>
using namespace std;
struct sec{
int a;
char b;
};

int main() {
struct sec s = {25, 50};
struct sec *ps = (struct sec *) &s;
cout << ps->a << ps->b ;
return 0;
} */

//Quiz 6
/* #include <iostream>
#include<string.h>
using namespace std;

struct Test{
    char str[20];
};

int main() {
struct Test st1, st2;
strcpy(st1.str, "GeeksQuiz");
st2 = st1;
st1.str[0] = 'S';
cout << st2.str ;
return 0;
} */


//Quiz 9
#include <iostream>
using namespace std;
int main() {
struct ShoeType{
string style;
double price;
};
ShoeType shoe1, shoe2;
shoe1.style = "Adidas";
shoe1.price = 9.99;
cout << shoe1.style << "$" << shoe1 .price;
shoe2 = shoe1;
shoe2.price = shoe2.price / 9;
cout << shoe2.style << "$" << shoe2.price;
return 0;
}