#include "./hello.h"
#include "./std.h"

int main() {
    struct hello *instance = init(hello);
    call(hello, greet, instance);
    destroy(hello, instance);
}
