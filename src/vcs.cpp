
#include "vcs.h"
#include <filesystem>
#include <fstream>
#include <iostream>


void Vcs::add(const std::string& filename){
    if(!std::filesystem::exists(filename)){
        std::cerr << "Error: " << filename << "does not exist" << std::endl;
        return;

    }

    std::filesystem::create_directory(".vcs/index");
    std::filesystem::copy(filename, ".vcs/index/"+ filename);
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