#include <iostream>
#include <algorithm>
#include "Link.h"

Link::Link(Text*&& text): m_text(std::move(text))
{
}

Link::Link(const std::shared_ptr<Text>& text): m_text(text)
{
}

Link::Link(std::shared_ptr<Text>&& text): m_text(text)
{
}

// Ссылка по умолчанию на текущий документ
void Link::render(const std::string& data) const
{
	render("#", data);
}

void Link::render(const std::string& url, const std::string& data) const
{
	std::cout << "<a href=\"" << url << "\">";
	m_text->render(data);
	std::cout << "</a>";
}
