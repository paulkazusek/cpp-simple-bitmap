# simple-graphic-creator

This now assumes an another C++ Bitmap library.

* Read 24-bit and 32-bit Bitmap Image
* Write 24-bit and 32-bit Bitmap Image

## Examples

### Create Bitmap

```cpp
const uint32_t width { 641 };
const uint32_t height { 481 };

Bitmap image( width, height, PixelFormat::Bgra32 );
```