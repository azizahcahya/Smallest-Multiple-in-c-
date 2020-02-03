#include <iostream>

using namespace std;

int main()
{
    int i = 232792545;
    bool found = false;
    int count;
    while(i>0 && found == false){
        int j = 1;
        while((j<= 20) && (i % j == 0)){
            count = count + 1;
            j++;
        }
        if(count == 20){
            found = true;
        }
        cout<<i<<endl;
        count = 0;
        i++;
    }
    return 0;
}
