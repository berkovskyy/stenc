/*
Header file to store key info
Copyright (C) 2010  John D. Coleman

This file is part of stenc.

stenc is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#ifndef KEYINFO_H
#define KEYINFO_H
#include <string>

class Keyinfo{
	public:
		char* key;
	        int keySize;
		bool valid;
		std::string check;
		void load(std::string hexinput);
		Keyinfo();
		~Keyinfo();
	private:
		void loadKey(std::string str);
		void loadCheck();
	
};

#endif
