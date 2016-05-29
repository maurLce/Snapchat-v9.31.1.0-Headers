//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCSubscribableContent <NSObject>
- (_Bool)isUnsubscribed;
- (NSString *)entityType;
- (NSString *)entityId;
- (void)setSubscribeState:(unsigned long long)arg1;
- (unsigned long long)subscribeState;
- (_Bool)supportsSubscription;
@end

