#!/bin/bash

find . -type f -name "*.sh" -exec basename {} \; | sed "s/\.sh$//"

# find . :  starts search in current directory
# -type f : looking for files
# -name "*.sh": filters for files with names ending in ".sh"
# -exec basename {} \;
## - exec : option in 'find' to execute specific commands for each filtered file
## basename : command to extract file name form path
## {} : placeholder that gets replaced by current file's path
## \; : delimiter that tells 'find' that '-exec' is complete for current file
# sed "s/\.sh$//"
## sed : stream editor -performs text operation on output
## s/ : substitute
## \.sh$ : what to substitute; \ is used to escape dot; $ indicates end of line -> subsitute ".sh" at end of line
##// : replace with nothing (replacement with 'X' would look like /X/ )
