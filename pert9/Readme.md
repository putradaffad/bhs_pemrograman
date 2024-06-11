1. Definisi
Array (di Python) adalah struktur yang dapat menyimpan dan mengorganisir kumpulan data. Struktur data berbicara tentang cara menyimpan, mengorganisir, mengelompokkan, dan merepresentasikan data. Struktur data sangat penting dan harus dikuasai oleh seorang programmer.
Di forum pemrograman, saya sering menemui pertanyaan yang saya rasa dapat dipecahkan jika orang tersebut memahami konsep struktur data.

2. Set
Set dalam bahasa pemrograman Python adalah tipe data kolektif yang digunakan untuk menyimpan beberapa nilai dalam satu variabel dengan syarat-syarat berikut:

Nilai anggota yang disimpan harus unik (tidak boleh duplikat).
Nilai anggota yang telah dimasukkan tidak dapat diubah lagi.
Set tidak terurut alias unordered - yang berarti tidak dapat diakses dengan indeks.
============================================================================================================================

python
Copy code
# menggunakan kurung kurawal

student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'}
print(student_set)

# konversi list menjadi set

fruit_set = set(['mango', 'Apple'])
print(fruit_set)

# set dengan berbagai tipe data

set_mix = {'man', 'animal', 5, True, ('A', 'B')}
print(set_mix)
============================================================================================================================

OUTPUT:

python
Copy code
{'Wahid', 'Lendis', 'Basith', 'Huda'}

{'Apple', 'mango'}

{True, 5, ('A', 'B'), 'animal', 'man'}
============================================================================================================================

a. Tidak Terurut (Unordered)
Tipe data set adalah tipe data yang tidak terurut. Artinya, kita tidak dapat menggunakan indeks untuk mengakses nilai dalam set. Jika kita mencoba melakukannya, kita akan mendapatkan pesan kesalahan:

python
Copy code
my_set = {'a'}
print(my_set[8])
Pesan Kesalahan:

vbnet
Copy code
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: 'set' object is not subscriptable

