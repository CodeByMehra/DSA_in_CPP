// Maze path : 

#include <iostream>
using namespace std;

// Taking starting row, starting column, ending row, ending column as parameters
int maze(int sr, int sc, int er, int ec){
    if(sr> er || sc>ec) return 0;
    if (sr==er && sc==ec) return 1;
    int rightways = maze(sr, sc+1, er, ec);
    int downways = maze(sr+1, sc, er, ec);
    int totalways = rightways + downways;
    return totalways;

}

int main(){
    int n;
    cout<<"Enter no. of stairs : ";
    cin>>n;
    cout<<"Possible paths : "<<maze(0,0,2,2);
}