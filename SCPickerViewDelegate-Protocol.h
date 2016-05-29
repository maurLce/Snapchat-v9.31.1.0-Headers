//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class SCPickerView, SCPickerViewRow, UIView;

@protocol SCPickerViewDelegate <UIScrollViewDelegate>
- (SCPickerViewRow *)pickerView:(SCPickerView *)arg1 viewForRow:(unsigned long long)arg2 inSection:(unsigned long long)arg3;

@optional
- (UIView *)pickerView:(SCPickerView *)arg1 viewForSelectedRow:(unsigned long long)arg2 reusableView:(UIView *)arg3;
- (void)pickerView:(SCPickerView *)arg1 didSelectItemAtRow:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (void)pickerView:(SCPickerView *)arg1 didStopOnItemAtRow:(unsigned long long)arg2 inSection:(unsigned long long)arg3;
- (double)pickerView:(SCPickerView *)arg1 percentWidthForSection:(unsigned long long)arg2;
@end

