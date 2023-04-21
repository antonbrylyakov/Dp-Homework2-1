#include <iostream>
#include <algorithm>
#include "Reversed.h"

Reversed::Reversed(Text*&& text): m_text(std::move(text))
{
}

Reversed::Reversed(const std::shared_ptr<Text>& text): m_text(text)
{
}

Reversed::Reversed(std::shared_ptr<Text>&& text): m_text(text)
{
}

void Reversed::render(const std::string& data) const
{
	std::string buffer(data.size(), 0);
	std::reverse_copy(data.cbegin(), data.cend(), buffer.begin());
	m_text->render(buffer);
}
