#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	int x;
	int y;

public:
	constexpr Point( int x, int y ) : x { x }, y { y } {}

	constexpr int X() const
	{
		return x;
	}

	constexpr int Y() const
	{
		return y;
	}
};

#endif // POINT_HPP
