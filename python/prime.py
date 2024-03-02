def is_prime(number):
    if number <= 1:
        return False
    elif number == 2:
        return True
    elif number % 2 == 0:
        return False
    else:
        for i in range(3, int(number**0.5) + 1, 2):
            if number % i == 0:
                return False
        return True

# Find and print prime numbers from 1 to 100
print("Prime numbers from 1 to 100:")
for num in range(1, 101):
    if is_prime(num):
        print(num,'\n')