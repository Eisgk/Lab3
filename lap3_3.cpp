#include<iostream>

using namespace std ;

int main(){

    double x = 1, y = 6;
    double sum;
    while(y<=19){

        sum += x/y;
        y++;
    }
    cout << sum;
    return 0;
}