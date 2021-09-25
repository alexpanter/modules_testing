workspace "ModuleTest"

  architecture "x64"
  configurations
  {
     "Debug",
     "Release"
  }

project "HelloWorld"
  kind "ConsoleApp"
  language "C++"
  cppdialect "C++20"

  targetdir ("bin/%{prj.name}")
  objdir ("obj/%{prj.name}")

  files
  {
     "**.cpp"
  }

  filter "configurations:Debug"
    defines {"DEBUG"}
    symbols "On"

  filter "configurations:Release"
    defines {"NDEBUG"}
    optimize "On"

  filter { "files:**.cpp" }
    compileas "Module"

  filter "toolset:gcc"
    buildoptions
    {
       "-fmodules-ts -c"
    }

    prebuildcommands
    {
       "g++-11 -std=c++20 -fmodules-ts -xc++-system-header iostream"
    }

    cleancommands
    {
       "rm -rf gcm.cache/"
    }

    postbuildcommands
    {
       --"g++-11 -std=c++20 -fmodules-ts obj/**.o "
    }
    

    
    
