/*Write a program that dynamically allocates an array large enough to hold a 
user-defined number of test scores. Once all the scores are entered, 
the array should be passed to a function that finds and returns the lowest test score.

*/
 #include <iostream>
 using namespace std;

int findLow(int *arr, int size);

int main(){
    int *testscores;
    int score;
    int quant;
    cout<<"Please enter number of test scores: ";
    cin>> quant;
    testscores = new int[quant];
    if(testscores==nullptr){
        cout<<"error allocating memory!" << endl;
        return -1;
    }
    for(int i = 0; i< quant; i++){
        cout<<"Score for Test " << i+1<< ": ";
        cin>>*(testscores+quant);
    }
    cout<< "The lowest test score is " << findLow(testscores, quant);

    return 0;
 }

 int findLow(int *arr, int size){
    int min = arr[0];
    for(int i = 1; i<size; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min;
    return min;
 }