struct idFlags
{
    // bool operator ==( const & idFlags other ) const { return flags == other.flags; } bool operator !=( const & idFlags other ) const { return flags == other.flags; }  idFlags operator |( const int _flags ) const { return flags | _flags; } idFlags operator &( const int _flags ) const { return flags & _flags; }  idFlags & operator |=( const int _flags )
    int flags; // Offset: 0x0

}; // Size: 0x4
