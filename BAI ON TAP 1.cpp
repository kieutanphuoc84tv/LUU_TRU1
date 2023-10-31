#include <iostream>
using namespace std;

int main() {
	int a[100]; //= {1, 2, 5, 3, 4};
  int i;
  //cin >> i;
	
    int n, x;
    cout <<"nhap x tu ban phim "<< i<<" la:";
	cin >> n;
    for (int i = 0; i < n; i++) {
    	 cout << "Gia tri thu " << i << " la: " ;//<< a[i] << endl;
        cin >> a[i];
}
    cout<<"Nhap phan x cuoi cung"<< i<<"la: ";
	cin >> x;
    cout << "Gia tri phan tu thu " << x << " la: " << a[x - 1] << endl;
    //cout<<"Nhap cac gia tri min,max"<<x<< " la: "<< a[x-1] << endl;



    int max = a[0], max_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }
    cout << "Vi tri max: " << max_index + 1 << ", gia tri max: " << max << endl;

    int min = a[0], min_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            min_index = i;
        }
    }
    cout << "Vi tri min: " << min_index + 1 << ", gia tri min: " << min << endl;

    cout << "Cac so le trong mang: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << "Tong gia tri cac phan tu trong mang la: " << sum;
}


