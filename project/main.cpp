#include <iostream>
#include <string>
#include "PSTFCI.h"
using namespace std;
int main() {
    PSTFCI<int> pst;
    pst.insert(50);
    pst.insert(30);
    pst.insert(20);
    pst.insert(40);
    pst.insert(70);
    pst.insert(60);
    pst.insert(20);
    pst.insert(80);
    //pst.insert(70);
    pst.InorderPrint();
    cout<<pst.PSTHight()<<endl;
    return 0;
}
