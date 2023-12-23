# iot-jarakjauh

Buatlah rangkaian led dengan pin d2

buka website blynk -> start free -> buat akun -> login
new template -> nama file (bebas) -> hardware pilih "ESP8266" -> Connection type "wifi" -> klik "done"

pilih Datastreams -> new Datastreams -> virtual pin
nama file(bebas) -> pin "V0" -> type "Integer" -> pilih "create"

pilih Web Dashboard -> drag/double klik switch ke new widget -> klik switch lalu pilih icon pengaturan
isi title (bebas) -> data stream pilih "LED(V0)" -> klik save

Klik "save" pada kanan atas

Pilih Devices pada halaman sebelah kiri
klik "New Device" -> From template -> pilih template sesuai nama project yg diawal dibuat -> klik "create"
Sehinggan akan muncul #define BLYNK_TEMPLATE_ID "tempale id"
#define BLYNK_TEMPLATE_NAME "nama template"
#define BLYNK_AUTH_TOKEN "blynk auth"
Biarkan seperti itu

Buka arduino ide -> include library
Buka arduino ide -> paste code yg ada di file ESP8266.ino

ubah BLYNK_AUTH_TOKEN sesuai token yg anda dapat
ubah ssid dan password sesuai nama wifi dan password wifi

Jalankan Program tersebut


Download aplikasi blynk di playstore -> login menggunakan akun yg anda gunakan di web blynk
pilih projek yg sudah dibuat di website -> klik icon "kunci"
pilih icon tambah "+" -> pilih button 
klik button -> pilih datastream "LED(V0)"
mode bebas (switch)
klik exit "x" -> pilih back 

Siappp digunakannn
