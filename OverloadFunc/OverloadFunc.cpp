#include <iostream> 
using namespace std; 

void showpara(double x) { 
    cout << "showpara(double x) = " << x << endl; 
}

/* Overload methods can not based on return type.
int showpara(int x) { 
    cout << "return showpara(int x) = " << x+8 << endl; 
    return 8;
}
*/

void showpara(int x) { 
    cout << "showpara(int x) = " << x << endl; 
} 

void showpara(int x, int y) { 
    cout << "showpara(int x, int y) = " << x << ",\t" << y << endl; 
}


int main() { 
    showpara(10); 
    showpara(20, 30);
    showpara(2.3);
    return 0; 
} 

