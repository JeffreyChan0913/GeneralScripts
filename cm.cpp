#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string command = "mv ";
    command += argv[1];
    command += ".cpp ";
    command += argv[2];
    command += ".cpp && mv ";
    command += argv[2];
    command += ".cpp 800";
    command += " && rm ";
    command += argv[1];
    const char * cmd = command.c_str();
    system(cmd);
 }
