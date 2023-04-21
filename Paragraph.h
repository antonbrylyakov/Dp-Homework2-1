#pragma once
#include <memory>
#include "Text.h"

class Paragraph : public Text 
{
public:
	Paragraph(const std::shared_ptr<Text>& text);
	Paragraph(std::shared_ptr<Text>&& text);
	virtual void render(const std::string& data) const override;
protected:
	std::shared_ptr<Text> m_text;
};