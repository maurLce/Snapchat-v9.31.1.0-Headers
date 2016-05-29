//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALAuthDetails : NSObject
{
    long long _userId;
    long long _expires;
    NSString *_salt;
    NSString *_signature;
    NSString *_token;
    NSString *_mac;
}

+ (id)signDetails:(id)arg1 scopeId:(id)arg2 userId:(long long)arg3 salt:(id)arg4 expires:(long long)arg5 secretKey:(id)arg6;
+ (id)sha256Hex:(id)arg1;
@property(copy, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(nonatomic) long long expires; // @synthesize expires=_expires;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)toDict;
- (void)signDetails:(id)arg1 scopeId:(id)arg2 key:(id)arg3;
- (id)init;

@end

