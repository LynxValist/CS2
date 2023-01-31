#include <iostream>
#include <fstream>
using namespace std;

struct NileFloodData {
    int year;
    double height;
};

NileFloodData *readFile(string file, int lines);
int countFile(string file);


int main(){
    string name = "nile.csv";
    int count = countFile(name);
    
    readFile(name, count);





    return 0;
}

NileFloodData *readFile(string file, int lines);
int countFile(string file);
