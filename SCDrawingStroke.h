//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDrawingStroke.h"

@class NSArray, NSString, UIColor;

@interface SCDrawingStroke : NSObject <SCDrawingStroke>
{
    double _lineWidth;
    NSArray *_points;
    UIColor *_color;
}

@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLineWidth:(double)arg1 points:(id)arg2 color:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

