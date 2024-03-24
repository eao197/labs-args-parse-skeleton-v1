#include "args.hpp"

#include <iostream>

namespace args_parse
{

void EatParams(int argc, const char ** argv)
{
    for(int i = 0; i < argc; ++i)
    {
        std::cout << "[" << i << "]: '" << argv[i] << "'" << std::endl;
    }
}

} /* namespace args_parse */

