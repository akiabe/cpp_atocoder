//
//  main.cpp
//  cpp_atocoder
//
//  Created by 阿部 昌史 on 2021/02/10.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
    
}
