#include <iostream>

using namespace std;

int main(void){
    /*
    int x = 20; 
    int *ptr = nullptr;

    ptr = &(x);
    cout << "The value of x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    
    cout << "wolf "<< *ptr;
    return 0;*/
    int x = 3;
    x++;
    


    const int FOO_MAX = 6;
    short foo[FOO_MAX] = {1,2,3,4,5,6};
    short *fooptr = foo;
    for(int i = 0; i<FOO_MAX; i++){
        cout<< *(fooptr)<< " ";
        fooptr++;                           //fooptr before cout is an error;
    }
    cout<<endl;
}