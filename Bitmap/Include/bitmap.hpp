#ifndef BITMAP_HPP
#define BITMAP_HPP

#include <memory>
#include <string>

#include "color.hpp"
#include "bitmap_file_header.hpp"
#include "bitmap_information_header.hpp"

struct BRGA32
{
	uint8_t blue { 0xFF };
	uint8_t green { 0xFF };
	uint8_t red { 0xFF };
	uint8_t alpha { 0xFF };
};

class Bitmap
{
private:
	BitmapFileHeader bitmapFileHeader = {};
	BitmapInformationHeader bitmapInformationHeader = {};
	std::unique_ptr<BRGA32[]> data { nullptr };

public:
	Bitmap( uint32_t width, uint32_t height, bool hasAlpha = true );
	~Bitmap();

	void save( const std::string& fileName );
	void setPixel( uint32_t x, uint32_t y, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha );
	void setPixel( uint32_t x, uint32_t y, Color color );
	// TODO: void setPixel( Point point, Color color );

	void setHeight( const uint32_t &height );
	void setWidth( const uint32_t &width );
};

#endif // BITMAP_HPP