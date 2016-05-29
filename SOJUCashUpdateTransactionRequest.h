//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCashUpdateTransactionRequest.h"

@class NSNumber, NSString;

@interface SOJUCashUpdateTransactionRequest : NSObject <SOJUCashUpdateTransactionRequest>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_transactionId;
    NSString *_conversationId;
    NSNumber *_saved;
    NSNumber *_version;
}

@property(readonly, copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSNumber *saved; // @synthesize saved=_saved;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 transactionId:(id)arg4 conversationId:(id)arg5 saved:(id)arg6 version:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

