#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

/*----これらの関数を変更する必要はありません----*/

std::vector<std::string> names {"Nick", "Lewis", "Nikos"};

bool contains(const std::string& name, const std::vector<std::string>& list_of_names) {
    return std::find(list_of_names.begin(), list_of_names.end(), name) != list_of_names.end();
}

std::string get_name(const std::string& name, const std::vector<std::string>& list_of_names) {
    if (contains(name, list_of_names)) {
        return name;
    } else {
        return "";
    }
}

void add_name(const std::string& name, std::vector<std::string>& list_of_names) {
    list_of_names.push_back(name);
}

int add_two(int num) {
    return num + 2;
}

double divide_by_two(double num) {
    return num / 2;
}

std::string greeting(const std::string& name, double num) {
    std::string message {"Hello, " + name + ". It is " + std::to_string(num) + " degrees warmer today than yesterday"};
    std::cout << message << std::endl;
    return message;
}

/*----ここにコードを書いてください----*/
/*----難易度: 富士----*/

// `my_assert` をここに定義し、以降のテストに使用してください。
void my_assert(bool expr, std::string msg){
    if(!expr){
        throw std::runtime_error(msg);
    }
}
// `contains` 用のテスト `test_contains` を作成してください
void test_contains() {
    std::cout << "------test_contains------" << std::endl;
    try{
        my_assert(contains("String",std::vector<std::string>{"Stg"}), "Not properly explored.");
        std::cout << "Test Passed!" << std::endl;
    } catch(const std::exception& error){
        std::cerr << "Test Failed : " << error.what() << std::endl;
    }
}
// `get_name` 用のテスト `test_get_name` を作成してください
void test_get_name() {
    std::cout << "------test_get_name------" << std::endl;
    try{
        my_assert(get_name("HogeM",std::vector<std::string>{"Hoge,Mege"})=="HogeM", "Not properly explored.");
        std::cout << "Test Passed!" << std::endl;
    } catch(const std::exception& error){
        std::cerr << "Test Failed : " << error.what() << std::endl;
    }
}
// `add_name` 用のテスト `test_add_name` を作成してください
void test_add_name() {
    std::cout << "------test_add_name------" << std::endl;
    try{
        std::vector<std::string> string_list;
        add_name("Hoge",string_list);
        my_assert(string_list == std::vector<std::string>{"Hoges"}, "Not properly added.");
        std::cout << "Test Passed!" << std::endl;
    } catch(const std::exception& error){
        std::cerr << "Test Failed : " << error.what() << std::endl;
    }
}
// `add_two` 用のテスト `test_add_two` を作成してください
void test_add_two() {
    std::cout << "------test_add_two------" << std::endl;
    try{
        std::vector<std::string> string_list;
        my_assert(add_two(1) == 3, "Not properly two added.");
        std::cout << "Test Passed!" << std::endl;
    } catch(const std::exception& error){
        std::cerr << "Test Failed : " << error.what() << std::endl;
    }
}
// `divide_by_two` 用のテスト `test_divide_by_two` を作成してください
void test_divide_by_two() {
    std::cout << "------test_divide_by_two------" << std::endl;
    try{
        std::vector<std::string> string_list;
        my_assert(divide_by_two(1) == 1.5, "Not properly two devided.");
        std::cout << "Test Passed!" << std::endl;
    } catch(const std::exception& error){
        std::cerr << "Test Failed : " << error.what() << std::endl;
    }
}
// `greeting` 用のテスト `test_greeting` を作成してください
void test_greeting() {
    std::cout << "------test_greeting------" << std::endl;
    try{
        std::vector<std::string> string_list;
        my_assert(greeting("Name",2) == "hoge", "Not properly greeting.");
        std::cout << "Test Passed!" << std::endl;
    } catch(const std::exception& error){
        std::cerr << "Test Failed : " << error.what() << std::endl;
    }
}

int main(){
    test_contains();
    test_get_name();
    test_add_name();
    test_add_two();
    test_divide_by_two();
    test_greeting();
}

/*----難易度: キリマンジャロ----*/

// `my_assert` 用のテスト `test_my_assert_false` を作成し、式がfalseと評価されたときに指定したオプションの `msg` を適切に返すかどうかをチェックしてください。

// `my_assert` 用のテスト `test_my_assert_true` を作成し、式がtrueと評価されたときに適切に処理するかどうかをチェックしてください。

/*----難易度: エベレスト----*/

// 次の式全体をテストする `test_complex_greeting` を `my_assert` を使用して作成してください。式がエラーになった場合は、エラーの理由がわかるメッセージを `msg` に指定してください。
// greeting(get_name("Frosty the Snowman", {"Oatmeal", "Prancer", "Rudolph", "Andy"}), divide_by_two(add_two(2)));