//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCASwipeBase.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCAFilterLensSwipe : SCASwipeBase <NamedEvent>
{
    NSNumber *faceSwapCount;
    long long iapStatus;
    NSString *filterLensId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getFilterLensId;
- (void)setFilterLensId:(id)arg1;
- (long long)getIapStatus;
- (void)setIapStatus:(long long)arg1;
- (long long)getFaceSwapCount;
- (void)setFaceSwapCount:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

