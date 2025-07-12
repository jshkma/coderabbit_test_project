#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

// coderabbit_test_project.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 내가 code rabbit 을 사용하는것을 공부 하고 있다 
// 그래서 test code를 작성하고 싶다
// 간단하게 test를 할 수 있는 예제 함수를 작성해줘

// 1. 두 수의 합을 구하는 함수
int add(int a, int b) 
{
	int c = 0;
	c = a + b;
    //return a + b;
    return c = a + b;
}

// 2. 숫자가 짝수인지 확인하는 함수
bool isEven(int num) {
    return num % 2 == 0;
}

// 3. 문자열을 뒤집는 함수
std::string reverseString(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

// 4. 배열에서 최댓값을 찾는 함수
int findMax(const std::vector<int>& arr) {
    if (arr.empty()) {
        throw std::invalid_argument("Cannot find max of empty vector");
    }
    return *std::max_element(arr.begin(), arr.end());
}
// 5. 팩토리얼을 계산하는 함수
int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers");
    }
    if (n > 12) {
        throw std::invalid_argument("Factorial too large for int type");
    }
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
// 6. 문자열에서 특정 문자의 개수를 세는 함수
int countChar(const std::string& str, char ch) {
    return std::count(str.begin(), str.end(), ch);
}

int main()
{
    std::cout << "Code Rabbit Test Project\n\n";

    // 1. 두 수의 합 테스트
    std::cout << "1. 두 수의 합 테스트:\n";
    std::cout << "add(5, 3) = " << add(5, 3) << std::endl;
    std::cout << "add(-2, 8) = " << add(-2, 8) << std::endl;
    std::cout << "add(-200, 800) = " << add(-20, 80) << std::endl;

    // 2. 짝수 확인 테스트
    std::cout << "\n2. 짝수 확인 테스트:\n";
    std::cout << "isEven(4) = " << (isEven(4) ? "true" : "false") << std::endl;
    std::cout << "isEven(7) = " << (isEven(7) ? "true" : "false") << std::endl;

    // 3. 문자열 뒤집기 테스트
    std::cout << "\n3. 문자열 뒤집기 테스트:\n";
    std::string test_str = "hello";
    std::cout << "reverseString(\"" << test_str << "\") = \"" << reverseString(test_str) << "\"" << std::endl;

    // 4. 최댓값 찾기 테스트
    std::cout << "\n4. 최댓값 찾기 테스트:\n";
    std::vector<int> numbers = {3, 7, 2, 9, 1, 5};
    std::cout << "findMax({3, 7, 2, 9, 1, 5}) = " << findMax(numbers) << std::endl;

    // 4-1. 빈 벡터 테스트
    std::cout << "\n4-1. 빈 벡터 테스트:\n";
    try {
        std::vector<int> empty_vector;
        std::cout << "findMax(empty vector) = " << findMax(empty_vector) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Expected exception: " << e.what() << std::endl;
    }

    // 5. 팩토리얼 테스트
    std::cout << "\n5. 팩토리얼 테스트:\n";
    std::cout << "factorial(5) = " << factorial(5) << std::endl;
    std::cout << "factorial(0) = " << factorial(0) << std::endl;

    // 5-1. 음수 팩토리얼 테스트
    std::cout << "\n5-1. 음수 팩토리얼 테스트:\n";
    try {
        std::cout << "factorial(-1) = " << factorial(-1) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Expected exception: " << e.what() << std::endl;
    }

    // 6. 문자 개수 세기 테스트
    std::cout << "\n6. 문자 개수 세기 테스트:\n";
    std::string test_string = "hello world";
    char target_char = 'l';
    std::cout << "countChar(\"" << test_string << "\", '" << target_char << "') = " 
              << countChar(test_string, target_char) << std::endl;

    std::cout << "\n모든 테스트 완료!" << std::endl;
    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

