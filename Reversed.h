#pragma once
#include <memory>
#include "Text.h"

class Reversed : public Text
{
public:
	// Декоратор не владеет объектом "единолично". Используем shared_ptr
	Reversed(const std::shared_ptr<Text>& text);
	Reversed(std::shared_ptr<Text>&& text);
	virtual void render(const std::string& data) const override;
protected:
	std::shared_ptr<Text> m_text;
};