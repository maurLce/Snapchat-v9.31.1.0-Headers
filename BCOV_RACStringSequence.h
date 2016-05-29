//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCOV_RACSequence.h"

@class NSString;

@interface BCOV_RACStringSequence : BCOV_RACSequence
{
    NSString *_string;
    unsigned long long _offset;
}

+ (id)sequenceWithString:(id)arg1 offset:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;
- (id)array;
- (id)tail;
- (id)head;

@end

