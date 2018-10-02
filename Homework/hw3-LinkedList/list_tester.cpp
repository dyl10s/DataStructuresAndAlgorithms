//
// Created by Hans Dulimarta
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "linked_list.hpp"

TEST_CASE("Start with empty List") {
    gv::linked_list<string> names;
    CHECK(names.is_empty() == true);
    CHECK(names.size() == 0);

    CHECK_THROWS_AS(names.at(0), out_of_range);
    CHECK_THROWS_AS(names.at(-1), out_of_range);
    CHECK_THROWS_AS(names.front(), length_error);
    CHECK_THROWS_AS(names.back(), length_error);
    CHECK_THROWS_AS(names.pop_front(), length_error);
    CHECK_THROWS_AS(names.pop_back(), length_error);
    CHECK_THROWS_AS(names.remove_from(0), out_of_range);
    CHECK_THROWS_AS(names.insert_into("Allen", 1), out_of_range);

}

TEST_CASE("push_back on empty list") {
    gv::linked_list<string> chem;
    chem.push_back("Neon");

    CHECK_FALSE(chem.is_empty());
    CHECK(chem.size() == 1);
    CHECK_NOTHROW (chem.at(0));
    CHECK(chem.at(0) == "Neon");
    CHECK_THROWS_AS (chem.at(1), out_of_range);
    CHECK_NOTHROW (chem.front());
    CHECK(chem.front() == "Neon");
    CHECK_NOTHROW (chem.back());
    CHECK(chem.back() == "Neon");
    CHECK_THROWS_AS(chem.remove_from(-11), out_of_range);
    CHECK_THROWS_AS(chem.remove_from(1), out_of_range);
}

TEST_CASE("push_front on empty list") {
    gv::linked_list<string> chem;
    chem.push_front("Neon");

    CHECK_FALSE(chem.is_empty());
    CHECK(chem.size() == 1);
    CHECK_NOTHROW (chem.at(0));
    CHECK(chem.at(0) == "Neon");
    CHECK_THROWS_AS (chem.at(1), out_of_range);
    CHECK_NOTHROW (chem.front());
    CHECK(chem.front() == "Neon");
    CHECK_NOTHROW (chem.back());
    CHECK(chem.back() == "Neon");
    CHECK_THROWS_AS(chem.remove_from(1), out_of_range);
}

TEST_CASE("push_back on non empty list") {
    gv::linked_list<string> chem;
    chem.push_back("Neon");
    chem.push_back("Argon");

    CHECK_FALSE(chem.is_empty());
    CHECK(chem.size() == 2);
    CHECK_NOTHROW (chem.at(0));
    CHECK(chem.at(0) == "Neon");
    CHECK_NOTHROW (chem.at(1));
    CHECK(chem.at(1) == "Argon");
    CHECK_THROWS_AS (chem.at(2), out_of_range);
    CHECK_NOTHROW (chem.front());
    CHECK(chem.front() == "Neon");
    CHECK_NOTHROW (chem.back());
    CHECK(chem.back() == "Argon");
    CHECK_THROWS_AS(chem.remove_from(2), out_of_range);
}

TEST_CASE("push_front on non empty list") {
    gv::linked_list<string> chem;
    chem.push_front("Argon");
    chem.push_front("Neon");

    CHECK_FALSE(chem.is_empty());
    CHECK(chem.size() == 2);
    CHECK_NOTHROW (chem.at(0));
    CHECK(chem.at(0) == "Neon");
    CHECK_NOTHROW (chem.at(1));
    CHECK(chem.at(1) == "Argon");
    CHECK_THROWS_AS (chem.at(2), out_of_range);
    CHECK_NOTHROW (chem.front());
    CHECK(chem.front() == "Neon");
    CHECK_NOTHROW (chem.back());
    CHECK(chem.back() == "Argon");
    CHECK_THROWS_AS(chem.remove_from(2), out_of_range);
}

TEST_CASE("pop_back on single item  list") {
    gv::linked_list<string> chem;
    chem.push_back("Neon");
    chem.pop_back();

    CHECK(chem.is_empty() == true);
    CHECK(chem.size() == 0);
    CHECK_THROWS_AS (chem.at(0), out_of_range);
    CHECK_THROWS_AS (chem.front(), length_error);
    CHECK_THROWS_AS (chem.back(), length_error);
    CHECK_THROWS_AS(chem.remove_from(0), out_of_range);
}

TEST_CASE("pop_front on single item  list") {
    gv::linked_list<string> chem;
    chem.push_back("Neon");
    chem.pop_front();

    CHECK(chem.is_empty() == true);
    CHECK(chem.size() == 0);
    CHECK_THROWS_AS (chem.at(0), out_of_range);
    CHECK_THROWS_AS (chem.front(), length_error);
    CHECK_THROWS_AS (chem.back(), length_error);
    CHECK_THROWS_AS(chem.remove_from(0), out_of_range);
}

