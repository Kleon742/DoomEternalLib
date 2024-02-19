struct aiAttackIndex_t
{
    // bool Equals( const aiAttackIndex_t & other ) const { return ( subgraph == other.subgraph ) && ( graphNode == other.graphNode ) && ( attackIndex == other.attackIndex ); }
    idDeclAttackSubGraph* subgraph; // Offset: 0x0

    idDeclAttackNode* graphNode; // Offset: 0x8

    int attackIndex; // Offset: 0x10

}; // Size: 0x18
