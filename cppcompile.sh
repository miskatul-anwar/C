#! /usr/bin/bash
echo "Be patient! Your source code is being compiled."
echo "--------Provided by: Miskatul Anwar------------" |lolcat
echo "Enter your 'C++' source code file name: "
read name
g++ -g -Wall $name.cpp -o $name
echo "-------------------Output----------------------"
./$name
printf "\n-----------------------------------------------\n"
echo "                 Thank You!                    "
echo "==============================================="
