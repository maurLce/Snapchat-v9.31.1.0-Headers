//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SCChatAudioNoteDecoder : NSObject
{
    NSObject<OS_dispatch_queue> *_audioNoteDecodingQueue;
}

- (void).cxx_destruct;
- (void)_removeTempFile:(id)arg1;
- (id)_nextTempFileUrlWithExtension:(id)arg1;
- (void)_audioNoteDecoderFailureHandlerWithFileURL:(id)arg1 failureQueue:(id)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getAudioNoteLinearPCMWithMediaData:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)audioNoteDecodingQueue;

@end

