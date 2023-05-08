#include "test.h"


int main (void){
    test* p_test = new test(1,2,true);
    delete p_test;
    p_test = NULL;
    std::cout << "After the class" << std::endl;
    system("pause");
    return 0;
}