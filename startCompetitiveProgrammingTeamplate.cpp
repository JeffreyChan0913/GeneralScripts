#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string template_name = (atoi(argv[2]) == 1) ? "template.cpp ./" : "template_cses.cpp ./";
    string command = "cp /Users/jeffreychan/Documents/script/" + template_name;
    string filename(argv[1]);
    command += filename + ".cpp && vim " + filename + ".cpp";
    const char * cmd = command.c_str();
    system(cmd);
}
