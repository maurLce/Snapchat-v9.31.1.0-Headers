//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController;

@interface SCViewControllerPresentationAnimator : NSObject
{
    UIView *_baseView;
    UIViewController *_childVC;
    UIViewController *_parentVC;
    UIView *_previousBaseViewSuperview;
    UIView *_maskLayerView;
    struct CGRect _previousBaseViewFrame;
    _Bool _isCircleTransition;
    CDUnknownBlockType _baseViewPresentationAnimation;
    CDUnknownBlockType _baseViewSetupForDismissal;
    id <SCViewControllerPresentationAnimatorDelegate> _delegate;
    id <SCViewControllerPresentationAnimatorBaseViewDelegate> _baseViewDelegate;
    UIView *_darkBackgroundView;
    struct CGRect _startingFrame;
}

@property(nonatomic) struct CGRect startingFrame; // @synthesize startingFrame=_startingFrame;
@property(readonly, nonatomic) UIView *darkBackgroundView; // @synthesize darkBackgroundView=_darkBackgroundView;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorBaseViewDelegate> baseViewDelegate; // @synthesize baseViewDelegate=_baseViewDelegate;
@property(nonatomic) __weak id <SCViewControllerPresentationAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType baseViewSetupForDismissal; // @synthesize baseViewSetupForDismissal=_baseViewSetupForDismissal;
@property(copy, nonatomic) CDUnknownBlockType baseViewPresentationAnimation; // @synthesize baseViewPresentationAnimation=_baseViewPresentationAnimation;
- (void).cxx_destruct;
- (void)animateTransition;
- (id)initWithParentViewController:(id)arg1 childViewController:(id)arg2 baseView:(id)arg3 isCircleTransition:(_Bool)arg4;

@end

