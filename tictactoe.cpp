
#include <iostream>

using namespace std;

int alExists(char *a,int x, int y){
    if(a[x][y]!= *){
        return 0;
    }
    return 1;
}
char victoryCheck(char *a){
    int row = 0; 
    int col = 0;
    for(row = 0; row<3; row++){
        if(a[row][0]!= "*" && a[row][0] == a[row][1] && a[row][1] == a[row][2]){
            return a[row][0];
        }
    }
    for(col = 0; col<3; col++){
        if(a[0][col]!= "*" &&a[0][col] == a[1][col] && a[1][col] == a[2][col]){
            return a[0][col];
        }
    }
    if(a[1][1]!="*"){
        if((a[0][0] == a[1][1] && a[1][1] == a[2][2]) || (a[0][2] == a[1][1] && a[1][1] == a[2][0])){
            return a[1][1];
        }
    }
    return "n";
}
/*
int arr[5] = { 1, 2, 3, 4, 5 };
int *ptr = arr;
*/
//  1 denotes empty, 2 denotes x, 3 denotes o
void displayContents(char *a){
    for(int i = 0; i < 3; i ++){   //row label
        cout<< "\t "<<i;
    }
    for(int j = 0; j < 3; j++){
        cout<< j << "\t" << a[j][0]<< a[j][1]<< a[j][2];
    }
}
void place1(char *a, int player){ //input looks like < a1  c2  b3 >
    int row;
    int col;
    cout<<"Enter Row Number: ";
    cin>>row;
    cout<<"Enter Column Number: ";
    cin>>col;
    a[row][col] = player;
}
int main()
{
   char board[3][3] = 
   {*,*,*},
   {*,*,*},
   {*,*,*};
   char *ptr = board; //just in case
   int id = 0; //player that won identify
   //declare stuff
   
   //game function loop
   while(true){
       displayContents(board);
       place();  //place1
       if(victoryCheck(board)){    //<3 Victory Player 1
           id = 1;
           break;
       }
       if(tieCheck(board)){    //tie
           id = 3;
           break;
       }
       place();  //place2
       if(victoryCheck(board)){    //<3 Victory Player 2
           id = 2;
           break;
       }
       if(tieCheck(board)){      //tie
           id = 3;
           break;
       }
   }
   cout<<
   //victory message
}

