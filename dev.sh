#!/bin/zsh

if [[ $1 == "k" ]]; then 
    echo "killing direct"
    cd build && rm -rf .vcs
else 
    echo "building"
    cd build && make clean && make && chmod +x ./vcs
    if[[ $1 == "init"]]; then
        echo "status init"
        vcs init
    if[[ $1 == "init"]]; then
        echo "status init"
        vcs add file1
    cd ..
fi

