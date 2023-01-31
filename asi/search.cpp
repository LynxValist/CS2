#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int binarysearch(vector<string> &col, string str);
int linearsearch(vector<string> &col, string str);

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

    int result;   //searches
    if(argv[3] == "b"){
        sort(colors.begin(), colors.end());
        result = binarysearch(colors, string(argv[2]));
    }
    else if (argv[3] == "l"){
        result = linearsearch(colors, string(argv[2]));
    }

    if(result!= -1){  //results
        cout<<result;
    }
    else{
        cout<<"color was not found";
    }
    return 0;
}

int binarysearch(vector<string> &col ,string str){
    int first = 0; 
    int last = col.size()-1;
    int middle=(first+last)/2;
    bool found = false;
    int pos = -1;

    while(!found && first<=last){
        if(col[middle] == str){
            found = true;
            pos = middle;
        }
        else if(col[middle]>str){
            last = middle-1;
        }
        else {
            first = middle+1;
        }
        middle = (first + last)/2;
    }
    return pos;
}
int linearsearch(vector<string> &col ,string str){
    int pos = -1;
    bool found = false;
    int index = 0; 
    while(!found && index<=col.size()){
        if(col[index] == str){
            found = true;
            pos = index;
        }
        index++;
    }
    return pos;
}

/*
fstream file(filename, ios::in);
string line; 
while(getline(file,line)){
    lines.push_back(line);
    }
    file.close();
}
*/

/*
int main(int argc, char **argv){
    string filename = argv[1];
    string noodle = argv[2];
    string algorythm = argv[3];

    vector <string> lines;
    readlines(filename, lines);
    
}
*/