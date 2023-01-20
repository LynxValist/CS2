#include <iostream>
#include <cstdlib>
#include <chrono>
#include <iomanip>
using namespace std;

int ranGen(int val[], int num);
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
    
    chrono::steady_clock::time_point t1 = chrono::steady_clock::now(); //start timer for linear search
    while(!found && index<=size){
        if(numbers[index] == search){
            found = true;
            pos = index;
        }
        index++;
    }
    if(pos == -1){
        cout<<"Your value was not found:(\n";
    }
    else{
        cout<<"Your number has been found at position " << pos << endl; 
    }
    chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
    chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << fixed << showpoint << setprecision(4);
    cout<< "The linear search took " << time_span.count() << " seconds long."<< endl;
    
                        /*
                        //array visualization
                        for (int x = 0; x<size; x++){
                            cout<< numbers[x] << " ";
                        }
                        */


    cout<<"\nEnter 1 for bubble sort\nEnter 2 for selection sort\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            //bubble sort
            bool swapflag;
                do{
                    swapflag = false;
                    for(int i = 0; i<size-1; i++){
                        if(numbers[i]>numbers[i+1]){
                            int temp = numbers[i];
                            numbers[i] = numbers[i+1];
                            numbers[i+1] = temp; 
                            swapflag = true;
                        }
                    }

                }while(swapflag);
        break;
        case 2:
            //selection sort
            int minimum;
            int holdidx;
            for(int i = 1; i < size-1; i++){
                holdidx = i;
                minimum = numbers[i];
                for(int index = i+1; index<size; index++){
                    if(numbers[i]<minimum){
                        minimum = numbers[i];
                        holdidx = index;
                    }
                }
                
                numbers[holdidx] = numbers[i];
                numbers[i] = minimum;
            }
    }
    
    
    


    //binary search
    int first = 0; 
    int last = size-1;
    int middle=(first+last)/2;
    found = false;
    pos = -1;

    cout << "What number would you like to look for? ";
    cin>>search;

    chrono::steady_clock::time_point t3 = chrono::steady_clock::now(); //start timer for binary search

    while(!found && first<=last){
        if(numbers[middle] == search){
            found = true;
            pos = middle;
        }
        else if(numbers[middle]>search){
            last = middle-1;
        }
        else {
            first = middle+1;
        }
        middle = (first + last)/2;
    }
    if(found == true){
        cout<<"Value "<< search << " has been found at position " << pos<<endl; 
    }
    else{
        cout<< "Binary search could not find "<< search << " in the selected array."<<endl;
    }

    chrono::steady_clock::time_point t4 = chrono::steady_clock::now();
    chrono::duration<double> time_span2 = chrono::duration_cast<chrono::duration<double>>(t4 - t3);
    cout << fixed << showpoint << setprecision(4);
    cout<< "The binary search took " << time_span2.count() << " seconds long."<< endl;
    
    
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

