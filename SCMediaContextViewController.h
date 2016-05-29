//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCMyStoryMediaContextViewControllerDelegate.h"
#import "SCPullToDismissGestureReceiver.h"
#import "SCVerticalSwipeViewDelegate.h"

@class NSString, SCMyStoryMediaContextViewController, SCUserSession, SCVerticalSwipeView, UIView;

@interface SCMediaContextViewController : UIViewController <SCVerticalSwipeViewDelegate, SCMyStoryMediaContextViewControllerDelegate, SCPullToDismissGestureReceiver>
{
    SCUserSession *_userSession;
    _Bool _headerInteractionEnabled;
    _Bool _shouldAppearWithContextMenuFullyVisible;
    id <SCMediaContextViewControllerDelegate> _delegate;
    UIView *_passThroughGesturesView;
    SCVerticalSwipeView *_verticalSwipeView;
    UIView *_swipeViewFooterView;
    SCMyStoryMediaContextViewController *_contextMenuViewController;
    long long _screenshotCount;
    long long _viewedCount;
}

@property(nonatomic) _Bool shouldAppearWithContextMenuFullyVisible; // @synthesize shouldAppearWithContextMenuFullyVisible=_shouldAppearWithContextMenuFullyVisible;
@property(nonatomic) long long viewedCount; // @synthesize viewedCount=_viewedCount;
@property(nonatomic) long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(nonatomic) _Bool headerInteractionEnabled; // @synthesize headerInteractionEnabled=_headerInteractionEnabled;
@property(retain, nonatomic) SCMyStoryMediaContextViewController *contextMenuViewController; // @synthesize contextMenuViewController=_contextMenuViewController;
@property(retain, nonatomic) UIView *swipeViewFooterView; // @synthesize swipeViewFooterView=_swipeViewFooterView;
@property(retain, nonatomic) SCVerticalSwipeView *verticalSwipeView; // @synthesize verticalSwipeView=_verticalSwipeView;
@property(retain, nonatomic) UIView *passThroughGesturesView; // @synthesize passThroughGesturesView=_passThroughGesturesView;
@property(nonatomic) __weak id <SCMediaContextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)hideContextView;
- (void)resetContextMenuAppearance;
- (void)verticalSwipeView:(id)arg1 pageDidFullyAppearForIndex:(unsigned long long)arg2 offsetEnabled:(_Bool)arg3;
- (void)_updateHeaderViewWithScrollOffset:(double)arg1 offsetEnabled:(_Bool)arg2;
- (void)verticalSwipeView:(id)arg1 didScrollToOffset:(double)arg2 offsetEnabled:(_Bool)arg3;
- (void)verticalSwipeView:(id)arg1 bottomSubviewDidBecomeVisible:(_Bool)arg2 offsetEnabled:(_Bool)arg3;
- (_Bool)shouldTriggerPullToDismissWithSwipeDirection:(unsigned long long)arg1;
- (void)hideMyStoryAndGoToFeed:(id)arg1;
- (void)hideMyStoryAndGoToChat:(id)arg1 friend:(id)arg2;
- (void)saveButtonPressedForMyStory:(id)arg1;
- (void)retryFailedPostButtonPressedForMyStory:(id)arg1;
- (void)headerAreaButtonPressed:(id)arg1;
- (void)affordanceButtonPressed:(id)arg1;
- (void)deleteButtonPressedForMyStory:(id)arg1;
- (void)updateHelperWithStory:(id)arg1 shouldShowViewers:(_Bool)arg2;
- (void)updateHeaderWithOffsetWithStory:(id)arg1;
- (void)updateViewersAndHeaderWithOffsetWithStory:(id)arg1 showContextMenu:(_Bool)arg2;
- (void)storyDidUploadSuccessfully:(id)arg1 story:(id)arg2;
- (void)updateHeaderNoOffsetWithStory:(id)arg1;
- (void)updateViewersAndHeaderNoOffsetWithStory:(id)arg1;
- (void)resetContextView;
- (void)disableAllContextMenuInteractionsWithOffset;
- (void)disableAllContextMenuInteractions;
- (void)disableSomeContextMenuInteractions;
- (void)enableContextMenuWithViewedCount:(long long)arg1 screenshotCount:(long long)arg2;
- (_Bool)showingMiniProfile;
- (void)setupContextMenu:(id)arg1;
- (void)didTapToSkip:(id)arg1;
- (void)setupTapGestureRecognizerForPassThroughGesturesView;
- (void)setupPassThroughGesturesView;
- (void)setupChildViews;
- (void)setupSwipeviewFooterView;
- (void)setupVerticalSwipeView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 friends:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

