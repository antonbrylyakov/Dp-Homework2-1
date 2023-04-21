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
		auto text_block = new Paragraph(new Text());
		text_block->render("Hello world");
		delete text_block;
	}

	std::cout << std::endl;

	{
		auto text_block = new Reversed(new Text());
		text_block->render("Hello world");
		delete text_block;
	}

	std::cout << std::endl;

	{
		auto text_block = new Link(new Text());
		text_block->render("netology.ru", "Hello world");
		delete text_block;
	}

	std::cout << std::endl;

	{
		auto text_block = new Paragraph(new Link(new Text()));
		text_block->render("Hello world");
		delete text_block;
	}

	std::cout << std::endl;

	return 0;
}