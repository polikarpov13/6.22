#include <iostream> 
#include <iomanip> 
#include <stdio.h> 
#include <conio.h> 
#include <cstdlib> 
#include <ctime> 

using namespace std;

void create_array(int* a, const int array_size, const int number1, const int number2, int array_component) {
    a[array_component] = number1 + rand() % (number2 - number1 + 1);
    if (array_component < array_size - 1)
        create_array(a, array_size, number1, number2, array_component + 1);
}



void print_array(int* a, const int array_size, int array_component) {

    cout << a[array_component] << " ";
    if (array_component < array_size - 1)
        print_array(a, array_size, array_component + 1);
}



void elements_change(int* a, const int array_size, int array_component, int max, int tmp, int index) {

    if (a[array_component] > max && a[array_component] % 2 != 0) {
        max = a[array_component];
        index = array_component;
    }
    if (array_component < array_size - 1) {
        elements_change(a, array_size, array_component + 1, max, 0, index);
    }
    else {
        tmp = a[array_size - 1];
        a[array_size - 1] = max;
        a[index] = tmp;
    }
}





int main() {

    srand((unsigned)time(NULL));

    const int array_size = 10;
    int a[array_size];

    int number1 = -10;
    int number2 = 10;

    create_array(a, array_size, number1, number2, 0);
    print_array(a, array_size, 0);

    cout << endl;

    elements_change(a, array_size, 0, 0, 0, 0);
    print_array(a, array_size, 0);

    return 0;

    system("pause");

}