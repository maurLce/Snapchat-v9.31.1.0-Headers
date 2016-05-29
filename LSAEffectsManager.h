//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLSharegroup, LSAEffectsManagerListenerAnnouncer, LSAQueuePerformer, NSString;

@interface LSAEffectsManager : NSObject
{
    struct LSCoreManager *_coreManager;
    struct LSAAudioDelegate *_audioDelegate;
    struct LSAHintsDelegateWrapper *_hintsDelegate;
    struct LSRGB2NV21Convertor *_rgb2NV21Convertor;
    struct LSFrameBuffer *_frameBuffer;
    struct CGSize _textureSize;
    LSAQueuePerformer *_performer;
    EAGLSharegroup *_sharegroup;
    long long _videoOrientation;
    struct RectTransform _inputImageTransform;
    _Bool _videoMirrored;
    _Bool _disableAllTrackers;
    long long _viewPortAspectRatioNumerator;
    long long _viewPortAspectRatioDenominator;
    _Bool _shouldClearUnusedResources;
    NSString *_pendingContentPath;
    LSAEffectsManagerListenerAnnouncer *_announcer;
}

+ (int)orientationWithUIImageOrientation:(long long)arg1;
+ (int)cameraTypeWithInputSource:(unsigned long long)arg1;
+ (id)defaultManager;
@property(retain, nonatomic) LSAEffectsManagerListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property _Bool shouldClearUnusedResources; // @synthesize shouldClearUnusedResources=_shouldClearUnusedResources;
@property(retain) NSString *pendingContentPath; // @synthesize pendingContentPath=_pendingContentPath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (long long)effectsCacheCapacity;
- (void)setExternalImageWithPath:(id)arg1 faceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setShouldAnimateNextInit;
- (void)setInitAnimationEnabled:(_Bool)arg1;
- (void)clearUnusedEffects;
- (void)clearMemoryAndWait;
- (void)clearMemory;
- (void)removeAllEffects;
- (void)tryToExecuteUnsafeBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEffectWithContentPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkPointInsideFaceRegion:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restartTracking;
- (long long)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setOriginalTextureTransform:(struct LSTransform *)arg1 modifiedTextureTransform:(struct LSTransform *)arg2 modifiedImageSize:(struct CGSize *)arg3 forImage:(id)arg4;
- (id)processImage:(id)arg1 inputSource:(unsigned long long)arg2 info:(id *)arg3 error:(id *)arg4;
- (id)processTexture:(int)arg1 textureSize:(struct CGSize)arg2 data:(void *)arg3 inputSource:(unsigned long long)arg4 info:(id *)arg5 error:(id *)arg6;
- (void)prepareFrameBufferForTextureSize:(struct CGSize)arg1;
- (id)processPixelBuffer:(struct __CVBuffer *)arg1 inputSource:(unsigned long long)arg2 modifySource:(_Bool)arg3 info:(id *)arg4 error:(id *)arg5;
- (id)processYUVPixelBuffer:(struct __CVBuffer *)arg1 modifySource:(_Bool)arg2 error:(id *)arg3;
- (id)processBGRAPixelBuffer:(struct __CVBuffer *)arg1 modifySource:(_Bool)arg2 error:(id *)arg3;
- (void)prepareConvertorsForInputSize:(struct CGSize)arg1;
- (void)prepareCropRegionForInputSize:(struct CGSize)arg1;
- (id)outputInfoDictionary;
- (void)updateTextureOrientation;
- (void)setViewPortAspectRatioNumerator:(long long)arg1 denominator:(long long)arg2;
- (void)setVideoMirrored:(_Bool)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (id)getGLContext;
- (void)prepareCoreManager;
- (void)dealloc;
- (id)initWithGLSharegroup:(id)arg1 trackersEnabled:(_Bool)arg2;
- (id)init;

@end

