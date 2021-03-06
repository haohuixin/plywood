PLY_STRUCT_BEGIN(ply::cpp::ReflectionHookError)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_MEMBER(linearLoc)
PLY_STRUCT_MEMBER(otherLoc)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::ReflectedClass)
PLY_STRUCT_MEMBER(cppInlPath)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_MEMBER(members)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::ReflectedEnum)
PLY_STRUCT_MEMBER(cppInlPath)
PLY_STRUCT_MEMBER(namespacePrefix)
PLY_STRUCT_MEMBER(enumName)
PLY_STRUCT_MEMBER(enumerators)
PLY_STRUCT_END()

PLY_STRUCT_BEGIN(ply::cpp::SwitchInfo)
PLY_STRUCT_MEMBER(macro)
PLY_STRUCT_MEMBER(inlineInlPath)
PLY_STRUCT_MEMBER(cppInlPath)
PLY_STRUCT_MEMBER(name)
PLY_STRUCT_MEMBER(isReflected)
PLY_STRUCT_MEMBER(states)
PLY_STRUCT_END()

PLY_ENUM_BEGIN(ply::cpp::, ReflectionHookError::Type)
PLY_ENUM_IDENTIFIER(Unknown)
PLY_ENUM_IDENTIFIER(SwitchMayOnlyContainStructs)
PLY_ENUM_IDENTIFIER(MissingReflectOffCommand)
PLY_ENUM_IDENTIFIER(UnexpectedReflectOffCommand)
PLY_ENUM_IDENTIFIER(CannotInjectCodeIntoMacro)
PLY_ENUM_IDENTIFIER(DuplicateCommand)
PLY_ENUM_IDENTIFIER(CommandCanOnlyBeUsedAtDeclarationScope)
PLY_ENUM_IDENTIFIER(CommandCanOnlyBeUsedInClassOrStruct)
PLY_ENUM_IDENTIFIER(CommandCanOnlyBeUsedInsideEnum)
PLY_ENUM_IDENTIFIER(UnrecognizedCommand)
PLY_ENUM_END()

