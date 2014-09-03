#ifndef TARGETSNAPSHOT_H
#define TARGETSNAPSHOT_H

#include "Geometry.h"

struct TargetSnapshot {
    Vector3D position;
    Vector3D velocity;
};

struct TargetEnrichedSnapshot {
    TargetSnapshot posInfo;

    int sourceNo;
    int inSourceIndex;
    int priority;
    unsigned long lastSeenTime;
};

#endif // TARGETSNAPSHOT_H
