#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string command = "git add . && git commit -m ";
	command += '"';
    command += argv[1];
	command += '"';
    command += " && git push";
    const char * cmd = command.c_str();
    system(cmd);
 }
