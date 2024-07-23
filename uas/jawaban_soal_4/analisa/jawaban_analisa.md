Aplikasi bisa berkomunikasi dengan database menggunakan bahasa pemrograman Python melalui modul atau pustaka yang sesuai untuk jenis database yang digunakan. Salah satu pustaka yang sering digunakan adalah sqlite3 untuk SQLite, psycopg2 untuk PostgreSQL, dan mysql-connector-python untuk MySQL.

Berikut ini adalah contoh menggunakan SQLite dan sqlite3 untuk berkomunikasi dengan database:

Menggunakan SQLite dengan sqlite3
SQLite adalah database yang bersifat self-contained, serverless, dan zero-configuration, yang sangat cocok untuk aplikasi yang membutuhkan database kecil atau menengah.

Langkah-langkah   
1. Membuat Koneksi ke Database : Menggunakan sqlite3.connect.   
2. Membuat Cursor : Untuk mengeksekusi perintah SQL.  
3. Eksekusi Perintah SQL : Seperti membuat tabel, memasukkan data, mengambil data, dll.  
4. Menutup Koneksi : Setelah operasi selesai.