#include <iostream>

using namespace std;

int harga;

void menu_utama();
void menu_makanan();
void menu_minuman();
void menu_cemilan();

struct opsi{
    string menu[5];

};



int main() {
    int pilih, total, kembalian, bayar, total_akhir;
    char loop;
    opsi utama;

    system ("color d");
    menu:
    menu_utama();
    cin >> pilih;
    system ("cls");

   switch (pilih){
    case 1 :
        menu_makanan();
        break;

    case 2 :
        menu_minuman();
        break;

    case 3 :
        menu_cemilan();
        break;

    default :
        system("cls");
        goto menu;
        break;
}
        cout << " Berapa yang akan dibeli : ";
        cin >> total;
        total_akhir = harga*total;
        cout << " total belanja : " << total_akhir << endl;
        cout << " Bayar : ";
        cin >> bayar;
        kembalian = bayar - total_akhir;
        cout << " Kembalian : " << kembalian << endl;

        cout << " Apakah anda ingin kembali ke menu utama (Y/T) : ";
        cin >> loop;
        if(loop=='y'||loop=='Y'){
            system("cls");
            goto menu;
        }else
            exit(0);

}


void menu_utama(){
    opsi utama;

    utama.menu[0] = " Makanan ";
    utama.menu[1] = " Minuman ";
    utama.menu[2] = " Cemilan ";

    cout << " ========== WARUNG MILENIAL ========= " << endl;
        for (int i = 0; i<=2; i++){
            cout << " " << i+1 << "." << utama.menu [i] << endl;
   }
    cout << " ==================================== " << endl;
    cout << " Pilih 1 - 3 : ";
}


void menu_makanan(){
    int makanan;
    opsi makan;

    makan.menu[0] = " Ayam goreng paket nasi : Rp 18000";
    makan.menu[1] = " Ayam goreng tanpa nasi : Rp 15000";
    makan.menu[2] = " Ayam  bakar paket nasi : Rp 20000";
    makan.menu[3] = " Ayam bakar tanpa nasi  : Rp 17000";

    cout << " ========== Menu Makanan ============ " << endl;
        for (int i = 0; i<=3; i++){
            cout << " " << i+1 << "." << makan.menu[i] << endl;
       }
    cout << " ==================================== " << endl;
    cout << " Pilih 1 - 4 : ";
    cin >> makanan;

    if (makanan==1){
        harga = 18000;
    }else if (makanan==2){
        harga = 15000;
    }else if (makanan==3){
        harga = 20000;
    }else if (makanan==4){
        harga = 17000;
    }else {
        system("cls");
        cout << " Menu yang dipilih tidak di daftar";
        exit(0);
       }
}

void menu_minuman(){
    int minuman;
    opsi minum;
    minum.menu[0] = " Teh manis              : Rp 5000";
    minum.menu[1] = " Es Jeruk               : Rp 5000";
    minum.menu[2] = " Jus mangga             : Rp 10000";
    minum.menu[3] = " Jus jambu              : Rp 10000";
    minum.menu[4] = " Jus Alpukat            : Rp 12000";

    cout << " ========== Menu Minuman ============ " << endl;
        for (int i = 0; i<=4; i++){
            cout << " " << i+1 << "." << minum.menu[i] << endl;
        }
    cout << " ==================================== " << endl;
    cout << " Pilih 1 - 5 : ";
    cin >> minuman;

    if (minuman==1){
        harga = 5000;
    }else if (minuman==2){
        harga = 5000;
    }else if (minuman==3){
        harga = 10000;
    }else if (minuman==4){
        harga = 10000;
    }else if (minuman==5){
        harga = 12000;
    }else{
       system("cls");
       cout << " Menu yang dipilih tidak di daftar";
       exit(0);
    }
}

void menu_cemilan(){
    int cemilan;
    opsi cemil;
    cemil.menu[0] = " Kentang goreng         : Rp 10000";
    cemil.menu[1] = " Cireng                 : Rp 7000";
    cemil.menu[2] = " Otak - otak mercon     : Rp 7000";
    cemil.menu[3] = " Pisang keju            : Rp 5000";
    cemil.menu[4] = " Roti bakar             : Rp 5000";

    cout << " ========== Menu cemilan ============ " << endl;
        for (int i = 0; i<=4; i++){
            cout << " " << i+1 << "." << cemil.menu[i] << endl;
        }
    cout << " ==================================== " << endl;
    cout << " Pilih 1 - 5 : ";
    cin >> cemilan;

    if (cemilan==1){
        harga = 10000;
    }else if (cemilan==2){
        harga = 7000;
    }else if (cemilan==3){
        harga = 7000;
    }else if (cemilan==4){
        harga = 5000;
    }else if (cemilan==5){
        harga = 5000;
    }else{
        system("cls");
        cout << " Menu yang dipilih tidak di daftar";
        exit(0);
        }
}

