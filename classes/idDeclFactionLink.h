struct idDeclFactionLink : idTypeInfoGraphLink
{
    // if true, this link is merely to specify inheritance in the graph, not a relationship
    bool inheritsFrom; // Offset: 0x40

    // if false, this link isn't considered
    bool enabled; // Offset: 0x41

    // if true, this link does not apply to children nodes
    bool noInheritance; // Offset: 0x42

    // if true, this link represents natural infighting
    bool infighting; // Offset: 0x43

    // relationship for this link, nodes can have multiple links between them if desired
    idList < aiSocialInteraction_t , TAG_IDLIST , false > relationships; // Offset: 0x48

}; // Size: 0x60
