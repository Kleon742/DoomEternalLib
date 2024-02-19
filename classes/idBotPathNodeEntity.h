struct idBotPathNodeEntity : idBloatedEntity
{
    // if true - node is enabled and ready to use. If false, will need to be turned on by script.
    bool pathNodeEnabled; // Offset: 0xB88

    // How close the bot should get to this node to consider it "reached". {{ units = m }}
    float pathNodeRadius; // Offset: 0xB8C

    // DON'T use - this is only set for error detection. This will track the type of surface this node is on. Used to detect in the editor if the node isn't touching the ground.
    surfaceType_t detectedSurfaceType; // Offset: 0xB90

    // DON'T use - this is only set for error detection. This is the minimum radius the path node will allow. {{ units = m }}
    float minPathNodeRadius; // Offset: 0xB94

}; // Size: 0xB98
