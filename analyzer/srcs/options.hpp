#ifndef __OPTION_HEADER__
#define __OPTION_HEADER__

#include "includes.hpp"

class Options {
private:
    const vector<string>& input_files;
public:
    Options(const vector<string>& input_files);

    const vector<string>& get_input_files() const;

    static Options parse(vector<string>& args);
};

#endif