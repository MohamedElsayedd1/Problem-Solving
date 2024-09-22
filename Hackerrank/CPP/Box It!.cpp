
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


class Box{
private : 
    int l;
    int b;
    int h;
public : 
    Box() : l{0}, b{0}, h{0}{}
    Box(int length, int width, int height) : l {length}, b{width}, h{height}{}
    Box(const Box &obj){
        this->l = obj.l;
        this->b = obj.b;
        this->h = obj.h;
    }
    int getLength() const { return l;}
    int getBreadth() const { return b;}
    int getHeight() const { return h;}
    long long CalculateVolume() const { return (long long) l * b * h;}
    bool operator<(const Box &B) const {
        return (this->l < B.l || 
        (this->b < B.b && this->l == B.l) || 
        (this->h < B.h && this->b == B.b && this->l == B.l));
    }
    friend ostream &operator<<(ostream &os, const Box &obj);
};

ostream &operator<<(ostream &os, const Box &obj){
    os << obj.l << " " << obj.b << " " << obj.h;
    return os;
}

