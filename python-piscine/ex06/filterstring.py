import sys
from ft_filter import ft_filter


def main():
    try:
        if len(sys.argv) == 3:
            try:
                n = int(sys.argv[2])
                filtered_words = list(
                    ft_filter(lambda word: len(word) > n, sys.argv[1].split())
                )
                print(filtered_words)
            except ValueError:
                print("ValueError: argument is not an integer")
        elif len(sys.argv) > 3:
            raise AssertionError(
                "AssertionError: more than two arguments are provided"
            )
        else:
            print(
                "Functionality: Provide two strings as arguments"
                "<python filterstring.py 'Hello the World' 4 > "
            )
    except AssertionError as msg:
        print(msg)


if __name__ == "__main__":
    main()
