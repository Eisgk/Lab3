#include<iostream>

using namespace std ;

int main(){

    double x = 1, y = 2;
    double sum;
    while(y<=69){

        sum += x/y;
        y++;
    }
    cout << sum;
    return 0;
}