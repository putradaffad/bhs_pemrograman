import sqlite3

# Membuat atau menghubungkan ke database
conn = sqlite3.connect('example.db')

# Membuat cursor
cursor = conn.cursor()

# Membuat tabel
cursor.execute('''
CREATE TABLE IF NOT EXISTS users (
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER NOT NULL
)
''')

# Menambahkan data ke tabel
cursor.execute('''
INSERT INTO users (name, age) VALUES (?, ?)
''', ('Alice', 30))

cursor.execute('''
INSERT INTO users (name, age) VALUES (?, ?)
''', ('Bob', 25))

# Menyimpan (commit) perubahan
conn.commit()

# Mengambil data dari tabel
cursor.execute('SELECT * FROM users')
rows = cursor.fetchall()

# Menampilkan hasil
for row in rows:
    print(row)

# Menutup koneksi
conn.close()
