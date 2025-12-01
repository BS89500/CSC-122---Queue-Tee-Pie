#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include "../src/puppy.h"
#include "../src/kitty.h"
#include "../src/pygmymarmoset.h"
#include "../src/queue.h"

TEST_CASE( "it returns Hello World" ) {
    SECTION("Complete driver code scenario") {
        Puppy puppy;
        Kitty kitty;
        PygmyMarmoset marmoset;

        QueueTees queue;

        // Initial size should be 0
        int initial_size = queue.size();
        REQUIRE(initial_size == 0);

        queue.enqueue(puppy);
        queue.enqueue(kitty);
        queue.enqueue(marmoset);

        // Size after enqueuing should be 3
        int size_after_enqueue = queue.size();
        REQUIRE(size_after_enqueue == 3);

        // Dequeue all three
        queue.dequeue();  // puppy
        queue.dequeue();  // kitty
        queue.dequeue();  // marmoset

        // Queue should now be empty
        REQUIRE(queue.size() == 0);
        REQUIRE(queue.isEmpty() == true);
    }
}
