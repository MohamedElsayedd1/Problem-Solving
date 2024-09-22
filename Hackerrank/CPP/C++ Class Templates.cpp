

/*Write the class AddElements here*/
template<typename T>
class AddElements{
private :
    T var;
public :
    AddElements(T arg) : var{arg}{}
    T add(T new_var){
        return var+new_var;
    }
    T concatenate(T new_var){
        return var+new_var;
    }
};


