# Python function to check whether a number is even
def is_odd_or_even(number):
    if number % 2 == 0:
        return "Even"
    else: return "Odd"

if __name__ == "__main__":
    number = int(input("Enter the number to check for Odd or Even: "))
    result = is_odd_or_even(number)
    print("The give number is", result)
