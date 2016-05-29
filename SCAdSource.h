//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAdSourceImpl.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCAdManager, SCAdResolutionLatencyTracker;

@interface SCAdSource : NSObject <SCAdSourceImpl>
{
    SCAdResolutionLatencyTracker *_latencyTracker;
    NSMutableDictionary *_adResponses;
    NSMutableSet *_pendingAdImpressionsToBeRecorded;
    SCAdManager *_adManager;
    long long _adServerType;
    long long _type;
    NSString *_name;
}

+ (id)getAdServerTypeString:(long long)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long adServerType; // @synthesize adServerType=_adServerType;
@property(retain, nonatomic) SCAdManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) NSMutableSet *pendingAdImpressionsToBeRecorded; // @synthesize pendingAdImpressionsToBeRecorded=_pendingAdImpressionsToBeRecorded;
@property(retain, nonatomic) NSMutableDictionary *adResponses; // @synthesize adResponses=_adResponses;
- (void).cxx_destruct;
- (void)handleResponse:(id)arg1 adController:(id)arg2;
- (void)handleAdResolutionError:(id)arg1 adController:(id)arg2;
- (void)handleAdResolutionNoFill:(id)arg1 adController:(id)arg2;
- (void)handleAdResolutionResponse:(id)arg1 adController:(id)arg2;
- (void)handleAdResolutionRequest:(id)arg1 userTargetingParams:(id)arg2 contextualTargetingParams:(id)arg3;
- (_Bool)isShadowSource;
- (_Bool)isFallbackSource;
- (_Bool)isPrimarySource;
- (void)fireAdResolutionRequest:(id)arg1 userTargetingParams:(id)arg2 contextualTargetingParams:(id)arg3;
- (void)updateFromSource:(id)arg1;
- (void)handleImpressionTrackBeforeAdResponseReady:(id)arg1;
- (void)recordImpression:(id)arg1 impressionData:(id)arg2;
- (_Bool)canRecordImpression:(id)arg1;
- (void)tryRecordImpression:(id)arg1 impressionData:(id)arg2;
- (id)initWithName:(id)arg1 type:(long long)arg2 adManager:(id)arg3 adServerType:(long long)arg4;

@end

