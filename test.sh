#!/bin/zsh

make re

printf "******Start of tests******\n\n"


printf "First test == no infile\n******************************\n"
printf "Should print errors:\n_________________________\n"
< LOL grep potato | wc -l > outfile
./pipex LOL "grep potato" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Second test == no outfile\n******************************\n"
printf "\nShould not print:\n_________________________\n"
< infile grep potato | wc -l > LOL
./pipex infile "grep potato" "wc -l" LOL2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff LOL LOL2
printf "\n******************************\n\n"

sleep 3

rm -f LOL LOL2

printf "Third test == wrong first command\n******************************\n"
printf "Should print errors:\n_________________________\n"
< infile LOL -lol | wc -l > outfile
./pipex infile "LOL -lol" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Fourth test == 2 wrong commands\n******************************\n"
printf "Should print errors:\n_________________________\n"
< infile LOL -lol | cookie -dough > outfile
./pipex infile "LOL -lol" "cookie -dough" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Fifth test == 2 wrong commands and bad infile\n******************************\n"
printf "Should print errors:\n_________________________\n"
< wtf LOL -lol | cookie -dough > outfile
./pipex wtf "LOL -lol" "cookie -dough" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Sixth test == Good commands and files\n******************************\n"
printf "Should not output anything:\n_________________________\n"
< infile grep pancakes | wc -w > outfile
./pipex infile "grep pancakes" "wc -w" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Seventh test == Three good commands and files\n******************************\n"
printf "Should not output anything:\n_________________________\n"
< infile grep pancakes | wc -w | wc -l > outfile
./pipex infile "grep pancakes" "wc -w" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Eight test == 1st wrong command and good files\n******************************\n"
printf "Should output an error:\n_________________________\n"
< infile lol pancakes | wc -w | wc -l > outfile
./pipex infile "lol pancakes" "wc -w" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Ninth test == 2nd wrong command and good files\n******************************\n"
printf "Should output an error:\n_________________________\n"
< infile grep pancakes | lol -w | wc -l > outfile
./pipex infile "grep pancakes" "lol -w" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Tenth test == Third wrong command and good files\n******************************\n"
printf "Should output an error:\n_________________________\n"
< infile grep pancakes | wc -w | lol -l > outfile
./pipex infile "grep pancakes" "wc -w" "lol -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Eleventh test == 3 wrong commands and good files\n******************************\n"
printf "Should output 3 errors:\n_________________________\n"
< infile lol pancakes | lol -w | lol -l > outfile
./pipex infile "lol pancakes" "lol -w" "lol -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Twelfth test == good commands and bad infile\n******************************\n"
printf "Should output an error:\n_________________________\n"
< lol grep pancakes | wc -w | wc -l > outfile
./pipex lol "grep pancakes" "wc -w" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Thirteenth test == 1st wrong command and bad infile\n******************************\n"
printf "Should not output:\n_________________________\n"
< lol lol pancakes | wc -w | wc -l > outfile
./pipex lol "lol pancakes" "wc -w" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Fourteenth test == 2nd wrong command and bad infile\n******************************\n"
printf "Should output an error:\n_________________________\n"
< lol grep pancakes | lol -w | wc -l > outfile
./pipex lol "grep pancakes" "lol -w" "wc -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Fifteenth test == 3rd wrong command and bad infile\n******************************\n"
printf "Should output an error:\n_________________________\n"
< lol grep pancakes | wc -w | lol -l > outfile
./pipex lol "grep pancakes" "wc -w" "lol -l" outfile2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff outfile outfile2
printf "\n******************************\n\n"

sleep 3

printf "Sixteenth test == 3 wrong commands and bad files\n******************************\n"
printf "Should output errors:\n_________________________\n"
< lol lol pancakes | lol -w | lol -l > wtf
./pipex lol "lol pancakes" "lol -w" "lol -l" wtf2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff wtf wtf2
printf "\n******************************\n\n"

rm -f wtf wtf2

sleep 3

printf "Seventeenth test == good commands and bad outfile\n******************************\n"
printf "Should print nothing:\n_________________________\n"
< infile grep pancakes | wc -w | wc -l > wtf
./pipex infile "grep pancakes" "wc -w" "wc -l" wtf2
printf "_________________________\n"
printf "If nothing printed == good\n-> "
diff wtf wtf2
printf "\n******************************\n\n"

rm -f wtf wtf2

sleep 3