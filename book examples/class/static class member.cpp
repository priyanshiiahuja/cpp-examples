#include<iostream>
using namespace std;

class item {
    static int count;
    int number;
    public :
    void getdata(int a){
        number = a;
        count ++;
    }
    void getcount(void){
        cout<< "count: ";
        cout << count << "\n";
    }

};
int 
int main()
{
    
    return 0;
}