#include <iostream>
#include "init.h"
#include "vcs.h"
#include <unordered_map>
#include <vector>

int main(int args, char* argv[]){
    if(args < 2){
        std::cerr << "no command typed \n";
        return 1;
    }
    std::vector<std::string> commands; 

   for(int i=1; i< args; i++){
    commands.push_back(argv[i]);
   }

   

    

    if(command == "init"){
        init();

    }else{
        std::cerr << "unkown command \n";
    }
    
}