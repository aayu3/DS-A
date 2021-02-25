#include <iostream>
#include <string>

class Proofnik {
    public:
        std::string name;
        int favoriteNumber;

    Proofnik(std::string input){
        
    }

}; 

std::string inverse(std::string input) {
    int len = input.length();
    std::string reverse = "";
    for (int i = len - 1; i >= 0; i--) {
        reverse = reverse + input[i];
    }
    return reverse;

}

void frame_print(std::string arr[]) {
    int max = -1;
    
}

int main() {
    std::cout << "Hello Word" << "\n";
    std::string result =  inverse("Nice Dog!");
    std::cout << result << "\n";
}