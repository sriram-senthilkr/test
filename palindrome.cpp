#include <iostream>
#include <vector>
//comment

// using std::vector;
using namespace std;

bool isPalindrome(int x) {
    vector<int> old_array;
    int length=0;   
    for (int i=0; x>1; i++){
        old_array.push_back(x %= 10);
        x = x/10;
        cout << x;
        length++;
    }
    
    for (int i=0; i<length; i++){
        cout << old_array[i]<< endl;
    }


    for (int i=0; i<length; i++){
        if (old_array[i] != old_array[length - i]){
            return false;
        }
     }
     return true;
}
        
int main(){
    int x;
    cout << "Insert number: ";
    cin >> x;
    cout << isPalindrome(x);

}
        

        
