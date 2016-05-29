//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFilterBase.h"

@class NSString;

@interface SCExponentialGeometricFilter : NSObject <SCFilterBase>
{
    unsigned long long _sampleCountCutover;
    _Bool _includeInitialValueInFiltering;
    double _filteredValue;
    unsigned long long _sampleCount;
    double _filterCoefficient;
}

@property(nonatomic) _Bool includeInitialValueInFiltering; // @synthesize includeInitialValueInFiltering=_includeInitialValueInFiltering;
@property(nonatomic) double filterCoefficient; // @synthesize filterCoefficient=_filterCoefficient;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) double filteredValue; // @synthesize filteredValue=_filteredValue;
- (void)performFilteringWithNewSample:(double)arg1;
- (void)reset;
- (id)initWithFilterCoefficient:(double)arg1 initialValue:(double)arg2 includeInitialValueInFiltering:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

