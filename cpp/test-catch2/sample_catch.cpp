#include "ApprovalTests.hpp"
#include "catch2/catch.hpp"
#include "UnicodeFileToHtmlTextConverter.h"


TEST_CASE ("UnicodeFileToHtmlTextConverter") {
    auto converter = new UnicodeFileToHtmlTextConverter("foo");
    REQUIRE("fixme" == converter->getFilename());
}

TEST_CASE("HtmlTextConverter") {
    SECTION("convertToHtml uses valid html tags") {
        // TODO: write this test
    }
    SECTION("convertToHtml uses valid paragraph tags") {
        // TODO: write this test
    }
}
