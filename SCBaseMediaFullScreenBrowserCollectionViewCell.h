//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SCBaseMediaFullScreenView, SCChatBrowseStoryController, UIView;

@interface SCBaseMediaFullScreenBrowserCollectionViewCell : UICollectionViewCell
{
    SCBaseMediaFullScreenView *_baseMediaFullScreenView;
    UIView *_wrapperView;
    UIView *_accessoryView;
    SCChatBrowseStoryController *_storyController;
    id <SCBaseMediaFullScreenDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_attachStoryController;
- (void)_cleanOldView;
- (void)handleTap:(id)arg1;
- (void)handleDownPan:(id)arg1;
- (void)prepareForReuse;
- (_Bool)shouldDisableScroll;
- (void)didDismiss;
- (void)didFinishAnimation;
- (void)setFullScreenViewWithFrame:(struct CGRect)arg1 destinationBoundingFrame:(struct CGRect)arg2 parentVC:(id)arg3 delegate:(id)arg4 viewModel:(id)arg5 shouldDisableAudio:(_Bool)arg6 animated:(_Bool)arg7;

@end

