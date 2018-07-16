#ifndef __INCLUDES_HEADER__
#define __INCLUDES_HEADER__

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

void error_exit(const string& message);
void print_help(const string& arg0, const bool detail=false);

#endif