#include <iostream>
#include <cstdlib>
using namespace std;

int ranGen();
int userinput();

int main(){
    //array 
    static int size = userinput();
    int numbers[size];
    ranGen(numbers, size);

/// searching and sorting

    //linear search
    int search;
    cout << "What number would you like to look for? ";
    cin>>search;
    int pos = -1;
    bool found = false;
    int index = 0; 
    while(!found && index<=size){
        if(numbers[index] == search){
            found = true;
            pos = index;
        }
        index++;
    }
    if(pos == -1){
        cout<<"Your value was not found:(";
    }
    else{
        cout<<"Your number has been found at position " << pos; 
    }

    //binary search
    int first = 0; 
    int last = size;
    int middle = last/2;
    

    return 0;
} //end of main

int userinput(){
    int num;
    cout<<"How many numbers do you want to generate? ";
    cin>>num;
    return num;
}

int ranGen(int val[],int num){
    srand(time(0));
    for(int i = 0; i<num; i++){
        val[i] = rand() % 100+1;
    }
    return 0;
}

