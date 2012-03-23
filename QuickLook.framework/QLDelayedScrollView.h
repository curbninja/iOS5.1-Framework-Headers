/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIScrollView.h"

@interface QLDelayedScrollView : UIScrollView
{
    id <QLDelayedScrollViewDelegate> _delayedScrollViewDelegate;
    struct CGRect _newFrame;
    struct CGRect _newBounds;
    BOOL _isRotating;
    struct CGRect _oldScrollerBounds;
    struct CGRect _rotationRect;
    unsigned int _rotationEdgePin;
    float _oldWidth;
}

- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_centerRotationRectWithWebViewToScale:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_redrawWebView:(id)arg1 withOldWidth:(float)arg2 andNewSize:(struct CGSize)arg3 enablingTileDrawing:(BOOL)arg4;
- (void)didRotateToInterfaceOrientation:(int)arg1;
- (void)layoutSubviews;
- (void)setDelayedScrollViewDelegate:(id)arg1;
- (void)_setIsRotating:(BOOL)arg1;

@end
