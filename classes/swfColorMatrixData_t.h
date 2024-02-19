struct swfColorMatrixData_t : swfFilter_t
{
    // Color transform is a 5x5 matrix where the bottom row is always 0, 0, 0, 0, 1. The top 4 rows are read in left to right, top to bottom.
    float matrix[20]; // Offset: 0x4

}; // Size: 0x54
