//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol RegisterPhoneNumberViewControllerDelegate <NSObject>
- (void)didRegisterPhoneNumber:(NSDictionary *)arg1;
- (_Bool)shouldSkipConfirmation;

@optional
- (void)logRegisterPhoneNumberAttempt:(unsigned long long)arg1;
- (void)didVerifyPhoneNumberFailed;
@end

