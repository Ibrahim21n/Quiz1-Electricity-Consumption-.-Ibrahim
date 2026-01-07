#include <iostream>
using namespace std;

/*
Name: ابراهيم محمد ابراهيم عبيد
Group: A
Quiz 1 - Electricity Consumption
*/

int main() {

    int units;        // شكد استهلك المستخدم
    int unitPrice;    // سعر الوحدة حسب الاستهلاك
    int bill;         // المبلغ النهائي للفاتورة

    // إدخال كمية الكهرباء المستهلكة
    cout << "Enter electricity consumption (in kilowatts): ";
    cin >> units;

    // تحديد سعر الوحدة حسب كمية الاستهلاك
    if (units <= 100) {
        unitPrice = 250;
    }
    else if (units <= 300) {
        unitPrice = 300;
    }
    else {
        unitPrice = 350;
    }

    // حساب المبلغ النهائي للفاتورة
    bill = units * unitPrice;

    // تقييم مستوى الاستهلاك
    if (bill > 100000) {
        cout << "High consumption – Please reduce usage" << endl;
    } else {
        cout << "Normal consumption" << endl;
    }

    // طباعة كل التفاصيل
    cout << "\nElectricity consumption: " << units << " units" << endl;
    cout << "Price per unit: " << unitPrice << " IQD" << endl;
    cout << "Total bill amount: " << bill << " IQD" << endl;

    return 0;
}
