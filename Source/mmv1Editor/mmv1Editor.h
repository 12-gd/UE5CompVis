 #pragma once
    #include "Modules/ModuleInterface.h"
    #include "Modules/ModuleManager.h"

    class Fmmv1EditorModule : public IModuleInterface
    {
        public:
        virtual void StartupModule() override;
        virtual void ShutdownModule() override;
    };