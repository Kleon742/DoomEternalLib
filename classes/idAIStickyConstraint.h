struct idAIStickyConstraint
{
    idAFConstraint_Fixed* constraint; // Offset: 0x0

    idAFConstraint_BallAndSocketJoint* constraint2; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > timeStarted; // Offset: 0x10

}; // Size: 0x18
