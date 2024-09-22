

class D  : public A, public B, public C
{

    int val;
    public:
        //Initially val is 1
         D() : A() , B() , C()
         {
             val = 1;
         }


         //Implement this function
        void update_val(int new_val)
         {
             val = new_val;
             int temp = val;
             new_val = 1;
             while(new_val != val){
                 if(temp % 5 == 0){
                     C::func(new_val);
                     temp /= 5;
                     if(new_val == val )
                        break;
                 }
                    
                if(temp % 3 == 0){
                    B::func(new_val);
                    temp /= 3;
                    if(new_val == val )
                        break;
                }
                    
                 if(temp % 2 == 0){
                    A::func(new_val);
                    temp /= 2;
                    if(new_val == val)
                        break;
                 }
                    
             }
             
         }
         //For Checking Purpose
         void check(int); //Do not delete this line.
};
