#ifndef BITMAP_FILE_HEADER_HPP
#define BITMAP_FILE_HEADER_HPP

//stores information about the file format

//#pragma pack(2) // Avoid padding 
//force compiler to use 1 byte packaging 
#pragma pack(push, 1)
struct BitmapFileHeader
{
	//char header[2] { 'B', 'M' };
	uint16_t type { 0x4D42 };		// 4D -> M, 42 -> B
	uint32_t fileSize { 0 };
	uint32_t reserver { 0 };
	uint32_t dataOffset { 0 };
};
#pragma pack(pop)

#endif // BITMAP_FILE_HEADER_HPP