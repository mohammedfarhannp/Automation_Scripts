/*
        For Personal Use | Script for automation of creating directories and sub-directions

        <dir_name_from_cmdline_argument>/
        |
        |__ Enumeration/
        |
        |__ Exploits/
        |
        |__ Sys_Files/
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Usage:\n" << argv[0] << " <thm-ctf-name>\n\n";
        return 1;
    }

    string base = argv[1];
    string cmd = "mkdir " + base + " " + base + "/Enumeration " + base + "/Exploits " + base + "/System_Files";

    int result = system(cmd.c_str());

    if (result != 0)
    {
        cerr << "Error: Execution Failed!!\n";
        return 1;
    }

    return 0;
}
