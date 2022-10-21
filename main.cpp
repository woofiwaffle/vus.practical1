#include <iostream>
using namespace std;
int main() {
    // задание 1
        int a;
        short int b;
        long int c;
        float d;
        double e;
        long double f;
        char g;
        bool h;
        cout << "int: " << sizeof(a) << "\n" << "short int: " << sizeof(b) << "\n" << "long int: "
             << sizeof(c) << "\n" << "float: "<< sizeof(d) << "\n" << "double: " << sizeof(e) <<
             "\n" << "long double: " << sizeof(f) << "\n" << "char: "<< sizeof(g) << "\n"<< "bool: " << sizeof(h);



// задание 2
        int n;
        cin>>n;
        int m = sizeof(n)*8 - 1;
        int mask = 1 << m;
        for(int i = 0; i <= m; i ++){
            if(i == 1 || i % 8 == 0){
                putchar(' ');

            }
            putchar(n & mask ? '1' : '0');
            mask = (unsigned)mask >> 1;

        }
        cout<< " ";



// задание 3
        union {
            float fl;
            int nt;
        };
        cin>>fl;
        unsigned int line = 32;
        mask = 1 << line - 1;
        for(int p = 1; p <= line; p++){
            putchar(nt & mask ? '1':'0');
            nt <<= 1;
            if(p == 9){
                putchar(' ');
            }
            if(p == 1){
                putchar(' ');

            }


        }
        cout<< "";

        // задание 4
    int qa = 0;
    union{
        double dbl;
        int mas[2];
    };
    cin>>dbl;
    unsigned int lines = 32;
    mask = 1;
    mask <<= (lines - 1);
    for(int v = 0; v < 2; v++){
        if(v == 0){
            qa += 1;
        }
        else{
            qa -= 1;
        }
        for(int po = 0; po < lines; po++){
            putchar(mas[qa] & mask ? '1':'0');
            mas[qa] <<= 1;
            if((po == 0) and (v == 0)){
                putchar(' ');
            }
            if ((po == 11) and (v == 0)){
                putchar(' ');
            }
        }
    }

    return 0;
}
