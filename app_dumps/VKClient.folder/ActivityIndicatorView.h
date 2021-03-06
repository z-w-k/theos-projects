/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, CALayer, DisableAnimationsLayerDelegate, UIColor, CABasicAnimation, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface ActivityIndicatorView : XXUnknownSuperclass {
	float _strokeWidthFraction;
	float _progressGapFraction;
	float _traceAlpha;
	UIColor* _traceColor;
	CABasicAnimation* _rotationAnimation;
	UIImage* _maskImage;
	float _progress;
	UIColor* _tintColor;
	CAShapeLayer* _traceLayer;
	CAShapeLayer* _progressLayer;
	CALayer* _imageLayer;
	DisableAnimationsLayerDelegate* _layerDelegate;
}
@property(retain, nonatomic) UIColor* tintColor;
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIImage* maskImage;
@property(readonly, retain, nonatomic) CABasicAnimation* rotationAnimation;
@property(retain, nonatomic) UIColor* traceColor;
@property(assign, nonatomic) float traceAlpha;
@property(assign, nonatomic) float progressGapFraction;
@property(assign, nonatomic) float strokeWidthFraction;
@property(retain, nonatomic) DisableAnimationsLayerDelegate* layerDelegate;
@property(retain, nonatomic) CALayer* imageLayer;
@property(readonly, retain, nonatomic) CAShapeLayer* progressLayer;
@property(readonly, retain, nonatomic) CAShapeLayer* traceLayer;
+(id)defaultSizeIndicator;
-(void).cxx_destruct;
-(void)_test;
-(void)setProgress:(float)progress animated:(BOOL)animated;
-(void)layoutSubviews;
-(void)updateColors;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

