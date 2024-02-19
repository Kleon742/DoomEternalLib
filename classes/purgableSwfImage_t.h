struct purgableSwfImage_t
{
    // Use the name instead of an image pointer so we don't have to worry about it being deleted on a level crossing or other strange event.  Note: this needs to be static memory, because it can be allocated while in game, and then the attempt to purge it could come back in the shell.
    idStrStatic < 128 > imageName; // Offset: 0x0

    unsigned int swfFrameNum; // Offset: 0xB0

}; // Size: 0xB8
