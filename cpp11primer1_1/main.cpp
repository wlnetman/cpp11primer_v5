#include <iostream>

void addTwo()
{
    std::cout << "input Tow number" << std::endl;
    int v1,v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of v1:"<< v1<< " and "<< v2 <<" is: " << v1+v2 << std::endl;
}

void c1_7()
{
    /*不正确注释嵌套
    // * 注释fau/* dsd*/
    // *
    //*/
    return;
}

void c1_9()
{
    int i=50;
    int sum = 0;
    while ( i<=100) {
        sum += i++;
    }
    std::cout << "sum 50-100 = " << sum << std::endl;
}

void c1_11()
{
    int i1,i2;
    std::cout << "Input Two Interge:" << std::endl;
    std::cin >> i1 >> i2;
    int num = i1;
    while ( num <= i2) {
        std::cout << num << std::endl;
        num++;
    }
}

// 学习一门新的程序设计语言的最好方法就是练习编写程序
int main(int argc,char* argv)
{
    //addTwo();
    //c1_7();
    //c1_8();
    //c1_9();
    c1_11();
    return 0;
}
