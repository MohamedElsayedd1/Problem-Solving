

// Write your Student class here

class Student{
private : 
    int g1;
    int g2;
    int g3;
    int g4;
    int g5;
public : 
    void input(void){
        cin >> g1 >> g2 >> g3 >> g4 >> g5;
    }
    int calculateTotalScore(){
        return g1+g2+g3+g4+g5;
    }
};

