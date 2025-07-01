#include <iostream>
#include "vcs.h"
#include <unordered_map>
#include <vector>
#include <functional>



int main(int args, char* argv[]){
    if(args < 2){
        std::cerr << "no command typed \n";
        return 1;
    }
    std::vector<std::string> commands; 

   for(int i=1; i< args; i++){
    //auto convert char* to string
    commands.push_back(argv[i]);
   }

   std::unordered_map<std::string, std::function<void(const std::vector<std::string>&)>> comands ={
    {"init", Vcs::init},
    {"add", Vcs::add},
   };

   

    


    
}