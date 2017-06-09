





#include <iostream>
using namespace std;
class CallBackClass
{
    typedef void (*CBFun)( int k );
    CBFun pCBFun;
    
    public:
        CallBackClass() { pCBFun= NULL; }

        void SetCallBack( CBFun fun ) { pCBFun= fun; }
        
        void run() { 
        //do something
            for( int i= 0; i< 15; i++ ) {
                printf( "%d", i );
                if( ( 0 == ( i%5 ) ) && ( NULL != pCBFun ) )
                    (*pCBFun)(i);
                printf("\n");
            }
        }
};
 
void myCBFun(int k)
{
    printf("\t我被呼叫了,這是第 %d 個!", k );
}

int main(int argc, char* argv[])
{
    CallBackClass cbc;
    cbc.SetCallBack(myCBFun);//註冊callback函式
    cbc.run();
    return 0;
}

