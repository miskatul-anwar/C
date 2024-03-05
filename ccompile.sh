#! /usr/bin/bash
echo "Be patient! Your source code is being compiled."
echo "--------Provided by: Miskatul Anwar------------" |lolcat
printf "Enter your 'C' source code file name: "
read name 
gcc -g -Wall $name.c -o $name
echo "===============================================" |lolcat
cat $name.c
echo "-------------------Output----------------------" |lolcat
./$name
printf "\n-----------------------------------------------\n"|lolcat
echo "                 Thank You!                    "
printf "\n===============================================\n"|lolcat
gdb ./$name
