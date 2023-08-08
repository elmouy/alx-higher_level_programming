def print_last_digit(number):
    if number < 0:
        last_digit = -(number % 10)
    else:
        last_digit = number % 10

    print("{:d}".format(last_digit), end='')
    return last_digit

# Test cases
print_last_digit(98)
print_last_digit(0)
r = print_last_digit(-1024)
print(r)
