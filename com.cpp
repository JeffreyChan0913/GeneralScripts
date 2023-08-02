#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string command = "clang++ -std=c++";
    command += argv[1];
    command += " ";
    command += argv[2];
    command += ".cpp -o ";
    command += argv[2];
    const char * cmd = command.c_str();
    system(cmd);
 }
