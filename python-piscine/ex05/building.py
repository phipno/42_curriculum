# --------------------------8<----------------------------------------------- #
#                                                                        .|   #
#  building.py                               /     (__)          |/           #
#                                                  (oo)------/'   ,__,    ,   #
#  By: phipno <phipno@gmail.com>                |  (__)     ||    (oo)_____/  #
#                                                     ||---/||    (__)    ||  #
#  Created: 2024/04/25 13:42 by phipno       |/                 ,    ||--w||  #
#                                          ,,       !              |'         #
#                                               ,           ,|             |/ #
# ------[ mooooooo ]--------------------------------------------------------- #

import sys


def ispunct(str: str) -> bool:
    """checks for the first character inside str. If
    punctuation mark char then return true"""
    punctuation = ["!", '"', "#", "$", "%", "&", "'", "(", ")", "*", "+", "-",
                   ",", ".", "/", ":", ";", "<", "=", ">", "?", "@", "[", "]",
                   "^", "_", "`", "{", "|", "}", "~"]
    for element in punctuation:
        if element == str[0]:
            return True
    return False


def main():
    try:
        if len(sys.argv) == 2:
            char_count = 0
            upper_letters = 0
            lower_letters = 0
            punctuation_marks = 0
            spaces = 0
            digits = 0

            for character in sys.argv[1]:
                if character.isupper():
                    upper_letters += 1
                elif character.islower():
                    lower_letters += 1
                elif ispunct(character):
                    punctuation_marks += 1
                elif character.isspace():
                    spaces += 1
                elif character.isdigit():
                    digits += 1
                char_count += 1

            print("The text contains " + str(char_count) + " characters:")
            print(str(upper_letters) + " upper letters")
            print(str(lower_letters) + " lower letters")
            print(str(punctuation_marks) + " punctuation marks")
            print(str(spaces) + " spaces")
            print(str(digits) + " digits")
        elif len(sys.argv) > 2:
            raise AssertionError(
                "AssertionError: more than one argument is provided"
            )
        else:
            print(
                "Functionality: Provide an string as argument"
                "<python building.py 'Example String, be creative' > ")
    except AssertionError as msg:
        print(msg)


if __name__ == "__main__":
    main()

# ~"~._.~"~._.~"~._.~"~._.~"~._.~"~. E O F .~"~._.~"~._.~"~._.~"~._.~"~._.~"~ #
