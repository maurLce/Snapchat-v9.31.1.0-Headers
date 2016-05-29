//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioRecorderDelegate.h"

@class AVAudioRecorder, NSData, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, SCChatAudioVideoNotePreview;

@interface SCChatAudioNoteRecorder : NSObject <AVAudioRecorderDelegate>
{
    NSObject<OS_dispatch_queue> *_audioNoteRecordingQueue;
    NSString *_audioSessionToken;
    NSURL *_recordedAudioFileURL;
    long long _audioNoteSampleNum;
    NSData *_audioNoteMediaData;
    double _durationInSec;
    double _maxAmplitude;
    double _captureSampleValue[8];
    id <SCChatAudioNoteRecorderDelegate> _delegate;
    SCChatAudioVideoNotePreview *_audioPreview;
    unsigned long long _state;
    AVAudioRecorder *_recorder;
    NSTimer *_recorderTimer;
}

@property(retain, nonatomic) NSTimer *recorderTimer; // @synthesize recorderTimer=_recorderTimer;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) SCChatAudioVideoNotePreview *audioPreview; // @synthesize audioPreview=_audioPreview;
@property(nonatomic) __weak id <SCChatAudioNoteRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_releaseAudioSessionTokenIfNeeded;
- (id)audioNoteRecorderSettings;
- (void)_removeTempFile;
- (id)_nextTempFileUrlWithExtension:(id)arg1;
- (void)recorderTimerFired:(id)arg1;
- (void)stopAudioNoteRecorderTimer;
- (void)startAudioNoteRecorderTimer;
- (void)showRecordingFailureStatusBar;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)stopAudioNoteRecordingAsynchronously;
- (void)startAudioNoteRecordingAsynchronously;
- (void)prepareNextRecordingWithCallback:(CDUnknownBlockType)arg1;
- (id)audioNoteRecordingQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

