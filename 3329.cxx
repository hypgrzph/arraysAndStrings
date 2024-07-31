#include <iostream>
#include <vector>
#include <climits>

//vector lam mag
//limits lam limit int to help
//help me :)))

void solution (int x, int y){
    if (x > y) {
        std::cout << x;
        }else{
            std::cout << y;
            }        
    }
int main(){
    
    //khai bao de song
    int x, y;
    //tao mag
    std::vector<int> arr;
    const int size = 5; //size = const
    
    //input arr 
    for (int i = 0; i < size; i++){
        int n;
        std::cin >> n;
        arr.push_back(n); //n them vao mag
        }
    //tao loop de so sanh dua va index 0
    //(i + 1) (i - 1);
  
    for (int i = 0; i < size; i++){
        if (arr[i] == 0){
            x = ((i - 1) >= 0) ? arr[i - 1] :INT_MIN;
            y = ((i + 1) < size) ? arr[i + 1] : INT_MIN;
            std::cout << x << " " << y << "\n"; //debug
              
            }
        }
        solution(x , y); //work main
    return 0;
    }