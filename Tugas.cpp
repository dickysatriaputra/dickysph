#include <iostream>
using namespace std;

int main() {
cout << "Silahkan Masukan Tanggal Dan Tahun Lahir Kalian" << endl;
cout<<"-----------------> <------------------"<<endl;
string tanggallahir[31] = {"Hwa","Woo","Joon",
"Hee","kyo","Kyung","Wook","Sin","Jae","Hoon","Ra","Lisa","Jiso","Ri","Soo","Rim","Sun","Soon","Neul",
"Mun","In","Mi","Ki","Sang","Byung","Seok","Gun","Yoo","Sub","Won","Min"};

string bulanlahir[12] = {"Yong","Ji","Je","Hye","Dong","Sang","Ha","Hyo","Hyung","Eun","Hyun","Rae"};

string namakorea;

int bil;

cout << "Tanggal Lahir:";

cin >> bil;

cout << "Tanggal Lahir Ke-" << bil << " Adalah " << tanggallahir[bil-1]<<endl;

cout << "Bulan Lahir:";

cin >> bil;

cout << "Bulan Lahir Ke-" << bil << " Adalah " << bulanlahir[bil-1]<<endl;

namakorea = tanggallahir + bulanlahir;

cout << "Nama korea:" << namakorea + " ";
}
