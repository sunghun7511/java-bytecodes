#include "options.hpp"
#include "includes.hpp"

Options::Options(const vector<string>& input_files)
    : input_files(input_files)
{
}

Options Options::parse(vector<string>& args)
{
    if (args.size() == 1)
        print_help(args[0]);

    vector<string> input_files;
    string output_file;

    for (auto arg = ++args.begin(); arg != args.end(); arg++) {
        if (*arg == "-o" || *arg == "--output") {
            if (++arg == args.end()) {
                error_exit("Please type output file.");
            }
            output_file = *arg;
        } else {
            input_files.push_back(*arg);
        }
    }

    if (input_files.size() == 0) {
        error_exit("Please type input files.");
    }

    return Options(input_files);
}

const vector<string>& Options::get_input_files() const
{
    return input_files;
}