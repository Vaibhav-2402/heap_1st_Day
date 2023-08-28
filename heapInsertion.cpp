// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class heap {
    public:
    int arr[100];
    int size;
    
    heap() {
        arr[0] = -1;
        size = 0;
    }
    
    void insert(int d) {
        size++;
        int index = size;
        arr[index] = d;
        
        while(index > 1) {
            int parent = index/2;
            
            if(arr[index] > arr[parent]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }
    
    void print() {
        for(int i = 1; i <= size; i++) {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};

int main() {
    heap h1;
    
    h1.insert(12);
    h1.insert(10);
    h1.insert(13);
    h1.insert(14);
    h1.insert(15);
    
    h1.print();

    return 0;
}