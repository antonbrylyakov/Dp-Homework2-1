#include <iostream>
#ifdef _WIN32
#include "windows.h"
#endif
#include "Text.h"
#include "Paragraph.h"
#include "Reversed.h"
#include "Link.h"


int main()
{
	{
		auto text_block = Paragraph(std::make_shared<Text>());
		text_block.render("Hello world");
	}

	std::cout << std::endl;

	{
		auto text_block = Reversed(std::make_shared<Text>());
		text_block.render("Hello world");
	}

	std::cout << std::endl;

	{
		auto text_block = Link(std::make_shared<Text>());
		text_block.render("netology.ru", "Hello world");
	}

	std::cout << std::endl;

	{
		auto text_block = Paragraph(std::make_shared<Link>(std::make_shared<Text>()));
		text_block.render("Hello world");
	}

	std::cout << std::endl;

	return 0;
}