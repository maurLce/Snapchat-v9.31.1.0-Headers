//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface SCStoryAdStreamInsertionInfo : NSObject <NSCoding>
{
    unsigned long long _firstOnResume;
    unsigned long long _interval;
    unsigned long long _minimumSnapsAfterAd;
    unsigned long long _firstOnStart;
}

+ (id)fastCodingKeys;
@property(nonatomic) unsigned long long firstOnStart; // @synthesize firstOnStart=_firstOnStart;
@property(nonatomic) unsigned long long minimumSnapsAfterAd; // @synthesize minimumSnapsAfterAd=_minimumSnapsAfterAd;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long firstOnResume; // @synthesize firstOnResume=_firstOnResume;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (_Bool)preferFastCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

