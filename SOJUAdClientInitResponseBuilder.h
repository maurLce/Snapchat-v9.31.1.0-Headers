//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SOJUAdClientInitResponseBuilder : NSObject
{
    NSArray *_industries;
    NSString *_targetingString;
    NSString *_sessionId;
}

+ (id)withJUAdClientInitResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setSessionId:(id)arg1;
- (id)setTargetingString:(id)arg1;
- (id)setIndustries:(id)arg1;
- (id)build;

@end

