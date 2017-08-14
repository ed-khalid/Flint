char* droneStatusMap(int status)
{
    switch (status)
    {
        case DRONE_STATUS_NOT_PRESENT:
            return (char*)"Not Present";
        case DRONE_STATUS_IDLE:
            return (char*)"Idle";
        case DRONE_STATUS_RUNNING:
            return (char*)"Running";
        case DRONE_STATUS_STANDBY:
            return (char*)"Standby";
        default:
            return (char*)"Unknown";
    }
}

int powerUp(Drone* drone)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int powerDown(Drone* drone)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int gracefulPowerDown(Drone* drone)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int reboot(Drone* drone)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int setDroneSpeed(Drone* drone, float speed)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int setDroneHeight(Drone* drone, float height)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int setDroneDirection(Drone *drone, int direction)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int setDroneTilt(Drone* drone, float tilt)
{
    ENTRY_POINT;
    // TODO: add
    EXIT_POINT_WITH_RETURN(TRUE);
}

int populateDroneHandle(Drone* drone)
{
    ENTRY_POINT;
    drone->handle.powerUp = powerUp;
    drone->handle.powerDown = powerDown;
    drone->handle.gracefulPowerDown = gracefulPowerDown;
    drone->handle.reboot = reboot;
    drone->handle.setDroneSpeed = setDroneSpeed;
    drone->handle.setDroneHeight = setDroneHeight;
    drone->handle.setDroneDirection = setDroneDirection;
    drone->handle.setDroneTilt = setDroneTilt;
    EXIT_POINT_WITH_RETURN(TRUE);
}

int populateDrone(Drone* drone)
{
    ENTRY_POINT;
    if (!populateDroneHandle(drone))
    {
        debugPrint(FATAL, __DEBUG__ || __RELEASE__, "Failed to populate drone handle");
    }
    // TODO: finish
    EXIT_POINT_WITH_RETURN(TRUE);
}