#include "pch.h"
#include "../laba2/laba2.cpp"

TEST(ShortestWordTest, NoWords1) {
	char* str = "!@#$%^&*     -+=()_,.;[]";
	char* word = ShortestWord(str);
	char* ans = "No words";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, NoWords2) {
	char* str = "";
	char* word = ShortestWord(str);
	char* ans = "No words";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, OneLetter) {
	char* str = "R";
	char* word = ShortestWord(str);
	char* ans = "R";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, OneWord) {
	char* str = "AbCd";
	char* word = ShortestWord(str);
	char* ans = "AbCd";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, LastShortestWord) {
	char* str = "John Sarah Li";
	char* word = ShortestWord(str);
	char* ans = "Li";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, FirstShortestWord) {
	char* str = "Are they really beat Paul?";
	char* word = ShortestWord(str);
	char* ans = "Are";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, DifferentSeparators) {
	char* str = "Your,of&news,feed-helps,you,keep,with.";
	char* word = ShortestWord(str);
	char* ans = "of";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, UpperCase) {
	char* str = "ABCD EFG HIJKLMNO";
	char* word = ShortestWord(str);
	char* ans = "EFG";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}

TEST(ShortestWordTest, LowerCase) {
	char* str = "abcd efg hijklmno";
	char* word = ShortestWord(str);
	char* ans = "efg";
	while (*word != 0) {
		EXPECT_EQ(*word, *ans);
		word++;
		ans++;
	}
	EXPECT_EQ(*word, *ans);
}