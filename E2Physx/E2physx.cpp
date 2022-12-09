#include "E2physx.h"
#include <vector>

using namespace std;

class E2Physx_Vector2D {
    public:
    int x;
    int y;
    E2Physx_Vector2D();
    E2Physx_Vector2D(int X, int Y) {
        x=X;y=Y;
    };
};

typedef vector<E2Physx_Vector2D> E2Physx_Verts;

#define E2Physx_SQUARE 1

class E2Physx_Object {
    public:
    E2Physx_Vector2D position;
    E2Physx_Vector2D size;
    E2Physx_Object(E2Physx_Vector2D Position, E2Physx_Vector2D Size) {
        position = Position; size = Size;
    };
    E2Physx_Vector2D getCenterPos() {
        return E2Physx_Vector2D(size.x/2,size.y/2);
    }
    
};