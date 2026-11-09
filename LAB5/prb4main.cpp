#include <iostream>
#include "prb4.h"
#include <string>
using namespace std;
BOX compareBoxes(BOX b1, BOX b2){
    if(b1 > b2){
        return b1;
    }
    else{
        return b2;
    }
}

int main(){
    BOX b1(2, 3, 4);
    BOX b2(4, 4, 2);

    if(b1 > b2){
        cout << "b1 is bigger" << endl; 
    }
    else if (b2>b1){
        cout << "b2 is bigger"<<endl;
    }
    else{
        cout << "they have same volumes" << endl;
    }

    BOX b3 = compareBoxes(b1,b2);

    b3.display();

    BOX storage[3] = {BOX(2, 3, 4), BOX(5, 2, 2), BOX(3, 3, 3)};
    int maxIndex = 0;
    for(int i = 1; i < 3; i++){
        if(storage[i] > storage[maxIndex]){
            maxIndex = i;
        }   
    }   

    for(int i = 0; i < 3; i++){
    cout << "Box " << i + 1 << endl;
    storage[i].display();
    }

    cout << "Box count" << BOX::getBoxCount()<<endl;

    return 0;
}
