// Fill out your copyright notice in the Description page of Project Settings.


#include "ExportFile.h"

bool UExportFile::WriteTXT(FString Text, FString FileName)
{
	return FFileHelper::SaveStringToFile(Text, *(FPaths::ProjectDir() + FileName));
}