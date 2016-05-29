//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCAAdFetchError : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *errorCode;
    NSNumber *attemptCount;
    NSString *adId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getAdId;
- (void)setAdId:(id)arg1;
- (long long)getAttemptCount;
- (void)setAttemptCount:(long long)arg1;
- (long long)getErrorCode;
- (void)setErrorCode:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

