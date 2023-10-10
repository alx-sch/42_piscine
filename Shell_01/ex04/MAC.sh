#!/bin/bash

#  It is a string of usually six sets of two-digits or characters separated by colons.
#  The relevant line(s) will look like this: ether XX:XX:XX:XX:XX:XX:XX, where each X is a hexadecimal digit (0 to 9 or A to F)
#  source: Brave search summary

ifconfig | grep -oE '([0-9a-fA-F]{2}:){5}[0-9a-fA-F]{2}'

# ifconfig displays network interface; also shows any MAC addresses in specific format
# extract MAC address from displayed info using grep

# grep  : grab regular expression
# -o : only show matching part, not the whole line
# -E : allows extended regular expressions, curly brackets would need to be escaped otherwise, for example
# [0-9a-fA-F]{2}:){5} : five repetitions of 'XX:', whereas X is 0-9,a-f, or A-F
# [0-9a-fA-F]{2} : same as above but no repetition and last entry (no : at the end)



