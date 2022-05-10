class Box {
    public:
        int l,b,h;
    
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }
    
        Box(int length, int breadth, int height) {
            this->l = length;
            this->h = height;
            this->b = breadth;
        }
    
        Box(const Box &bx) {
            this->l=bx.l;
            this->h=bx.h;
            this->b=bx.b;
        }
    
        int getLength() {
            return l;
        } 
    
        int getBreadth() {
            return b;
        }
    
        int getHeigth() {
            return h;
        }
    
        long long CalculateVolume() {
            long long res;
            res = (long long)l*b*h;
            return res;
        }
};
bool operator < (const Box& a1,const Box& b1) {
    bool flag = false;
    if(a1.l<b1.l) {
        flag = true;
    }
    else if(a1.l==b1.l && a1.b<b1.b) {
        flag = true;
    }
    else if(a1.l==b1.l && a1.b==b1.b && a1.h<b1.h) {
        flag = true;
    }
    return flag;
}
std::ostream& operator << (std::ostream& out, const Box b1) {
    out<<b1.l<<" "<<b1.b<<" "<<b1.h;
    return out;
}
