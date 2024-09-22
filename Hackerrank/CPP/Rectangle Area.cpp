
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle{
protected: 
    int width;
    int height;
public :
    Rectangle() = default;
    ~Rectangle() = default;
    virtual void display(void) const {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle{
public :
    void read_input(void){
        cin >> width >> height;
    }
    virtual void display(void) const override {
        cout << width * height << endl;
    }
};

