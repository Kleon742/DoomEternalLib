struct swfPlayFrameData_t
{
    // name of the swf.
    char swfName[128]; // Offset: 0x0

    // frame to use.
    int frame; // Offset: 0x80

    // frame label to use.
    char frameLabel[128]; // Offset: 0x84

    // sprite path. ( instanceName.Instancename.instancename form )
    char spritePath[128]; // Offset: 0x104

}; // Size: 0x184
