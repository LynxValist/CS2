#include <iostream>

using namespace std;

void rotate(int *po, int size);

int main(){
    //int elements[4] = {1,2,3,4};
    int size = 4;
    int elements[4] = {1,2,3,4};
    int *ptr = elements;
    return 0;
    rotate(ptr, size);
    for(int x = 0; x<size; x++){
        cout<<*(ptr+x)<<endl;
    }
}

void rotate(int *po, int size){
    int temp = *(po+size); 
    for(int i = 1; i < size; i++){
        *(po+i) = *(po + i-1);
    }
    *po = temp;
}

/*
void swap(int *a, int *b);
int main(void){
    int num1 = 2, num2 = -3;
    swap(&num1, &num2);
}
void swap(int *a, int*b){
    int temp = *a; 
    *a = *b;
    *b = temp;
    
}*/
 
              //int * const ptr = _____
              //pointer does not change.
              //const int * const pointer = ____
              //ultimate constant


    /*
    int x = 20; 
    int *ptr = nullptr;

    ptr = &(x);
    cout << "The value of x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    
    cout << "wolf "<< *ptr;
    return 0;*/                                          //dereferencing and addresses

    /*
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
    */
  /*
   float level;
   int fptr = &level;
   */                       //issue 1}


/*
void doubleVal(int val){
    *val *=2;
}
*/                                 //issue 2
