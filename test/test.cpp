#include "../src/code.hpp"

#include <iomanip>
#include <iostream>
using namespace std;

int main(){

if(sum(0, 1) != 1){
    cerr << "Fail !" << endl;
    return 1;
}

if(sum(1, 1) != 2){
    cerr << "Fail !" << endl;
    return 1;
}


cout << "OK" << endl;


    return 0;
}