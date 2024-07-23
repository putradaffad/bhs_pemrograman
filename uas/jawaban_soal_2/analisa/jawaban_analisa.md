Exception handling adalah mekanisme dalam pemrograman yang digunakan untuk menangani kesalahan atau kondisi tak terduga yang terjadi selama eksekusi program. Dengan exception handling, program dapat menangani kesalahan tersebut dengan cara yang lebih terstruktur, sehingga tidak menyebabkan program berhenti secara tiba-tiba.

Pada bahasa pemrograman seperti Python, exception handling biasanya menggunakan blok try, except, else, dan finally.

Berikut penjelasan singkat dari masing-masing blok:

try     : Bagian kode yang mungkin menghasilkan kesalahan ditempatkan di dalam blok ini.
except  : Bagian kode yang menangani kesalahan ditempatkan di dalam blok ini. Blok ini akan dieksekusi jika kesalahan yang ditentukan terjadi dalam blok try.
else    : Bagian kode di dalam blok ini akan dieksekusi jika tidak ada kesalahan yang terjadi dalam blok try.
finally : Bagian kode di dalam blok ini akan selalu dieksekusi, baik ada kesalahan atau tidak. Biasanya digunakan untuk membersihkan sumber daya atau melakukan tindakan akhir.