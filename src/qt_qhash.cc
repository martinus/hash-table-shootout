#include <inttypes.h>
#include <QHash>
typedef QHash<int64_t, int64_t> hash_t;
#define SETUP hash_t hash;
#define INSERT_INTO_HASH(key, value) hash.insert(key, value)
#define DELETE_FROM_HASH(key) hash.remove(key)
#include "template.c"
