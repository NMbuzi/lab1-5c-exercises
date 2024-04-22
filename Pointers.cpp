#include <iostream>
using namespace std;

int main(){
    //declaring a pointer and inintialize it
    //so that it doesnt store a random address
    int* pPointer = nullptr;

    int integervar = 5;
    // assign pointer to address of the object
    pPointer = &integervar;

    //output the value of the integervar
    cout << "integervar:" << integervar << endl;

    //output the adddress of the integervar
    cout <<"address of integervar:" << &integervar <<endl;
    
    //output the address asigned to pPointer
    cout<<"pPointer:"<< pPointer+1 <<endl;

    //output the address of the pPointer
    cout<< "address of the pPointer:" << &pPointer << endl;
    return 0; 
}