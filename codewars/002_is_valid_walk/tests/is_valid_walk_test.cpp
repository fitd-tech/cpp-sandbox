#include <gtest/gtest.h>
#include "is_valid_walk.hpp"

TEST(IsValidWalk, CodewarsAssertions) {
    EXPECT_EQ(IsValidWalk({'n'}), false);
    EXPECT_EQ(IsValidWalk({'n','s','n','s','n','s','n','s','n','s'}), true);
    EXPECT_EQ(IsValidWalk({'n','s'}), false);
    EXPECT_EQ(IsValidWalk({'n','s','n','s','n','s','n','s','n','s','n','s'}), false);
    EXPECT_EQ(IsValidWalk({'e','w','e','w','n','s','n','s','e','w'}), true);
    EXPECT_EQ(IsValidWalk({'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w'}), false);
    EXPECT_EQ(IsValidWalk({'n','s','e','w','n','s','e','w','n','s'}), true);
    EXPECT_EQ(IsValidWalk({'s','e','w','n','n','s','e','w','n','s'}), true);
    EXPECT_EQ(IsValidWalk({'n','s','n','s','n','s','n','s','n','n'}), false);
    EXPECT_EQ(IsValidWalk({'e','e','e','w','n','s','n','s','e','w'}), false);
}