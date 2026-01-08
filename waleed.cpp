#include <iostream>
using namespace std;

int main() {
    int consumption;
    double pricePerUnit, totalBill;

    // إدخال استهلاك الكهرباء
    cout << "أدخل استهلاك الكهرباء (بالكيلووات): ";
    cin >> consumption;

    // تحديد سعر الوحدة
    if (consumption <= 100) {
        pricePerUnit = 250;
    } else if (consumption <= 300) {
        pricePerUnit = 300;
    } else {
        pricePerUnit = 350;
    }

    // حساب إجمالي الفاتورة
    totalBill = consumption * pricePerUnit;

    // تقييم الاستهلاك
    if (totalBill > 100000) {
        cout << "الاستهلاك العالي - يرجى تقليل الاستخدام" << endl;
    } else {
        cout << "الاستهلاك الطبيعي" << endl;
    }

    // عرض النتائج
    cout << "استهلاك الكهرباء: " << consumption << " وحدة" << endl;
    cout << "سعر الوحدة: " << pricePerUnit << " دينار عراقي" << endl;
    cout << "إجمالي مبلغ الفاتورة: " << totalBill << " دينار عراقي" << endl;
} 
    return 0;
