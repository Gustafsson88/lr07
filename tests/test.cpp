// Copyright 2021 Danil Postvaykin <postvaykin01@mail.ru>

#include <gtest/gtest.h>
#include "header.hpp"

TEST(Example, EmptyTest) {
    EXPECT_TRUE(true);
    HTTP_Server first;
    first.start();
}
