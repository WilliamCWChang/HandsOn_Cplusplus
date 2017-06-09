//如果沒有在Foo1的show()加上virtual函式，則會有無法出現Foo2's show的問題。
//如果沒有在Foo2的show()加上virtual函式，可以使用，但別人會無法使用。
#include <iostream> 
using namespace std; 

class Foo1 { 
public: 
    void virtual show() { // 虛擬函式 
        cout << "Foo1's show" << endl; 
    } 
}; 

class Foo2 : public Foo1 { 
public: 
    void virtual show() { // 虛擬函式 
        cout << "Foo2's show" << endl; 
    } 
}; 

void showFooByPtr(Foo1 *foo) {
    foo->show();
}

void showFooByRef(Foo1 &foo) {
    foo.show();
}

int main() { 
    Foo1 f1; 
    Foo2 f2; 

    // 動態繫結 
    showFooByPtr(&f1); 
    showFooByPtr(&f2);
    cout << endl;
    
    // 動態繫結 
    showFooByRef(f1); 
    showFooByRef(f2);
    cout << endl; 
    
    // 靜態繫結 
    f1.show(); 
    f2.show(); 
    
    return 0;
}
