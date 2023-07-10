#include <malloc.h>
#define init(klass) (klass ## _ ## init)(malloc(klass ## _ ## len))
#define call(klass, method, self, ...) (klass ## _ ## method)(self, ##__VA_ARGS__)
#define destroy(klass, self) (klass ## _ ## destroy)(self), free(self), self = 0
