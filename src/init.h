#include <filesystem>
#include <iostream>
#include <fstream>

inline bool init(){
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

/*
.vcs/
├── HEAD              # Points to the current branch or commit
├── config            # Configuration file for VCS settings
├── objects/          # Store all the data (blobs, commits, trees)
│   ├── blob/         # Blob objects (file data)
│   ├── commit/       # Commit objects
│   ├── tree/         # Tree objects (directories)
├── refs/             # References to branches and tags
│   ├── heads/        # Branches (e.g., main, feature-x)
├── index             # Staging area (indexed changes ready to be committed)
└── logs/             # Logs for each operation (e.g., commit history)


*/
