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

