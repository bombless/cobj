#include <stdio.h>

struct hello {
    int lucky_number;
};
void hello_greet(struct hello *self) {
    printf("hello, my lucky number is %d\n", self->lucky_number);
}
struct hello* hello_init(void * self) {
    return (struct hello*)self;
}
void hello_destroy(struct hello* self) {
    puts("struct hello destroyed\n");
}

size_t hello_len = sizeof(struct hello);
