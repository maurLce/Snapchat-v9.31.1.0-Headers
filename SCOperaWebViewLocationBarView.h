//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCOperaWebViewProgressView, UIImageView, UILabel;

@interface SCOperaWebViewLocationBarView : UIView
{
    UIView *_locationView;
    UILabel *_locationUrlLabel;
    UIImageView *_httpsLockIcon;
    UIImageView *_bottomBorderShadow;
    SCOperaWebViewProgressView *_loaderBar;
}

- (void).cxx_destruct;
- (void)hideLocationBar;
- (void)showLocationBar;
- (void)updateProgressBar:(float)arg1;
- (void)updateLocationBarAsText:(id)arg1;
- (void)_updateLayoutConstraintsForScheme:(id)arg1;
- (void)updateLocationBarScheme:(id)arg1 host:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2 fontColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;

@end

