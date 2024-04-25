# --------------------------8<----------------------------------------------- #
#                                                                        .|   #
#  NULL_not_found.py                         /     (__)          |/           #
#                                                  (oo)------/'   ,__,    ,   #
#  By: phipno <phipno@gmail.com>                |  (__)     ||    (oo)_____/  #
#                                                     ||---/||    (__)    ||  #
#  Created: 2024/04/25 13:43 by phipno       |/                 ,    ||--w||  #
#                                          ,,       !              |'         #
#                                               ,           ,|             |/ #
# ------[ mooooooo ]--------------------------------------------------------- #

def NULL_not_found(object: any) -> int:
  if type(object) is type(None):
    print("Nothing: " + str(object) + " " + str(type(None)))
  elif type(object) is float:
    print("Cheese: " + str(object) + " " + str(float))
  elif type(object) is int:
    print("Zero: " + str(object) + " " + str(int))
  elif object is "":
    print("Empty: " + str(object) + str(str))
  elif type(object) is bool:
    print("Fake: " + str(object) + " " + str(bool))
  else:
    print("Type not Found")
    return 1;

# ~"~._.~"~._.~"~._.~"~._.~"~._.~"~. E O F .~"~._.~"~._.~"~._.~"~._.~"~._.~"~ #
