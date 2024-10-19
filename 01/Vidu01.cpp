#include <iostream>
#include <vector>
using namespace std;

int checkSoLuong(const vector<int>& a, int len){
    int distinctCount = 0; // Dem so luong cac so khac nhau
    for(int i = 0; i < len; i++){
        int count = 0;
        bool alreadyChecked = false;

        // Kiem tra xem phan tu da duoc kiem tra truoc do chua
        for(int k = 0; k < i; k++){
            if(a[i] == a[k]){
                alreadyChecked = true;
                break;
            }
        }

        // Neu da kiem tra, bo qua phan tu nay
        if(alreadyChecked) continue;

        // Dem so lan xuat hien cua phan tu
        for(int j = 0; j < len; j++){
            if(a[i] == a[j]) count++;
        }

        // In ra phan tu va so lan xuat hien
        cout << a[i] << " xuat hien " << count << " lan" << endl;

        // Tang so luong cac so khac nhau
        distinctCount++;
    }
    return distinctCount;
}

int main(){
    vector<int> v = {1, 2, 1, 4};

    // In cac so khac nhau va so lan xuat hien cua chung
    int result = checkSoLuong(v, v.size());

    // In ra tong so cac so khac nhau
    cout << "So luong cac so khac nhau la: " << result << endl;

    return 0;
}
