# CONTOH FUNCTION
def greet(name):
    """Function untuk menyapa seseorang."""
    return f"Hello, {name}!"

# Memanggil function
print(greet("Alice"))
print(greet("Bob"))


# CONTOH RECURSIVE
def factorial(n):
    """Function untuk menghitung faktorial dari n menggunakan rekursi."""
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

# Memanggil function rekursif
print(factorial(5))  # Output: 120
print(factorial(7))  # Output: 5040