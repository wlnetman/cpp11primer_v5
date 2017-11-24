#include <iostream>
#include "utils/timeutil.h"
#include <ctime>
#include <chrono>

int main(int argc, char* argv)
{
    std::time_t t = std::time(nullptr);
    std::string ret = bpm_ctime2str(t, "%Y-%m-%d %H:%M:%S");
    std::cout<< ret << std::endl;
    return 0;
}
