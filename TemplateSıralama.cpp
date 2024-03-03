#include<iostream>
using namespace std;

//template program
//

template <class T>
class Array{

    //
    //

    private:
        T*arrayp;
        int SIZE;
    
    public:
        Array(int si){
            SIZE = si;
            arrayp = new T[SIZE];
        }


    void read_elements(){                         // eleman alma
        for (int i = 0; i< SIZE; i++){
            cin >> *(arrayp + i);
        }
    }

    void sort(){                                  // sıralama için  Booble sort algoritması kullandım
        for(int i= 0; i < SIZE; i++){
            for(int j = i+1; j< SIZE; j++){
                if (*(arrayp + i) > *(arrayp + j)){
                    T temp;
                    temp = *(arrayp + i);
                    *(arrayp + i) = *(arrayp + j);
                    *(arrayp + j) = temp;
                }
            }
        }
    }

    void display(){
        for (int i = 0; i < SIZE; i++){

            cout << *(arrayp + i) << ",";
        }
        cout << endl;
    }

    //

    ~Array(){
        delete[] arrayp;                          // bellekte yer kaplamaması için yıkıcı fonksiyon kullanıyorum 
    }
};

int main(){

    int int_size, float_size;                     // 2 tane değeri tanımlıyorum daha sonra boyut istiyorum
    cout << "Enter array size of integer array:" << endl;
    cin >> int_size;
    cout << "Enter array size of floating array:" << endl;
    cin >> float_size;

    Array <int> int_array(int_size);              // Bunları aldıktan sonra template çağırıyorum
    Array <float> float_array(float_size);

    cout << "Enter Integer array:" << endl;
    int_array.read_elements();
    cout << "Enter Floating array:" << endl;
    float_array.read_elements();
    cout << "Before sorting they are:" << endl;

    int_array.display();
    float_array.display();

    int_array.sort();
    float_array.sort();

    cout << "After sorting they are:" << endl;
    int_array.display();
    float_array.display();

    return 0;
}