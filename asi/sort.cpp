#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int bubblesort(vector<string> &col, string str);
int selectionsort(vector<string> &col, string str);

int main(int argc, char *argv[])
{
    ifstream ifs;
    ifs.open(string(argv[1]));

    vector<string> colors;   //creates the vector
    int index = 0; 
    while(ifs){
        ifs>>colors[index];
        index++;
    }

    string order = string(argv[2]);  //asc or dec
    if(argv[3] == "b"){
        bubblesort(colors, order);
    }
    else if (argv[3] == "s"){
        selectionsort(colors, order);
    }
    for(int i = 0; i<colors.size(); i++){
        cout<<colors[i]<<endl;
    }
    return 0;
}

int bubblesort(vector<string> &col ,string str){
    bool swapflag;
    do{
        swapflag = false;
        for(int i = 0; i<col.size()-1; i++){
            if(str == "a"){
                if(col[i]>col[i+1]){
                string temp = col[i];
                col[i] = col[i+1];
                col[i+1] = temp; 
                swapflag = true;
                }
            } else{
                if(col[i]<col[i+1]){
                string temp = col[i];
                col[i] = col[i+1];
                col[i+1] = temp; 
                swapflag = true;
                }
            }
        }
    }while(swapflag);
}
int selectionsort(vector<string> &col ,string str){
    string minimum;
    int holdidx;
    for(int i = 1; i < col.size()-1; i++){
    holdidx = i;
    minimum = col[i];
    for(int index = i+1; index<col.size(); index++){
        if(str == "a"){
            if(col[i]<minimum){
                minimum = col[i];
                holdidx = index;
            }
        }
        else{  //maximum*
            if(col[i]>minimum){
                minimum = col[i];
                holdidx = index;
            }
        }
    }  
    col[holdidx] = col[i];
    col[i] = minimum;
}