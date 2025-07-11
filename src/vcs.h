#pragma once
#include <string>
class Vcs
{
private:
    /* data */
    std::string sha256(const std::string& data);

public:
    static void add(const std::vector<std::string>& args);
    static void commit(const std::vector<std::string>& args);
    static bool init();


    
    
};

