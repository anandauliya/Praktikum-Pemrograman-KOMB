#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Siswa {
    string NISN;
    string Nama;
    int Nilai;
};

// data siswa
void printdata(const vector<Siswa>& data) {
    for (const auto& siswa : data) {
        cout << siswa.NISN << " | " << siswa.Nama << " | " << siswa.Nilai << endl;
    }
    cout << "------------------------------------" << endl;
}

// insertion sort
void insertionsort(vector<Siswa>& data, bool byNISN) {
    int n = data.size();
    for (int i = 1; i < n; ++i) {
        Siswa key = data[i];
        int j = i - 1;

        // pengurutan berdasarkan NISN atau Nilai
        while (j >= 0 && (byNISN ? data[j].NISN > key.NISN : data[j].Nilai > key.Nilai)) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = key;
    }
}

// selection sort
void selectionsort(vector<Siswa>& data, bool byNISN) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (byNISN ? data[j].NISN < data[minIndex].NISN : data[j].Nilai < data[minIndex].Nilai) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// bubble sort
void bubblesort(vector<Siswa>& data, bool byNISN) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (byNISN ? data[j].NISN > data[j + 1].NISN : data[j].Nilai > data[j + 1].Nilai) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}
int binarysearchbyNISN(const vector<Siswa>& data, const string& targetNISN) {
    int left = 0, right = data.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

            if (data[mid].NISN == targetNISN) {
                return mid;
            } else if (data[mid].NISN < targetNISN) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
    void sequentialsearchandupdate(vector<Siswa>& data, int targetNilai, const string& newNama) {
        for (auto& siswa : data) {
            if (siswa.Nilai == targetNilai) {
                siswa.Nama = newNama;
        }
    }
    }


int main() {
    vector<Siswa> data = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    cout << "Data Awal:\n";
    printdata(data);

    // insertion sort
    vector<Siswa> insertionNISN = data;
    insertionsort(insertionNISN, true);
    cout << "Data Setelah Diurutkan Berdasarkan NISN (Insertion Sort):\n";
    printdata(insertionNISN);

    vector<Siswa> insertionNilai = data;
    insertionsort(insertionNilai, false);
    cout << "Data Setelah Diurutkan Berdasarkan Nilai (Insertion Sort):\n";
    printdata(insertionNilai);

    // selection sort
    vector<Siswa> selectionNISN = data;
    selectionsort(selectionNISN, true);
    cout << "Data Setelah Diurutkan Berdasarkan NISN (Selection Sort):\n";
    printdata(selectionNISN);

    vector<Siswa> selectionNilai = data;
    selectionsort(selectionNilai, false);
    cout << "Data Setelah Diurutkan Berdasarkan Nilai (Selection Sort):\n";
    printdata(selectionNilai);

    // bubble sort
    vector<Siswa> bubbleNISN = data;
    bubblesort(bubbleNISN, true);
    cout << "Data Setelah Diurutkan Berdasarkan NISN (Bubble Sort):\n";
    printdata(bubbleNISN);

    vector<Siswa> bubbleNilai = data;
    bubblesort(bubbleNilai, false);
    cout << "Data Setelah Diurutkan Berdasarkan Nilai (Bubble Sort):\n";
    printdata(bubbleNilai);

        sort(data.begin(), data.end(), [](const Siswa& a, const Siswa& b) {
        return a.NISN < b.NISN;
    });
    string targetNISN = "9950310962";
        int foundIndex = binarysearchbyNISN(data, targetNISN);
        if (foundIndex != -1) {
            cout << "Siswa dengan NISN " << targetNISN << " ditemukan: " << data[foundIndex].Nama << endl;
            cout << "Nilai: " << data[foundIndex].Nilai << endl;
            cout << endl;
        } else {
            cout << "Siswa dengan NISN " << targetNISN << " tidak ditemukan.\n";
        }
    int targetNilai = 60;
    sequentialsearchandupdate(data, targetNilai, "Joko");
    cout << "Data Setelah Update Nama untuk Nilai " << targetNilai << ":\n";
    printdata(data);

    return 0;
}
