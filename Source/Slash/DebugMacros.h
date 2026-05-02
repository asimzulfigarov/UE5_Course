#pragma once

#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 50.f, 12, FColor::Red, true);
#define DRAW_SPHERE_SINGLE_FRAME(Location) if(GetWorld()) DrawDebugSphere(GetWorld(), Location, 50.f, 12, FColor::Red, false, -1.f);
#define DRAW_LINE(Location, Forward) if (GetWorld()) DrawDebugLine(GetWorld(), Location, Location + Forward * 100.f, FColor::Red, true, -1.f, 0, 0.f);
#define DRAW_LINE_SINGLE_FRAME(Location, Forward) if (GetWorld()) DrawDebugLine(GetWorld(), Location, Location + Forward * 100.f, FColor::Red, false, -1.f, 0, 0.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);
#define DRAW_POINT_SINGLE_FRAME(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f);
#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
	{\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 0.f);\
		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true);\
	}
#define DRAW_VECTOR_SINGLE_FRAME(StartLocation, EndLocation) if (GetWorld()) \
	{\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, -1.f, 0, 0.f);\
		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, false, -1.f);\
	}
