//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Helpers)
+ (id)imageBlendedFromImages:(id)arg1 scaledToSize:(struct CGSize)arg2 withScale:(double)arg3 transform:(struct CGAffineTransform)arg4;
+ (id)imageBlendedFromImages:(id)arg1 scaledToSize:(struct CGSize)arg2;
+ (id)imageRotatedFromImage:(id)arg1 byDegrees:(double)arg2;
+ (id)imageFromBottomImage:(id)arg1 topImage:(id)arg2;
+ (id)imageFromWebView:(id)arg1;
+ (id)imageFromView:(id)arg1 opaque:(_Bool)arg2 scale:(double)arg3 drawViewHierarchy:(_Bool)arg4;
+ (id)imageFromView:(id)arg1;
- (id)scaleImageToFullscreenWithNewFrame:(struct CGRect)arg1 orientation:(long long)arg2;
- (id)withAlpha:(double)arg1;
- (void)saveAsPNGToHomeDirectoryWithFilename:(id)arg1;
- (id)croppedImageToCircle;
- (id)croppedImageWithRatioRect:(struct CGRect)arg1;
- (id)croppedImageToSquare;
- (id)scaledImageToSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)scaledImageToSize:(struct CGSize)arg1;
@end

