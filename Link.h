#pragma once
#include <memory>
#include "Text.h"

class Link : public Text
{
public:
	Link(const std::shared_ptr<Text>& text);
	Link(std::shared_ptr<Text>&& text);
	virtual void render(const std::string& data) const override;
	virtual void render(const std::string& url, const std::string& data) const;
protected:
	std::shared_ptr<Text> m_text;
};