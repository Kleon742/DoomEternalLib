struct idLogicNodeModelGetEntitiesInRadius : idLogicNodeModel
{
    // True by default for optimization. If false, will search all entities, which is more expensive.
    bool onlyEntitiesWithCollision; // Offset: 0x10

}; // Size: 0x18
