#!/bin/zsh

if [[ $1 == "k" ]]; then 
    echo "killing direct"
    cd build && rm -rf .vcs
else 
    echo "building"
    cd build && make clean && make 
    if [[ $1 == "init" ]]; then
        echo "status init"
        ./vcs init
    elif [[ $1 == "add" ]]; then
        echo "status add"
        ./vcs add file1

    fi
    cd ..
fi

