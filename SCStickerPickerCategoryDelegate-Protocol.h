//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCStickerPickerCategoryCell, UIImage;

@protocol SCStickerPickerCategoryDelegate <NSObject>
- (void)unlockScroll;
- (void)lockScroll;
- (void)stickerSelected:(id <SCStickerProtocol>)arg1 center:(struct CGPoint)arg2 thumbnail:(UIImage *)arg3;
- (_Bool)stickerPickerCatogoryCellCanSelectSticker:(SCStickerPickerCategoryCell *)arg1;
@end

