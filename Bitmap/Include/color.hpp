#ifndef COLOR_HPP
#define COLOR_HPP

class Color
{
private:
	uint8_t alpha { 0xFF };
	uint8_t red { 0xFF };
	uint8_t green { 0xFF };
	uint8_t blue { 0xFF };

public:
	constexpr Color( uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue ) : alpha( alpha ), red( red ), green( green ), blue( blue ) {}

	constexpr uint8_t A() const
	{
		return alpha;
	}

	constexpr uint8_t R() const
	{
		return red;
	}

	constexpr uint8_t G() const
	{
		return green;
	}

	constexpr uint8_t B() const
	{
		return blue;
	}

	static constexpr Color Blue()
	{
		return Color( 0xFF, 0x00, 0x00, 0xFF );
	}

	static constexpr Color Black()
	{
		return Color( 0xFF, 0x00, 0x00, 0x00 );
	}

	static constexpr Color Cyan()
	{
		return Color( 0xFF, 0x00, 0x0F, 0xFF );
	}

	static constexpr Color DarkBlue()
	{
		return Color( 0xFF, 0x00, 0x00, 0x8B );
	}

	static constexpr Color DarkCyan()
	{
		return Color( 0xFF, 0x00, 0x8B, 0x8B );
	}

	static constexpr Color DarkGray()
	{
		return Color( 0xFF, 0xA9, 0xA9, 0xA9 );
	}

	static constexpr Color DarkGreen()
	{
		return Color( 0xFF, 0x00, 0x64, 0x00 );
	}

	static constexpr Color DarkMagenta()
	{
		return Color( 0xFF, 0x8B, 0x00, 0x8B );
	}

	static constexpr Color DarkRed()
	{
		return Color( 0xFF, 0x8B, 0x00, 0x00 );
	}

	static constexpr Color Gray()
	{
		return Color( 0xFF, 0x80, 0x80, 0x80 );
	}

	static constexpr Color LightGray()
	{
		return Color( 0xFF, 0xD3, 0xD3, 0xD3 );
	}

	static constexpr Color Red()
	{
		return Color( 0xFF, 0xFF, 0x00, 0x00 );
	}

	static constexpr Color Yellow()
	{
		return Color( 0xFF, 0xFF, 0xFF, 0x00 );
	}
};

//constexpr Color blue( 0xFF, 0x00, 0x00, 0xFF );

#endif // COLOR_HPP