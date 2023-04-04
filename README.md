# Pipex

Pipes (Sorta like the ones Mario uses)

## Description

This project was a great introduction to the world of pipes, fork and processes.

It functions essentially like passing commands into bash. Example: ./pipex infile cat "wc -w" outfile would be equivalent to passing\
"< input_file cat | wc -w > output_file" to bash.

The mandatory part works with 2 commands while the bonus part works with 2 commands or more and also handles heredoc\
in the form of ./pipex here_doc LIMITER cmd cmd1 output_file. When heredoc is used redirection to the output_file in treated like >> \
instead of simply >

## Getting Started

Run make or make all for the mandatory part.

Run make bonus for bonus part.

### Dependencies

Coded on and for macOS x86_64. Should work on macOS arm64 & linux.

### Executing program

./pipex input_file "cm1 with options" "cmd2 with options" output_file for mandatory part

or

./pipex input_file "cmd1 with options" "cmd2 with options" ... "cmdN with options" output_file for the bonus part

or

./pipex here_doc LIMITER cmd cmd1 file for heredoc bonus

## Authors

Yannick St-laurent\
yan_1731@hotmail.com
