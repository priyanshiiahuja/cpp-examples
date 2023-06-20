#include<iostream>
using namespace std;

class binary{
    string a;
    public:
    void read(void){
        cout<<"Enter a binary number:";
        cin >> a;
    }

    void chk_bin(void)
    {
        for (int i = 0; i<a.length(); i++){
            if (a.at(i) != '0' && a.at(i) != '1'){
                cout<<"\nincorrect binary number format";
                exit(0);
            }
        }
    }

    void ones(void) {
        chk_bin();
        for (int i = 0; i<a.length(); i++){
            if (a.at(i) == '0'){
                a.at(i)='1';
            }
            else 
            a.at(i) = '0';
        }
    }

    void displayones(void){
        ones();
        cout << "\nThe 1's complement is:"<<a;
    }
};

int main()
{
    binary b;
    b.read() ; 
    b.displayones();
    return 0;
}