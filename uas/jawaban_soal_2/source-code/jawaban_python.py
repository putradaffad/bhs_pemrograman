def divide_numbers(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        print("Error: Tidak bisa membagi dengan nol.")
        result = None
    except TypeError:
        print("Error: Tipe data tidak sesuai. Pastikan kedua argumen adalah angka.")
        result = None
    else:
        print("Pembagian berhasil.")
    finally:
        print("Proses pembagian selesai.")
    return result

# Contoh penggunaan
print(divide_numbers(10, 2))   # Output: Pembagian berhasil. \n Proses pembagian selesai. \n 5.0
print(divide_numbers(10, 0))   # Output: Error: Tidak bisa membagi dengan nol. \n Proses pembagian selesai. \n None
print(divide_numbers(10, 'a')) # Output: Error: Tipe data tidak sesuai. Pastikan kedua argumen adalah angka. \n Proses pembagian selesai. \n None
