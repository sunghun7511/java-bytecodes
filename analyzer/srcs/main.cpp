#include "includes.hpp"

#include "options.hpp"

int main(int argc, char* argv[])
{
    vector<string> args(argv, argv + argc);

    Options opt = Options::parse(args);

    return 0;
}

void error_exit(const string& message)
{
    std::cerr << "ERROR: " << message << std::endl;
    std::exit(-1);
}

void print_help(const string& arg0, const bool detail)
{
    std::cout << "\n-=-=-=-=-[[ Java Bytecodes Analyzer ]]-=-=-=-=-\n"
              << "\t\t\tDevelopment by SHGroup\n"
              << "\n"
              << "Usage:\n"
              << "  " << arg0 << " [options...] [file...]\n"
              << "  " << arg0 << " [--help]\n"
              << "\n";
    if (detail) {
        std::cout << "Options:\n"
                  << "  -o, --output [file]\tset output file\n"
                  << "  -d, --debug\t\tenable debug\n"
                  << "\n";
    }
    std::exit(0);
}