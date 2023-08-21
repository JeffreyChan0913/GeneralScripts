#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string cmd = "vim ";
    cmd += argv[1];
    system(cmd.c_str());
}

