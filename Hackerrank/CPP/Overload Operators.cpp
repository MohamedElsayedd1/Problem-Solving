

Complex operator+(const Complex &rhs, const Complex &lhs){
    Complex val;
    val.a = rhs.a + lhs.a;
    val.b = rhs.b + lhs.b;
    return val;
}

ostream &operator<<(ostream &os, const Complex &lhs){
    os << lhs.a << "+" <<  "i" << lhs.b;
    return os;
}

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

