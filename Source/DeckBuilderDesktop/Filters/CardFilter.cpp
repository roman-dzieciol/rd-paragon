// Fill out your copyright notice in the Description page of Project Settings.

#include "DeckBuilderDesktop.h"
#include "CardFilter.h"


UCardFilter::UCardFilter(class FObjectInitializer const & ObjectInitializer)
	: Super(ObjectInitializer)
{
	static FName FNAME_CardFilter_Generic(TEXT("Generic"));
	FilterName = FNAME_CardFilter_Generic;
}

bool UCardFilter::IsMatching(UCardModel* CardModel) const
{
	return true;
}

FText UCardFilter::GetDisplayName() const
{
	if (!LocalizedName.IsEmpty())
	{
		return LocalizedName;
	}
	return FText::FromName(FilterName);
}

FText UCardFilter::GetDisplayValue() const
{
	return LocalizedValue;
}

void UCardFilter::RemoveFiltersMatching(FName FilterName, FText DisplayName, FText DisplayValue)
{

}

void UCardFilter::RemoveFilter(UCardFilter* FilterToRemove)
{

}

TArray<UCardFilter*> UCardFilter::FindFiltersMatching(FName FilterName, FText DisplayName, FText DisplayValue) const
{
	return TArray<UCardFilter*>();
}

