# Python function to compute the factorial of a number (using functon recursion)
def calculate_factorial(n):
    if n == 0:
        return 1
    return n * calculate_factorial(n-1)

if __name__ == "__main__":
    n = int(input("Enter the number to compute factorial: "))
    n_factorial = calculate_factorial(n)
    print("The factorial of {} is {}.".format(n, n_factorial))