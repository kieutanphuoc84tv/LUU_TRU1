
#include <iostream>
using namespace std;

void nhapMaTran(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap gia tri tai vi tri [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}

void xuatMaTran(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int timMaxHangX(int a[][100], int n, int x) {
    int maxElement = a[x][0];
    for (int j = 1; j < n; j++) {
        if (a[x][j] > maxElement) {
            maxElement = a[x][j];
        }
    }
    return maxElement;
}

int timMinCotY(int a[][100], int n, int y) {
    int minElement = a[0][y];
    for (int i = 1; i < n; i++) {
        if (a[i][y] < minElement) {
            minElement = a[i][y];
        }
    }
    return minElement;
}

int tinhTongHangK(int a[][100], int n, int k) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += a[k][j];
    }
    return sum;
}

int tinhTongCotM(int a[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][m];
    }
    return sum;
}

int tinhTongPhanTuChan(int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

bool kiemTraDuongCheo(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i][i] != 0) {
            return false;
        }
    }
    return true;
}

bool kiemTraNhoHonHoacBang1(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > 1) {
                return false;
            }
        }
    }
    return true;
}

bool kiemTraDoiXungChinh(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int a[100][100];
    int n;

    cout << "Nhap kich thuoc ma tran: ";
    cin >> n;
    cout << "Nhap cac phan tu cua ma tran:" << endl;
    nhapMaTran(a, n);

    cout << "Ma tran vua nhap:" << endl;
    xuatMaTran(a, n);

    int x, y, k, m;
    cout << "Nhap x: ";
    cin >> x;
    int maxHangX = timMaxHangX(a, n, x);
    cout << "Phan tu lon nhat tren hang thu " << x << " la: " << maxHangX << endl;

    cout << "Nhap y: ";
    cin >> y;
    int minCotY = timMinCotY(a, n, y);
    cout << "Phan tu nho nhat tren cot thu " << y << " la: " << minCotY << endl;

    cout << "Nhap k: ";
    cin >> k;
    int tongHangK = tinhTongHangK(a, n, k);
    cout << "Tong cac phan tu tren hang thu " << k << " la: " << tongHangK << endl;

    cout << "Nhap m: ";
    cin >> m;
    int tongCotM = tinhTongCotM(a, n, m);
    cout << "Tong cac phan tu tren cot thu " << m << " la: " << tongCotM << endl;

    int tongChan = tinhTongPhanTuChan(a, n);
    cout << "Tong cac phan tu co gia tri chan la: " << tongChan << endl;

    if (kiemTraDuongCheo(a, n)) {
        cout << "Duong cheo bang 0" << endl;
    } else {
        cout << "Duong cheo khac 0" << endl;
    }

    if (kiemTraNhoHonHoacBang1(a, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    if (kiemTraDoiXungChinh(a, n)) {
        cout << "DOI XUNG" << endl;
    } else {
        cout << "KHONG DOI XUNG" << endl;
    }

    return 0;
}



