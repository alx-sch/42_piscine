#!/bin/bash

find . -type f -o -type d | wc -l

# -type f -o -type d: files (-type f) OR (-o) directories (-type d)
# wc -l : word count; -l : count lines


