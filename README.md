# CPP

*Version: x.x*

## Grade - ../100

Mandatory Part : 100/100  

## Description

This project is about creating a simple shell. We will learn about processes and file descriptors.

## Overview

The shell should:  
• Display a prompt when waiting for a new command.  
• Have a working history.  
• Search and launch the right executable (based on the PATH variable or using a relative or an absolute path).  
• Avoid using more than one global variable to indicate a received signal.  
• Not interpret unclosed quotes or special characters which are not required by the subject such as \ (backslash) or ; (semicolon).  
• Handle ’ (single quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence.  
• Handle " (double quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence except for $ (dollar sign).  
• Implement redirections:  
◦ < should redirect input.  
◦ > should redirect output.  
◦ << should be given a delimiter, then read the input until a line containing the delimiter is seen. However, it doesn’t have to update the history.  
◦ >> should redirect output in append mode.  
• Implement pipes (| character). The output of each command in the pipeline is connected to the input of the next command via a pipe.  
• Handle environment variables ($ followed by a sequence of characters) which should expand to their values.  
• Handle $? which should expand to the exit status of the most recently executed foreground pipeline.  
• Handle ctrl-C, ctrl-D and ctrl-\ which should behave like in bash.  
• In interactive mode:  
◦ ctrl-C displays a new prompt on a new line.  
◦ ctrl-D exits the shell.  
◦ ctrl-\ does nothing.  
• The shell must implement the following builtins:  
◦ echo with option -n  
◦ cd with only a relative or absolute path  
◦ pwd with no options  
◦ export with no options  
◦ unset with no options  
◦ env with no options or arguments  
◦ exit with no options
  
## What's in this project

It was realized without the bonuses. All the files are normed following the standard of 42.

This project contains the necessary Minishell code.

* includes

`*.h` 

* srcs

`*.c` 

* others

`Makefile`  
`Subjects : en(v7.1) + fr(v6.1)`  

## How to use it

Create the executables : `minishell`.
```javascript
make
```

## Testing

This project respects the norm of 42 and has been tested with the norminette.  

This project has been tested with valgrind and contains no leaks.  
All tests return : `All heap blocks were freed -- no leaks are possible`. 

The readline() function can cause memory leaks. We don’t have to fix them. But that doesn’t mean our own code can have memory leaks.
 
## Credit

Project made by [ffouquet42](https://github.com/ffouquet42)