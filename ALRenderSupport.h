//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALServiceListener.h"

@class NSMutableDictionary;

@interface ALRenderSupport : NSObject <ALServiceListener>
{
    NSMutableDictionary *_sinks;
}

- (void).cxx_destruct;
- (id)getSinkSupport:(id)arg1;
- (void)onVideoFrameSizeChanged:(id)arg1;
- (struct ALSize)getDimensions:(id)arg1;
- (void)removeView:(id)arg1 forSink:(id)arg2;
- (void)addView:(id)arg1 forSink:(id)arg2;
- (void)dispose;
- (id)init;

@end

