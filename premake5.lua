workspace "chemutils"
    configurations { "Debug", "Release" }

project "chemutils"
    architecture "x64"
    kind "StaticLib"
    language "C++"
    cppdialect "C++20"
    targetdir "build/bin/"

    files { "src/**.cpp", "src/**.hpp" }

    includedirs
    {
        "src/*"
    }
    libdirs
    {

    }
    links
    {
        
    }

    filter "configurations:Debug"
        symbols "On"

    filter "configurations:Release"
        optimize "On"