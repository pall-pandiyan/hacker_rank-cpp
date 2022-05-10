
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    protected:
        int width = 0;
        int height = 0;

    public:
        void display() {
            std::cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        void display() {
            std::cout << width*height << endl;
        }
    
        void read_input() {
            std::cin >> width >> height;
        }
};