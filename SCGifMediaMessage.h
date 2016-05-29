//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaMessage.h"

@class FLAnimatedImage;

@interface SCGifMediaMessage : SCBaseMediaMessage
{
    FLAnimatedImage *_gif;
}

@property(retain, nonatomic) FLAnimatedImage *gif; // @synthesize gif=_gif;
- (void).cxx_destruct;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (long long)scaMediaType;
- (CDUnknownBlockType)uploadFailureBlock;
- (CDUnknownBlockType)uploadSuccessBlock;
- (void)upload;
- (id)sendJSON;
- (void)gifFromCache:(CDUnknownBlockType)arg1;
- (void)gifWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)containsGif;
- (long long)mediaType;
- (id)cacheId;
- (_Bool)isMediaDataLoadedInCache;
- (id)initWithData:(id)arg1 sender:(id)arg2 recipient:(id)arg3;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

@end

