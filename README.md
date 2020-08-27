# simple-graphic-creator

This now assumes an another c++ class for reading and writing bitmap image.

## TODO

* Read and Write of Bitmap Image
* 24-bit and 32-bit Format Support

## Examples

### Create Bitmap

```cpp
const uint32_t width = 1280;
const uint32_t height = 720;

Bitmap image( width, height, PixelFormat::Bgra32 );
```