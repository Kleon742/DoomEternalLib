struct idDeclFlare : idDeclTypeInfo
{
    struct subFlare_t
    {
        // subflare width
        float width; // Offset: 0x0

        // subflare height
        float height; // Offset: 0x4

        // the minimum pct to scale subflare width down based on occlusion ratio [0.0,1.0]
        float minScaleX; // Offset: 0x8

        // the minimum pct to scale subflare height down based on occlusion ratio [0.0,1.0]
        float minScaleY; // Offset: 0xC

        // amount to scale subflare width up when viewing within the cone angle
        float viewScaleX; // Offset: 0x10

        // amount to scale subflare height up when viewing within the cone angle
        float viewScaleY; // Offset: 0x14

        // scale subflare up when viewing within this cone angle [0.0,1.0]
        float coneAngle; // Offset: 0x18

        // subflare will be scaled up by this max amount when distance to viewer is 0
        float maxDistScaleX; // Offset: 0x1C

        // subflare will be scaled up by this max amount when distance to viewer is 0
        float maxDistScaleY; // Offset: 0x20

        // start scaling subflare up when viewing at this distance {{ units = m }}
        float scaleDistance; // Offset: 0x24

        // position along the vector from the light source to the screen center [0.0,1.0]
        float position; // Offset: 0x28

        // subflare color
        idColor color; // Offset: 0x2C

        // material to use for this subflare
        idMaterial2* mtr; // Offset: 0x40

        // reflect the subflare about x
        bool reflectX; // Offset: 0x48

        // reflect the subflare about y
        bool reflectY; // Offset: 0x49

    }; // Size: 0x50

    // subflares
    idList < idDeclFlare::subFlare_t , TAG_PARTICLE , false > subflares; // Offset: 0x88

    // calculate the view vector as ( vieworg - flareorg ) instead of using viewaxis.fwd
    bool useAltViewVecCalc; // Offset: 0x0

    // fade the entire flare based on the view angle compared to the quad normal
    float viewAngleFade; // Offset: 0xA4

    // fade is 1 from the quad normal to the view angle, and goes from 1->0 from the view angle to the perp plane fade the entire flare based on the view angle compared to the quad normal
    float invViewAngleFade; // Offset: 0xA8

    // fade goes from 1->0 from the quad normal to the view angle, and is 0 from the view angle to the perp plane brightness scale
    float brightness; // Offset: 0xAC

}; // Size: 0xB0
