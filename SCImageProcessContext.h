//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, EAGLSharegroup, NSMutableDictionary;

@interface SCImageProcessContext : NSObject
{
    EAGLContext *_glContext;
    NSMutableDictionary *_intermediateTextureCache;
    struct __CVOpenGLESTextureCache *_textureCache;
}

@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache; // @synthesize textureCache=_textureCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) EAGLSharegroup *sharegroup;
- (void)presentRenderbuffer:(unsigned long long)arg1;
- (void)clearColor;
- (void)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2;
- (unsigned int)createTextureWithImage:(struct CGImage *)arg1 textureUnit:(unsigned int)arg2;
- (unsigned int)namedIntermediateTexture:(id)arg1 pixelWidth:(unsigned int)arg2 pixelHeight:(unsigned int)arg3 textureUnit:(unsigned int)arg4;
- (void)invalidateIntermediateTextureCache;
- (unsigned int)createTextureWithData:(const void *)arg1 pixelWidth:(unsigned int)arg2 pixelHeight:(unsigned int)arg3 textureUnit:(unsigned int)arg4 pixelFormat:(unsigned int)arg5 minMagFilterType:(unsigned int)arg6;
- (void)useAsCurrentContext;
- (void)dealloc;
- (id)init;

@end

