//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIImage;

@protocol SCStickerPickerMenuDelegate <NSObject>
- (void)stickerSelected:(id <SCStickerProtocol>)arg1 center:(struct CGPoint)arg2 thumbnail:(UIImage *)arg3;
- (void)closedStickerPickerMenuAtCategory:(NSIndexPath *)arg1 sticker:(NSIndexPath *)arg2;
- (void)openedStickerPickerMenu;
- (_Bool)canOpenStickerPickerMenu;
@end

