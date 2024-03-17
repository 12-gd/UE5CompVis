  using UnrealBuildTool;

    public class mmv1Editor: ModuleRules
    {
         public mmv1Editor(ReadOnlyTargetRules Target) : base(Target)
         {
               PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "mmv1", "Slate", "SlateCore"});
         }
    }