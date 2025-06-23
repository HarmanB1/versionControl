cmake_minimum_required(VERSION 3.10)


project(VCS VERSION 1.0)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_executable(vcs
    src/main.cpp
    src/init.cpp
    src/vcs.cpp
)



# Add a custom target to run the program after building
add_custom_target(run
    COMMAND vcs
    DEPENDS vcs
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
