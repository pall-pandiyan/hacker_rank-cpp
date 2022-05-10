class Student { 
    private:
        int marks[5];
    
    public:
        void input() {
            for(int i=0; i<5; i++) {
                std::cin >> marks[i];
            }
        }
    
        int calculateTotalScore() {
            int total = 0;
            for(int i=0; i<5; i++) {
                total = total + marks[i];
            }
            return total;
        }
};