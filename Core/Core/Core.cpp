#include "stdafx.h"

#include <iostream>

#include "ootz/AStar2D.h"

#include "ootz/Singleton.h"
#include "ootz/DirectX9/Shader.h"
#include "ootz/Basic/Example.h"
#include "ootz/Math/Math.h"

int main()
{
    using namespace ootz;

    {
        Grid2D grid(8, 8);
        grid.SetAttribute(1, 1, Attribute::Unreachable);
        grid.SetAttribute(0, 1, Attribute::Unreachable);
        //grid.SetAttribute(1, 0, Attribute::Unreachable);

        StreamGrid2D streamGrid(grid);

        AStar2D aStar;
        std::vector<Vector2> path = aStar.GetPath(streamGrid, Vector2(0.0f, 0.0f), Vector2(7.0f, 7.0f));

        for (const auto& n : path)
        {
            std::cout << n << '\n';
        }
    }

    {
        using namespace Math;

        Plane plane(Vector3(0.0f, 0.0f, 0.0f), Vector3(0.0f, 1.0f, 0.0f));


    }

    return 0;
}

