//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUBroadcastPrecachingPrecacheCountsBuilder : NSObject
{
    NSNumber *_wifiCount;
    NSNumber *_wwanCount;
}

+ (id)withJUBroadcastPrecachingPrecacheCounts:(id)arg1;
- (void).cxx_destruct;
- (id)setWwanCount:(id)arg1;
- (id)setWifiCount:(id)arg1;
- (id)build;

@end

