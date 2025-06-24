
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