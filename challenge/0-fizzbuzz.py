#!/usr/bin/python3
"""FizzBuzz challenge fix."""

import sys


def fizzbuzz(limit=100):
    """Print numbers from 1 to limit with FizzBuzz rules."""
    output = []
    for i in range(1, limit + 1):
        if i % 15 == 0:
            output.append("FizzBuzz")
        elif i % 3 == 0:
            output.append("Fizz")
        elif i % 5 == 0:
            output.append("Buzz")
        else:
            output.append(str(i))
    print(" ".join(output))


if __name__ == "__main__":
    if len(sys.argv) > 1:
        fizzbuzz(int(sys.argv[1]))
    else:
        fizzbuzz()
