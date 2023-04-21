#pragma once
#include <memory>
#include "Text.h"

class Reversed : public Text
{
public:
	Reversed(Text*&& text);
	Reversed(const std::shared_ptr<Text>& text);
	Reversed(std::shared_ptr<Text>&& text);
	virtual void render(const std::string& data) const override;
protected:
	std::shared_ptr<Text> m_text;
};