class Box{
    private:
        int l,b,h;
    public:
    
    Box(){
       l = 0;
       b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height){
        
        l = length;
        b = breadth;
        h = height;
        
    }
    Box(const Box& b1){
        l = b1.l;
        b = b1.b;
        h = b1.h;
        
    }
    
    int getLength(){ return l;}
    int getBreadth(){return b;}
    int getHeight(){return h;}
    
    long long CalculateVolume(){
        long long v,v1;
        v1 = l*b;
        return v1*h;
    }
    
    
    bool operator < (Box& b1){
        
        if (l < b1.l){
            return true;
            
        }
        else if (l == b1.l && b < b1.b  ){
            return true;
        }
        else if (h < b1.h && l == b1.l && b == b1.b){
            return true;
        }
        else{
            return false;
        }
    }
    };

    std::ostream& operator<<(ostream& out, Box& b1){
       out << b1.getLength() << " "<< b1.getBreadth() << " "<< b1.getHeight(); 
       return out;
    }
    


