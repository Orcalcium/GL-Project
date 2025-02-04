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

class Crosshair : public Mesh {
    public:
        float* getMesh() override {
            return crosshair;
        }
        int getVertCount() {
            return sizeof(crosshair);
        }
    private:
        static float crosshair[12];
};