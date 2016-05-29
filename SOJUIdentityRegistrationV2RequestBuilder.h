//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUIdentityRegistrationV2RequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_password;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_birthday;
    NSString *_timeZone;
    NSNumber *_fromDeepLink;
    NSString *_studySettings;
    NSString *_piggyBackParam;
    NSString *_deviceTokenId;
    NSString *_deviceTokenSig;
}

+ (id)withJUIdentityRegistrationV2Request:(id)arg1;
- (void).cxx_destruct;
- (id)setDeviceTokenSig:(id)arg1;
- (id)setDeviceTokenId:(id)arg1;
- (id)setPiggyBackParam:(id)arg1;
- (id)setStudySettings:(id)arg1;
- (id)setFromDeepLink:(id)arg1;
- (id)setTimeZone:(id)arg1;
- (id)setBirthday:(id)arg1;
- (id)setLastName:(id)arg1;
- (id)setFirstName:(id)arg1;
- (id)setPassword:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end

