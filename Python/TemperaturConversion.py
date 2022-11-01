# Python function to convert temperature from Celssius to Fahrenheit
def celsius_to_fahrenheit(temp_c):
    temp_f = (9/5)*temp_c + 32
    return temp_f


if __name__ == "__main__":
    temp_c = float(input("Enter temperature in Celsius: "))
    temp_f = celsius_to_fahrenheit(temp_c)
    print("Temperature in Fahrenheit is:", temp_f)