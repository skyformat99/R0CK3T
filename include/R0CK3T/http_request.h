#pragma once

#include <string>
#include <vector>
#include <map>
#include "header.h"

namespace R0CK3T {

	struct HttpRequest
	{
		std::string method;
		std::string uri;
		int http_version_major;
		int http_version_minor;
		std::vector<Header> headers;
		std::map<std::string, std::string> urlParams;
	};

}