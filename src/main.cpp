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
    std::vector<std::string> terminalArguements; 

   for(int i=1; i< args; i++){
    //auto convert char* to string
        terminalArguements.push_back(argv[i]);
   }

   std::unordered_map<std::string, std::function<void(const std::vector<std::string>&)>> commands ={
        {"init", [](const std::vector<std::string>& args){Vcs::init();}},
        {"add", [](const std::vector<std::string>& args){Vcs::add(args[0]);}},
   };

   auto it = commands.find(terminalArguements.at(0));
   if(it != commands.end()){
        it->second(terminalArguements);
   }else{
        std::cerr << "unkown command: " << terminalArguements.at(0) <<std::endl;
   }
   return 0;
 
    
}