# --------------------------8<----------------------------------------------- #
#                                                                        .|   #
#  whatis.py                                 /     (__)          |/           #
#                                                  (oo)------/'   ,__,    ,   #
#  By: phipno <phipno@gmail.com>                |  (__)     ||    (oo)_____/  #
#                                                     ||---/||    (__)    ||  #
#  Created: 2024/04/25 13:42 by phipno       |/                 ,    ||--w||  #
#                                          ,,       !              |'         #
#                                               ,           ,|             |/ #
# ------[ mooooooo ]--------------------------------------------------------- #

import sys

try:  
  if len(sys.argv) == 2:
    try:
      interger = int(sys.argv[1])
      print(interger)
    except:
      raise AssertionError("AssertionError: argument is not an integer")
  elif len(sys.argv) > 2:
    raise AssertionError("AssertionError: more than one argument is provided")
  else:
    raise AssertionError("AssertionError: you need to provide a argument")
except AssertionError as msg:
  print(msg)

# ~"~._.~"~._.~"~._.~"~._.~"~._.~"~. E O F .~"~._.~"~._.~"~._.~"~._.~"~._.~"~ #
