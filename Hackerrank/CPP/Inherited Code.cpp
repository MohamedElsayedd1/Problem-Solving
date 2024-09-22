

/* Define the exception here */
class BadLengthException{
private : 
    int length;
public :
    BadLengthException(int l) : length {l}{}
    int what(void){
        return length;
    }
};
