#ifndef FALLOUTTTW_MODATACHECKER_H
#define FALLOUTTTW_MODATACHECKER_H

#include <gamebryomoddatachecker.h>

class FalloutTTWModDataChecker : public GamebryoModDataChecker
{
public:
  using GamebryoModDataChecker::GamebryoModDataChecker;

protected:
  virtual const FileNameSet& possibleFolderNames() const override {
    static FileNameSet result{
      "fonts", "interface", "menus", "meshes", "music", "scripts", "shaders",
      "sound", "strings", "textures", "trees", "video", "facegen", "materials",
      "nvse", "distantlod", "asi", "Tools", "MCM", "distantland", "mits",
      "dllplugins", "CalienteTools", "shadersfx", "config"
    };
    return result;
  }
  virtual const FileNameSet& possibleFileExtensions() const override {
    static FileNameSet result{
      "esp", "esm", "bsa", "modgroups", "ini"
    };
    return result;
  }
};

#endif // FALLOUTTTW_MODATACHECKER_H
