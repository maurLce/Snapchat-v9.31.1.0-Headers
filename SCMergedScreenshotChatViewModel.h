//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMergedChatViewModel.h"

#import "SCScreenshotChatCellViewConfig.h"

@class NSString;

@interface SCMergedScreenshotChatViewModel : SCMergedChatViewModel <SCScreenshotChatCellViewConfig>
{
}

- (id)_textForScreenshotNotificationLabel;
- (id)attributedTextForScreenshotNotificationLabel;
- (double)heightForScreenshotLabel;
- (double)topMarginForScreenshotLabel;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

