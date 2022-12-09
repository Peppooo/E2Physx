#include "E2physx.h"

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


class E2Physx_Collider {
public:
    E2Physx_Collider() {

    }
};

class E2Physx_RigidBody {
public:
    E2Physx_RigidBody() {

    }
};

namespace env {
    vector<E2Physx_Collider> colliders;
    vector<E2Physx_Collider> rigidbodies;
}

class E2Physx_Object {
private:
    int collider_index=-1;
    int rigidbody_index=-1;
public:
    E2Physx_Vector2D position;
    E2Physx_Vector2D size;
    E2Physx_Object(E2Physx_Vector2D Position,E2Physx_Vector2D Size, bool createCollider, bool createRigidBody) {
        position = Position; size = Size;
        if(createCollider) {
            env::colliders.push_back(E2Physx_Collider());
            collider_index = env::colliders.size();
        }
        if(createRigidBody) {
            env::rigidbodies.push_back(E2Physx_Collider());
            rigidbody_index = env::rigidbodies.size();
        }
    };
    void update() {
        if(!(collider_index == -1)) {

        }
        if(!(rigidbody_index == -1)) {

        }
    }
    E2Physx_Vector2D getCenterPos() {
        return E2Physx_Vector2D(size.x/2,size.y/2);
    }
};