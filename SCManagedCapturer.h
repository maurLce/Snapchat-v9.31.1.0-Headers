//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedDeviceCapacityAnalyzerListener.h"
#import "SCManagedLensesProcessorDelegate.h"
#import "SCManagedVideoCapturerDelegate.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, LSAGLView, NSMutableSet, NSString, NSTimer, SCManagedCaptureDevice, SCManagedCapturerListenerAnnouncer, SCManagedCapturerState, SCManagedDeviceCapacityAnalyzer, SCManagedFrontFlashController, SCManagedLensesProcessor, SCManagedStillImageCapturer, SCManagedVideoCapturer, SCManagedVideoScanner, SCSingleFrameStreamCapturer;

@interface SCManagedCapturer : NSObject <SCManagedDeviceCapacityAnalyzerListener, SCManagedVideoCapturerDelegate, SCManagedLensesProcessorDelegate>
{
    SCManagedCapturerListenerAnnouncer *_announcer;
    id <SCPerforming> _performer;
    unsigned long long _status;
    SCManagedCapturerState *_state;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    LSAGLView *_videoPreviewGLView;
    AVCaptureSession *_session;
    SCManagedCaptureDevice *_device;
    SCManagedDeviceCapacityAnalyzer *_deviceCapacityAnalyzer;
    SCManagedStillImageCapturer *_stillImageCapturer;
    SCManagedVideoCapturer *_videoCapturer;
    SCManagedVideoScanner *_videoScanner;
    id <SCManagedVideoDataSource> _videoDataSource;
    SCManagedLensesProcessor *_lensesProcessor;
    unsigned long long _bootSequence;
    unsigned long long _streamingSequence;
    SCManagedFrontFlashController *_frontFlashController;
    _Bool _videoRecording;
    _Bool _stillImageCapturing;
    unsigned int _videoRecordingSession;
    NSTimer *_livenessTimer;
    _Bool _attachedUnsafeChanges;
    NSMutableSet *_tokenSet;
    SCSingleFrameStreamCapturer *_frameCap;
}

+ (id)sharedInstance;
+ (_Bool)isMixDeviceCaptureSupported;
+ (_Bool)is720pSupported;
+ (_Bool)is1080pSupported;
- (void).cxx_destruct;
- (void)_sessionRuntimeError:(id)arg1;
- (void)_livenessConsistency:(id)arg1;
- (void)_runningConsistencyCheckAndFix;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_destroyLivenessConsistencyTimer;
- (void)_setupLivenessConsistencyTimerIfForeground;
- (void)_subjectAreaDidChange:(id)arg1;
- (void)_unobserveNotifications;
- (void)_observeNotifications;
- (void)_captureStillImageAsynchronouslyWithAspectRatio:(double)arg1 index:(unsigned long long)arg2 burst:(unsigned long long)arg3 interval:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_stopRunning:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_redoVideoPreviewLayer;
- (id)_frontFlashController;
- (void)_softwareZoomWithDevice:(id)arg1;
- (void)managedVideoCapturerDidCancel:(id)arg1;
- (void)managedVideoCapturer:(id)arg1 didFailWithError:(id)arg2;
- (void)managedVideoCapturer:(id)arg1 didSucceedWithFileURL:(id)arg2;
- (void)_videoRecordingCleanup;
- (void)managedVideoCapturer:(id)arg1 willAppendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)managedVideoCapturerDidBeginAudioRecording:(id)arg1;
- (void)managedVideoCapturerDidBeginVideoRecording:(id)arg1;
- (void)managedLensesProcessor:(id)arg1 didOutputTexture:(id)arg2;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeAdjustingExposure:(_Bool)arg2;
- (void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeLowLightCondition:(_Bool)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)continuousAutofocusAndExposureAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setAutofocusPointOfInterestAsynchronously:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setExposurePointOfInterestAsynchronously:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setZoomFactorAsynchronously:(double)arg1 devicePosition:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setZoomFactorAsynchronously:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setZoomFactor:(double)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setNightModeActiveAsynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setTorchActiveAsynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLensesActive:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setFlashActive:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDevicePositionAsynchronously:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkOnceIfOnNextFramePointIsInsideFaceRegion:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)convertToFrameCoordinates:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)convertViewCoordinates:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)detachUnsafeChanges:(CDUnknownBlockType)arg1;
- (void)performUnsafeChanges:(CDUnknownBlockType)arg1;
- (void)attachUnsafeChanges:(CDUnknownBlockType)arg1;
- (void)stopScanAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkScanAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startScanAsynchronouslyWithScanResultsHandler:(CDUnknownBlockType)arg1;
- (void)cancelRecordingAsynchronously;
- (void)stopRecordingAsynchronously;
- (void)startRecordingWithOutputSettings:(id)arg1 fileURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)captureSingleVideoFrameAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)captureStillImageAsynchronouslyWithAspectRatio:(double)arg1 burst:(unsigned long long)arg2 interval:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopStreamingAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)stopStreamingAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startStreamingAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startStreaming;
- (void)stopRunningAsynchronously:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 after:(double)arg3;
- (void)stopRunningAsynchronously:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)startRunningAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)startRunningImmediately;
- (void)_makeVideoPreviewGLView;
- (void)_setupVideoPreviewLayer;
- (void)_makeVideoPreviewLayer;
- (void)setupWithDevicePositionAsynchronously:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupWithDevicePosition:(unsigned long long)arg1;
- (void)_updateHRSIEnabled;
- (void)_setupWithDevicePosition:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

