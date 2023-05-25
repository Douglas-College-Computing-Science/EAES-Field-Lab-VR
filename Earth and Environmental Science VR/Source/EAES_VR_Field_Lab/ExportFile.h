// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExportFile.generated.h"

/**
 * 
 */
UCLASS()
class EAES_VR_FIELD_LAB_API UExportFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintCallable, Category = "Export Text", meta = (Keywords = "Write to Text File"))
			static bool WriteTXT(FString Text, FString FileName);
	
};
