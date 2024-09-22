#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private : 
    int a;
    int st;
    string fn;
    string ln;
    public : 
    int get_age(){
        return a;
    }
    int get_standard(){
        return st;
    }
    string get_first_name(){
        return fn;
    }
    string get_last_name(){
        return ln;
    }
    void set_age(int age){
        a = age;
    }
    void set_standard(int standard){
        st = standard;
    }
    void set_first_name(string first_name){
        fn = first_name;
    }
    void set_last_name(string last_name){
        ln = last_name;
    }
    string to_string(){
        string s = std::to_string(a) + "," + fn + "," + ln + "," + std::to_string(st);
        return s;
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
