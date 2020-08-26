#ifndef PIXEL_FORMAT_HPP
#define PIXEL_FORMAT_HPP

class PixelFormat
{
public:
	enum Value : uint8_t
	{
		Bgr24,
		Bgra32
	};

	PixelFormat() = default;
	constexpr PixelFormat( Value format ) : value( format ) { }

	// Allow switch and comparisons.
	operator Value() const { return value; }
	explicit operator bool() = delete;

	static int BitsFromPixelFormat( const PixelFormat &pixelFormat )
	{
		switch( pixelFormat )
		{
		case PixelFormat::Bgr24:
			return 24;
		case PixelFormat::Bgra32:
			return 32;
		default:
			return 0;	// throw exception?
		}
	}

	static int BytesPerPixel( const PixelFormat &pixelFormat )
	{
		switch( pixelFormat )
		{
		case PixelFormat::Bgr24:
			return 3;
		case PixelFormat::Bgra32:
			return 4;
		default:
			return 0;	// throw exception?
		}
	}

private:
	Value value;
};

//constexpr Color blue( 0xFF, 0x00, 0x00, 0xFF );

#endif // PIXEL_FORMAT_HPP