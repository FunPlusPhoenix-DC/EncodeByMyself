#include "test.h"

test::test(/* args */)
{
}

test::~test()
{
}

test::test(int a,int b,bool c):
    m_a(a),m_b(b),m_c(c){
        std::cout << "this is the normal test for the special begin" << std::endl;
    }