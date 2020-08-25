#include "bitmap.hpp"

#include <fstream>
#include <iostream>

Bitmap::Bitmap( uint32_t width, uint32_t height, bool hasAlpha )
{
	if( width <= 0 || height <= 0 )
	{
		throw std::runtime_error( "The image width and height must be positive numbers." );
	}

	bitmapInformationHeader.width = width;
	bitmapInformationHeader.height = height;

	if( hasAlpha )
	{
		bitmapInformationHeader.bitsPerPixel = 32;
	}
	else
	{
		bitmapInformationHeader.bitsPerPixel = 24;
	}

	bitmapFileHeader.fileSize = sizeof( BitmapFileHeader ) + sizeof( BitmapInformationHeader ) + ( width * height * 4 );
	bitmapFileHeader.dataOffset = sizeof( BitmapFileHeader ) + sizeof( BitmapInformationHeader );

	data = std::unique_ptr<BRGA32[]>( new BRGA32[width * height] );
}

Bitmap::~Bitmap()
{
}

void Bitmap::save( const std::string &fileName )
{
	std::ofstream stream( fileName.c_str(), std::ios::binary );
	if( !stream )
	{
		throw std::runtime_error( "Bitmap::save(): Could not open file " + fileName + " for writing!" );
	}

	//save all header and bitmap information into file
	stream.write( reinterpret_cast< const char* >( &bitmapFileHeader ), sizeof( bitmapFileHeader ) );
	stream.write( reinterpret_cast< const char* >( &bitmapInformationHeader ), sizeof( bitmapInformationHeader ) );
	stream.write( reinterpret_cast< const char* >( data.get() ), ( bitmapInformationHeader.width * bitmapInformationHeader.height * sizeof( BRGA32 ) ) );
	stream.close();
}

void Bitmap::setPixel( uint32_t x, uint32_t y, uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha )
{
	if( x > bitmapInformationHeader.width || y > bitmapInformationHeader.height )
	{
		throw std::runtime_error( "Bitmap::setPixel(): The point is outside the image boundaries!" );
	}

	BRGA32 *pixel = data.get() + ( y * bitmapInformationHeader.width ) + x;
	pixel->blue = blue;
	pixel->green = green;
	pixel->red = red;
	pixel->alpha = alpha;
}

void Bitmap::setPixel( uint32_t x, uint32_t y, Color color )
{
	setPixel( x, y, color.R(), color.G(), color.B(), color.A() );
}

void Bitmap::setHeight( const uint32_t & height )
{
}

void Bitmap::setWidth( const uint32_t & width )
{
}
