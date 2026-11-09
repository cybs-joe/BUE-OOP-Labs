#include <iostream>
#include "ProdWorker-secB.h"
#include "Employee-secB.h"
#include <string>
using namespace std;
int main(){
    ProductionWorker pw("Youssef" , 89657 , "5/6/2020", 2 , 18.5);
    pw.displayWorkerInfo();
    Employee emp1("Yassin" , 97568 , "8/9/2021");
    emp1.displayinfo();

}