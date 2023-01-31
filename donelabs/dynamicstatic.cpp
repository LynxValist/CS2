#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

void createStat();
void createDyn();

int main(){
    chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
    for(int t = 0; t<20000; t++){
        createStat();
    }
    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout<< "Static Array Took " << time_span.count() << " seconds long."<< endl;

    chrono::steady_clock::time_point t3 = chrono::steady_clock::now();
    for(int t = 0; t<20000; t++){
        createDyn();
    }
    chrono::steady_clock::time_point t4 = chrono::steady_clock::now();
    chrono::duration<double> time_span2 = chrono::duration_cast<chrono::duration<double>>(t4 - t3);
    cout<< "Dynamic Array Took " << time_span2.count() << " seconds long."<< endl;
    return 0;
}

void createStat(){
    static int arr[256*128];
    for(int i = 0; i<256*128; i++){
        arr[i] =i;
    }
}
void createDyn(){
    int *array = new int[256*128];
    for(int i = 0; i<256*128; i++){
        array[i] = i;
    }
}


//   chrono::steady_clock::time_point t1 = chrono::steady_clock::now(); //start timer for linear search



//  chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
//  chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(t2 - t1);



//  cout<< "The linear search took " << time_span.count() << " seconds long."<< endl;
