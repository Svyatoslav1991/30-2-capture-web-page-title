#include <iostream>
#include <string>
#include <cpr/cpr.h>


int main()
{
	std::cout << "\tTASK 30.2 CAPTURE WEB PAGE TITLE\n\n";

	cpr::Response r = cpr::Get(cpr::Url{"http://httpbin.org/html"}, cpr::Header{{"Accept", "text/html"}});

	if (r.status_code == 200)
	{
		std::string text = r.text;

		int64_t startPos = text.find("<h1>");
		int64_t endPos = text.find("</h1>");

		if (startPos != std::string::npos && endPos != std::string::npos)
		{
			std::string title = text.substr(startPos + 4, endPos - startPos - 4);
			std::cout << "\t" << title << "\n";
		}
		else
		{
			std::cout << "Title not found\n";
		}
	}
	else
	{
		std::cerr << "ERROR: " << r.status_code << "\n";
	}

	return 0;
}
