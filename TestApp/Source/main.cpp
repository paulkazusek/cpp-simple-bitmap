#include "bitmap.hpp"

int main( int argc, const char *argv[] )
{
	const uint32_t width = { 641 };
	const uint32_t height = { 481 };

	Bitmap image( width, height );

	image.save( "result.bmp" );

	return EXIT_SUCCESS;
}