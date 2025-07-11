
#include "vcs.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <vector>

#include <openssl/shah.h> //opnseel sha-256


std::string sha256(const std::string& data){
    
}

void Vcs::add(const std::vector<std::string>& args){
    if(args.size()<2){
        std::cerr << "Error, no files provided" << std::endl;
        
    }
    std::filesystem::create_directory(".vcs/index");
    for(int i=1; i< args.size(); i++){
        std::string filename = args.at(i);
        if(!std::filesystem::exists(filename)){
            std::filesystem::remove_all(".vcs.index");
            std::cerr << "Error: " << args.at(1) << "does not exist" << std::endl;
            return;
        }
        std::filesystem::copy(filename, ".vcs/index/"+ filename);

    }
    
   

    
    
    std::cout << "staged "<< filename<<std::endl;

}

bool Vcs::init(){
    std::filesystem::create_directory(".vcs");
    std::filesystem::create_directory(".vcs/objects");
    std::filesystem::create_directory(".vcs/refs");
    std::filesystem::create_directory(".vcs/refs/heads");

    std::ofstream head(".vcs/HEAD");
    head << "refs/heads/master";
    head.close();

    std::cout << "initializae empty vcs repo\n";

    return true;

 
    

}