class Mesh {
    public:
        virtual float* getMesh() = 0;
    private:
        float* vertices;
};

class Cube : public Mesh {
    public:
        float* getMesh() override {
            return cube;
        }
        int getVertCount() {
            return sizeof(cube);
        }
    private:
        static float cube[108];
};