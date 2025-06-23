#include <filesystem>
#include <fstream>
bool init(){
    std::filesystem::create_directory(".vcs");
 
    

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
