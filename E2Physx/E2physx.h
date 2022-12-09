#ifndef _2physx
#define _2physx
#include <vector>
class E2Physx_Vector2D {
public:
    int x;
    int y;
    E2Physx_Vector2D();
    E2Physx_Vector2D(int X,int Y) {
        x = X; y = Y;
    };
};

typedef std::vector<E2Physx_Vector2D> E2Physx_Verts;

class E2Physx_Collider {
public:
    E2Physx_Collider();
};

class E2Physx_RigidBody {
public:
    E2Physx_RigidBody();
};

class E2Physx_Object {
public:
    E2Physx_Vector2D position;
    E2Physx_Vector2D size;
    E2Physx_Object(E2Physx_Vector2D Position,E2Physx_Vector2D Size,bool createCollider,bool createRigidBody);
    void update();
    E2Physx_Vector2D getCenterPos();
};

#endif