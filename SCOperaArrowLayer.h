//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSString, SCOperaPage;

@interface SCOperaArrowLayer : NSObject <SCOperaLayer>
{
    _Bool _hasGradient;
    SCOperaPage *_page;
    unsigned long long _direction;
    double _opacity;
    NSString *_text;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) _Bool hasGradient; // @synthesize hasGradient=_hasGradient;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

