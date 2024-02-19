struct idTypeInfoGraphLink : idTypeInfoGraphItem
{
    // node link is from
    idTypeInfoGraphNode* startNode; // Offset: 0x18

    // node link is going to
    idTypeInfoGraphNode* endNode; // Offset: 0x20

    // control points
    idList < idVec2 , TAG_IDLIST , false > controlPoints; // Offset: 0x28

}; // Size: 0x40
