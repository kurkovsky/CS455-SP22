// using C-style strings vs a built-in C++ string class
#include <iostream>
using namespace std;

void string_intro(){
    char greeting1[6] = {'H','e','l','l','o',0};
    char greeting2[6] = "Hello";

    cout << "Greeting message 1 :";
    cout<< greeting1 << endl;

    cout << "Greeting message 2 :";
    cout<< greeting2 << endl;

    greeting2[5]='!'; // overwrite the terminating 0
    cout << "Greeting message 2 :";
    cout<< greeting2 << endl;
    
}

int main(){
    string_intro();
    // to be continued in the next class
}