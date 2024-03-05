#! /usr/bin/bash 
name=$1
echo $line $word $linecount $bites $chars
line=$(tput cols)
for((i=1;i<=line/2;i++)){
  printf "=-"
}
printf "\n"
du --human-readable --max-depth=5 --time $name | lolcat
for((i=1;i<=line/2;i++)){
  printf "++"
}

printf "\n"
file $name | lolcat 
for((i=1;i<=line/2;i++)){
  printf "++"
}
printf "\n"
cat $name | nl -b a | lolcat
printf "\n"
for((i=1;i<=line/2;i++)){
  printf "++"
}
printf "\n"
word=$(cat $name | wc -w)
echo "Total: "
echo "$word Words" | lolcat

linecount=$(cat $name | wc -l)
echo "$linecount Lines" | lolcat

bites=$(cat $name | wc --bytes)
echo "$bites Bytes" | lolcat 

chars=$(cat $name | wc --chars)
echo "$chars Chars"

for((i=1;i<=line/2;i++)){
  printf "=-"
}
printf "\n"
