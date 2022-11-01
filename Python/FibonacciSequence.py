# Python function to generate Fibonacci sequence of user-defined length
def generate_fibonacci_sequence(n):
    f_1, f_2 = -1, 1
    fibonacci_numbers=[]
    for i in range(n):
        f_3 = f_1 + f_2
        fibonacci_numbers.append(f_3)
        f_1, f_2 = f_2, f_3
    return fibonacci_numbers

if __name__ == "__main__":
    n = int(input("Enter the size of the Fibonacci Sequence: "))
    fibonacci_sequence = generate_fibonacci_sequence(n)
    print(*fibonacci_sequence)
