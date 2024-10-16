#include <gtest/gtest.h>
#include "lru_cache.h"

TEST(LRUCacheTest, Test1) {
    LRUCache *obj = new LRUCache(2);
    obj->put(1, 1);
    obj->put(2, 2);
    ASSERT_EQ(1, obj->get(1));
    obj->put(3, 3);
    ASSERT_EQ(-1, obj->get(2));
    obj->put(4, 4);
    ASSERT_EQ(-1, obj->get(1));
    ASSERT_EQ(3, obj->get(3));
    ASSERT_EQ(4, obj->get(4));
}

