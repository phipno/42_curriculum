import sys


def morse_converter(str_to_translate: str) -> str:
    NESTED_MORSE = {" ": "/ ",
                    "A": ".- ",
                    "B": "-... ",
                    "C": "-.-. ",
                    "D": "-.. ",
                    "E": ". ",
                    "F": "..-. ",
                    "G": "--. ",
                    "H": ".... ",
                    "I": ".. ",
                    "J": ".--- ",
                    "K": "-.- ",
                    "L": ".-.. ",
                    "M": "-- ",
                    "N": "-. ",
                    "O": "--- ",
                    "P": ".--. ",
                    "Q": "--.- ",
                    "R": ".-. ",
                    "S": "... ",
                    "T": "- ",
                    "U": "..- ",
                    "V": "...- ",
                    "W": ".-- ",
                    "X": "-..- ",
                    "Y": "-.-- ",
                    "Z": "--.. ",
                    "1": ".---- ",
                    "2": "..--- ",
                    "3": "...-- ",
                    "4": "...._ ",
                    "5": "..... ",
                    "6": "-.... ",
                    "7": "--... ",
                    "8": "---.. ",
                    "9": "----. ",
                    "0": "----- "
                    }
    str_to_translate = str_to_translate.upper()
    try:
        translated = ""
        for character in str_to_translate:
            if character not in NESTED_MORSE:
                raise AssertionError("AssertionError: bad argument")
            else:
                translated = translated + NESTED_MORSE.get(character)
        return translated
    except AssertionError as msg:
        print(msg)


def main():
    try:
        if len(sys.argv) == 2:
            print(morse_converter(sys.argv[1]))
        elif len(sys.argv) > 2:
            raise AssertionError(
                "AssertionError: more than one argument provided"
            )
        else:
            raise AssertionError(
                    "AssertionError: Provide a string as argument "
                    "<python sos.py 'sos' > "
            )
    except AssertionError as msg:
        print(msg)


if __name__ == "__main__":
    main()
