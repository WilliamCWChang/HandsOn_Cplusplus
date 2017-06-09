#include <iostream>
using namespace std;


typedef char(*CALLBACK)(int);

char func_callback(int num)
{
    switch(num)
    {
        case 1:
            cout << "print_callback = "<< "a" <<endl;
            return 'a';
        case 2:
            cout << "print_callback = "<< "b" <<endl;
            return 'b';
        case 3:
            cout << "print_callback = "<< "c" <<endl;
            return 'c';
        case 4:
            cout << "print_callback = "<< "d" <<endl;
            return 'd';
        case 5:
            cout << "print_callback = "<< "e" <<endl;
            return 'e';
        default:
            cout << "print_callback = "<< "error" <<endl;
            return 'F';
    }
}

int func_main(int a, int b, CALLBACK callback){
    cout << "print_main = "<< callback(a*b) <<endl;
}

int main(int argc, char** argv)
{
    int a = 0;
    int b = 1;
    cout << "input a, b = 1"<<endl;
    cin >> a;
    func_main(a,b,func_callback);
    return 0;
}




