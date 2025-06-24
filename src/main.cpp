#include <iostream>
#include "init.h"
#include "vcs.h"

int main(int args, char* argv[]){
    if(args < 2){
        std::cerr << "no command typed \n";
        return 1;
    }

    std::string command = argv[1];

    if(command == "init"){
        init();
    }else{
        std::cerr << "unkown command \n";
    }
    
}