TEST_CASE("insert_into zero on empty") {
    gv::linked_list<string> chem;
    chem.insert_into("Nitrogen", 0);

    CHECK(chem.is_empty() == false);
    CHECK(chem.size() == 1);
    CHECK_NOTHROW(chem.at(0));
    CHECK(chem.at(0) == "Nitrogen");
    CHECK_NOTHROW(chem.front());
    CHECK(chem.front() == "Nitrogen");
    CHECK_NOTHROW(chem.back());
    CHECK(chem.back() == "Nitrogen");
    CHECK_THROWS_AS (chem.at(1), out_of_range);
}

TEST_CASE("insert_into zero on non-empty") {
    gv::linked_list<string> chem;
    chem.push_back("Boron");
    chem.insert_into("Nitrogen", 0);

    CHECK(chem.is_empty() == false);
    CHECK(chem.size() == 2);
    CHECK_NOTHROW(chem.at(0));
    CHECK(chem.at(0) == "Nitrogen");
    CHECK_NOTHROW(chem.at(1));
    CHECK(chem.at(1) == "Boron");
    CHECK_NOTHROW(chem.front());
    CHECK(chem.front() == "Nitrogen");
    CHECK_NOTHROW(chem.back());
    CHECK(chem.back() == "Boron");
    CHECK_THROWS_AS (chem.at(2), out_of_range);
}

TEST_CASE("insert_into position 1 on non-empty") {
    gv::linked_list<string> chem;
    chem.push_back("Nitrogen");
    chem.insert_into("Boron", 1);

    CHECK(chem.is_empty() == false);
    CHECK(chem.size() == 2);
    CHECK_NOTHROW(chem.at(0));
    CHECK(chem.at(0) == "Nitrogen");
    CHECK_NOTHROW(chem.at(1));
    CHECK(chem.at(1) == "Boron");
    CHECK_NOTHROW(chem.front());
    CHECK(chem.front() == "Nitrogen");
    CHECK_NOTHROW(chem.back());
    CHECK(chem.back() == "Boron");
    CHECK_THROWS_AS (chem.at(2), out_of_range);
}

TEST_CASE("clear() removes all")
{
    vector<string> names{"Helium", "Neon", "Argon", "Krypton", "Radon"};
    gv::linked_list<string> chem;

    for (auto el : names)
        chem.push_back(el);
    CHECK(chem.size() == names.size());
    chem.clear();
    CHECK(chem.is_empty() == true);
    CHECK_THROWS_AS(chem.front(), length_error);
    CHECK_THROWS_AS(chem.back(), length_error);
    CHECK_THROWS_AS(chem.at(0), out_of_range);
};

TEST_CASE("insert_into beyond size of list") {
    vector<string> names{"Helium", "Neon", "Argon", "Krypton", "Radon"};
    gv::linked_list<string> chem;

    for (auto el : names)
        chem.push_back(el);
    CHECK_THROWS_AS(chem.insert_into("Lithium", names.size() + 1), out_of_range);
}

TEST_CASE("Self-adjusting list") {
    vector<string> names{"Magnesium", "Aluminum", "Calsium", "Potassium", "Natrium"};
    gv::linked_list<string> chem;
    for (auto s : names)
        chem.push_back(s);
    CHECK_FALSE (chem.find("Carbon"));
    CHECK(chem.front() == "Magnesium");
    for (int k = 0; k < names.size(); k++) {
        CHECK (chem.find(names[k]) == true);
        CHECK(chem.front() == names[k]);
        CHECK(chem.size() == names.size());
    }
}

TEST_CASE("insert_into several positions")
{
    vector<string> names{"Helium", "Neon", "Argon", "Krypton", "Radon"};
    gv::linked_list<string> chem;

    for (int k = 0; k < names.size(); k++) {
        chem.clear();
        for (auto el : names)
            chem.push_back(el);
        chem.insert_into("OXY", k);
        CHECK(chem.at(k) == "OXY");
        for (int m = 0; m < k; m++)
            CHECK(chem.at(m) == names[m]);
        for (int m = k; m < names.size(); m++)
            CHECK(chem.at(m+1) == names[m]);
    }
};

TEST_CASE("remove_from several positions")
{
    vector<string> names{"Helium", "Neon", "Argon", "Krypton", "Radon"};
    gv::linked_list<string> chem;

    for (int k = 0; k < names.size(); k++) {
        chem.clear();
        for (auto el : names)
            chem.push_back(el);
        chem.insert_into("Nitrogen", k);
        auto oldsize = chem.size();
        CHECK(chem.at(k) == "Nitrogen");
        chem.remove_from(k);
        CHECK(chem.size() == oldsize - 1);
        CHECK(chem.at(k) != "Nitrogen");
        for (int m = 0; m < names.size(); m++)
            CHECK(chem.at(m) == names[m]);
    }
};