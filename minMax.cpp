#include <iostream>

using namespace std;

int main(){
/*const int sets the constant size of the array
 *student class uses that size for its array
 * declaring min and max to be used to hold the corresponding element
 * initialize i to 0 as on some versions of c++, if you do not initialize a variable, it will be a random number*/
    const int SIZE = 5;
    int studentClass[SIZE];
    int min, max;
    int i = 0;
    cout << "enter age of 5 students from the class" << endl;

    /*this is how you get input. by setting a range for the number of students being counted
    *the only input taken will be what is counted (0-5) up to 5 values */
    for (int i = 0; i < SIZE; i++) {
        cin >> studentClass[i];
        cin.get(); //to access character array, it will read the string and whitespace
    }

    min = studentClass[i];
    max = studentClass[i];

    /*this loop counts through the array finding the lowest element and assigns it min variable,
    *putting into its own "sorted" array vice verse with highest element */
    for (i = 0; i < SIZE; i++){
        if (studentClass[i] < min)
            min = studentClass[i];
        if (studentClass[i] > max)
            max = studentClass[i];
    }
    //display
    cout << "The oldest student in the class is " << max << " years old " << endl;
    cout << "The youngest student in the class is " << min << " years old " << endl;

}
