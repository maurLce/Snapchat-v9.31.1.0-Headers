//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAlertViewActionButton.h"

@class NSString, SCLoadingIndicatorView, UIColor, UIImageView, UIView;

@interface SCOperaSubscriptionButton : SCAlertViewActionButton
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    double _assetSpacing;
    UIView *_assetView;
    NSString *_buttonTitle;
    UIImageView *_actionView;
    UIImageView *_reverseActionView;
    SCLoadingIndicatorView *_reverseLoadingView;
    SCLoadingIndicatorView *_loadingView;
    NSString *_actionButtonTitle;
    NSString *_reverseActionTitle;
    NSString *_loadingButtonTitle;
    NSString *_reverseLoadingTitle;
}

- (void).cxx_destruct;
- (void)_setAssetViewWithSpacing:(double)arg1;
- (void)_setColor;
- (void)_setTitle;
- (void)setButtonState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layer:(id)arg2;

@end

