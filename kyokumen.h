enum {
    // nothing
    EMPTY=0,
    EMP=0,

    // PROMOTE
    PROMOTE=1<<3,

    // KOMA
    FU=1,
    KY=2,
    KE=3,
    GI=4,
    KI=5,
    KA=6,
    HI=7,
    OU=8,

    TO=FU+PROMOTE,
    NY=KY+PROMOTE,
    NK=KE+PROMOTE,
    NG=GI+PROMOTE,
    UM=KA+PROMOTE,
    RY=HI+PROMOTE,

    // SELF MARK
    SELF=1<<4,

    // ENEMY MARK
    ENEMY=1<<5,

    // OUT OF FIELD
    WALL=SELF+ENEMY,

    // ACTUAL KOMA
    SFU=SELF+FU,
    SKY=SELF+KY,
    SKE=SELF+KE,
    SGI=SELF+GI,
    SKI=SELF+KI,
    SKA=SELF+KA,
    SHI=SELF+HI,
    SOU=SELF+OU,

    STO=SELF+TO,
    SNY=SELF+NY,
    SNK=SELF+NK,
    SNG=SELF+NG,
    SUM=SELF+UM,
    SRY=SELF+RY,

    EFU=ENEMY+FU,
    EKY=ENEMY+KY,
    EKE=ENEMY+KE,
    EGI=ENEMY+GI,
    EKI=ENEMY+KI,
    EKA=ENEMY+KA,
    EHI=ENEMY+HI,
    EOU=ENEMY+OU,

    ETO=ENEMY+TO,
    ENY=ENEMY+NY,
    ENK=ENEMY+NK,
    ENG=ENEMY+NG,
    EUM=ENEMY+UM,
    ERY=ENEMY+RY,
};