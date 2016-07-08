//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSPastingViewport : NSObject
{
    double _zoomValue;
    struct CGRect _visibleRect;
}

+ (id)viewportWithVisibleRect:(struct CGRect)arg1 zoom:(double)arg2;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
- (id)viewportContainingLayers:(id)arg1;

@end
