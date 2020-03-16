// idea: Tinh tong các so le:
// 1. Nhap duoc mang 
// 2. Khoi tao bien SUM = 0;
// 3. Duyệt tung phan tu (for) -> Neu la so le -> SUM = SUM + so_le
// 4. Xuat ra ket qua
//-----------------------
////// Khai bao cac ham
// 1. Ham nhap: nhap_mang();
// Cần khai báo: biến mảng: int arr[] và kích thước: int n
// 2. Ham_tinh_tong: tinh_tong();
// 3. Ham_xuat: xuat_ket_qua(); 
// Cần khai báo: biến mảng: int arr[] và kích thước: int n
//-----------------------
//////
#include <stdio.h>
 
const int MAX_SIZE = 100;
 
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
// Tính tổng các số lẻ trong mảng
int SumOdd(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
 
// Tính tổng các số chẵn trong mảng
int SumEven(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        sum += a[i];
    }
    return sum;
}
 
int main()
{
    int arr[MAX_SIZE];
 
    int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
 
    // Nhap mang
    NhapMang(arr, n);
 
    // Xuat mang
    XuatMang(arr, n);
 
    // Tính toán
    printf("\nTong so le = %d", SumOdd(arr, n));
    printf("\nTong so chan = %d", SumEven(arr, n));
}
 