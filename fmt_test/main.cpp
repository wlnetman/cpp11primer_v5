#include <string>
#include "utils/strutil.h"
#include <iostream>
#include "fmt/format.h"

int main(int argc, char* argv[])
{
    std::string s1="str1";
    int i = 10;
    std::string ret = StrUtil::printf("%s%d", s1.c_str(), i);
    std::cout << ret << std::endl;

    std::string ret2;
    ret2 = fmt::format("ret= {}{}", s1, i);
    std::cout << ret2 << std::endl;
    return 0;
}
