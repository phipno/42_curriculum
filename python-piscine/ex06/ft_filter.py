# --------------------------8<----------------------------------------------- #
#                                                                        .|   #
#  ft_filter.py                              /     (__)          |/           #
#                                                  (oo)------/'   ,__,    ,   #
#  By: phipno <phipno@gmail.com>                |  (__)     ||    (oo)_____/  #
#                                                     ||---/||    (__)    ||  #
#  Created: 2024/04/25 13:42 by phipno       |/                 ,    ||--w||  #
#                                          ,,       !              |'         #
#                                               ,           ,|             |/ #
# ------[ mooooooo ]--------------------------------------------------------- #

def ft_filter(function, iterable):
    """Return an iterator yielding those items of iterable for which
function(item) is true. If function is None, return the items
that are true."""

    if function:
        return (word for word in iterable if function(word))
    return (word for word in iterable if word)

# ~"~._.~"~._.~"~._.~"~._.~"~._.~"~. E O F .~"~._.~"~._.~"~._.~"~._.~"~._.~"~ #
