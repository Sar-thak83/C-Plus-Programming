// Write a C++ program to perform 3x3 matrix multiplication.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of matrixs : ";
//     cin >> n;
//     int array_1[n][n],array_2[n][n];
//     cout<<"The matrix 1 is : "<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "Element " << i << " " << j << " : " ;
//             cin >> array_1[i][j];
//         }
//     }
//     cout<<"The matrix 2 is : "<<endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "Element " << i << " " << j << " : " ;
//             cin >> array_2[i][j];
//         }
//     }
// }



// #include <iostream>

// void multiplyMatrix(int mat1[3][3], int mat2[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < 3; k++) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }
// int main() {
//     int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
//     int result[3][3];
//     multiplyMatrix(mat1, mat2, result);
// cout << "Result of Matrix Multiplication:" <<endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             std::cout << result[i][j] << " ";
//         }
//         std::cout <<endl;
//     }

//     return 0;
// }



#include <iostream>
#include <string>
#include <algorithm>
bool isPalindrome(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    temp.erase(std::remove_if(temp.begin(), temp.end(), ::isspace), temp.end());

    for (size_t i = 0; i < temp.length() / 2; ++i) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The input string is a palindrome." << std::endl;
    } else {
        std::cout << "The input string is not a palindrome." << std::endl;
    }

    return 0;
}
