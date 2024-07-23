import tkinter as tk
from tkinter import messagebox

def on_button_click():
    messagebox.showinfo("Pesan", "Tombol ditekan!")

# Membuat instance dari Tkinter
root = tk.Tk()
root.title("Contoh GUI dengan Tkinter")

# Mengatur ukuran window
root.geometry("300x200")

# Membuat label
label = tk.Label(root, text="Halo, ini adalah contoh GUI!")
label.pack(pady=20)

# Membuat tombol
button = tk.Button(root, text="Klik Saya", command=on_button_click)
button.pack(pady=10)

# Menjalankan aplikasi
root.mainloop()
