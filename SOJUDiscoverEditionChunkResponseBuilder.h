//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUAdPlacementMetadata;

@interface SOJUDiscoverEditionChunkResponseBuilder : NSObject
{
    NSString *_url;
    NSNumber *_dsnapId;
    NSString *_dsnapType;
    NSString *_hashValue;
    NSString *_color;
    NSNumber *_adType;
    SOJUAdPlacementMetadata *_adPlacementMetadata;
}

+ (id)withJUDiscoverEditionChunkResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setAdPlacementMetadata:(id)arg1;
- (id)setAdType:(id)arg1;
- (id)setColor:(id)arg1;
- (id)setHashValue:(id)arg1;
- (id)setDsnapType:(id)arg1;
- (id)setDsnapId:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)build;

@end

