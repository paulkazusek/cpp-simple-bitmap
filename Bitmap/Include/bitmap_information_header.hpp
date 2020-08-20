#ifndef BITMAP_INFORMATION_HEADER_HPP
#define BITMAP_INFORMATION_HEADER_HPP

//stores information about the bitmap
struct BitmapInformationHeader
{
	uint32_t headerSize { 40 };					// Size of this header (in bytes)
	int32_t width { 0 };						// width of bitmap in pixels
	int32_t height { 0 };						// height of bitmap in pixels
	uint16_t planes { 1 };						// No. of planes for the target device, this is always 1
	uint16_t bitsPerPixel { 0 };				// No. of bits per pixel
	uint32_t compression { 0 };					// 0 or 3 - uncompressed. THIS PROGRAM CONSIDERS ONLY UNCOMPRESSED BMP images
	uint32_t dataSize { 0 };					// 0 - for uncompressed images
	int32_t horizontalResolution { 0 };
	int32_t verticalResolution { 0 };
	//int32_t XPelsPerMeter { 3800 };
	//int32_t YPelsPerMeter { 3800 };
	uint32_t colors { 0 };						// No. color indexes in the color table. Use 0 for the max number of colors allowed by bit_count
	uint32_t importColors { 0 };				// No. of colors used for displaying the bitmap. If 0 all colors are required

	BitmapInformationHeader() = default;
};

#endif // BITMAP_INFORMATION_HEADER_HPP