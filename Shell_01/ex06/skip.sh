 #!/bin/bash

ls -l | sed -n '1~2p'

# ls - l: list contents of current directory in (each entry one line)
# sed -n : supresses usual sed printput makes sure that only pattern is displayed
# '1~2p' is a sed cman -> matched every other line (p: print) 

