//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCLens;

@protocol SCLensDataProviderDelegate <NSObject>
- (void)lensDataProvider:(id <SCLensDataProvider>)arg1 didUpdateLens:(SCLens *)arg2;
- (void)lensDataProvider:(id <SCLensDataProvider>)arg1 didUpdateAllLenses:(NSArray *)arg2;
@end

