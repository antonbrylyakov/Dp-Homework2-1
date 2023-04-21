#include <iostream>
#include "Paragraph.h"

Paragraph::Paragraph(const std::shared_ptr<Text>& text): m_text(text)
{
}

Paragraph::Paragraph(std::shared_ptr<Text>&& text): m_text(text)
{
}

void Paragraph::render(const std::string& data) const
{
	std::cout << "<p>";
	m_text->render(data);
	std::cout << "</p>";
}
